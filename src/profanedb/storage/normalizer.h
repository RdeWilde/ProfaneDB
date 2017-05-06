/*
 * ProfaneDB - A Protocol Buffers database.
 * Copyright (C) 2017  "Giorgio Azzinnaro" <giorgio.azzinnaro@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef PROFANEDB_STORAGE_NORMALIZER_H
#define PROFANEDB_STORAGE_NORMALIZER_H

#include <map>

#include <google/protobuf/descriptor_database.h>
#include <google/protobuf/any.h>
#include <google/protobuf/message.h>

#include "parser.h"

namespace profanedb {
namespace storage {

// Normalizer takes care of converting a message as defined by the user
// into a map of keys and Messages,
// where any keyable nested message is brought to top level
// and its key is used as reference in the parent message
class Normalizer
{
public:
    Normalizer(Parser & parser);
    
    // This is just a layer on top of NormalizeMessage(Message) to parse an Any message
    std::map<std::string, const google::protobuf::Message &> NormalizeMessage(
        const google::protobuf::Any & serializable);
    
    // Unnest keyable messages and assign their key to their parent object
    std::map<std::string, const google::protobuf::Message &> NormalizeMessage(
        const google::protobuf::Message & message);
    
private:
    Parser & parser;
    // This holds the schema as defined by the user (needed to parse the incoming messages)
    std::shared_ptr<google::protobuf::DescriptorPool> schemaPool;
    
    // A reference to /usr/include and profanedb/protobuf/options.proto
    // + keyable message fields converted to hold a reference of their key
    std::unique_ptr<google::protobuf::MergedDescriptorDatabase> normalizedMergedDescriptorDb;
    std::shared_ptr<google::protobuf::DescriptorPool> normalizedPool;
    
    google::protobuf::DynamicMessageFactory messageFactory;
    
    std::string FieldToKey(const google::protobuf::Message & container, const google::protobuf::FieldDescriptor & fd) const;
    void CopyField(const google::protobuf::FieldDescriptor & fd, const google::protobuf::Message & from, google::protobuf::Message & to);
};
}
}

#endif // PROFANEDB_STORAGE_NORMALIZER_H