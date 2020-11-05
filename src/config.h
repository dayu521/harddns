/*
 * This file is part of harddns.
 *
 * (C) 2016-2020 by Sebastian Krahmer,
 *                  sebastian [dot] krahmer [at] gmail [dot] com
 *
 * harddns is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * harddns is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with harddns. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef harddns_config_h
#define harddns_config_h

#include <stdint.h>
#include <string>
#include <map>
#include <list>


namespace harddns {

namespace config {


extern std::list<std::string> *ns;
extern bool log_requests, nss_aaaa;

extern std::map<std::string, std::string> internal_domains;

struct a_ns_cfg {
	std::string ip, cn, host, get;
	uint16_t port;
	bool rfc8484;
};

extern std::map<std::string, struct a_ns_cfg> *ns_cfg;


int parse_config(const std::string &cfgbase);


}

}

#endif

