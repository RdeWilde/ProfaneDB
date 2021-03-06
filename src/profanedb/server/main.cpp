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

#include "server.h"

// TODO Move in separate class
#include <boost/program_options.hpp>
namespace po = boost::program_options;

int main(int argc, char* argv[]) {
    profanedb::server::Config config(argc, argv);
    
    // If help message was requested stop execution here
    if (config.ShowHelp())
        return 0;
    
    profanedb::server::Server server(config);
    server.Run();
    
    return 0;
}
