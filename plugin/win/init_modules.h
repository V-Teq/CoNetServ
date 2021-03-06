#pragma once
#ifndef _INIT_MODULES_H_
#define _INIT_MODULES_H_

#include "module.h"
#include "shell.h"

#define MODULE_PING
module *ping;
bool init_module_ping();

#define MODULE_PING6
module *ping6;
bool init_module_ping6();

#define MODULE_TRACEROUTE
module *traceroute;
bool init_module_traceroute();

#define MODULE_TRACEROUTE6
module *traceroute6;
bool init_module_traceroute6();

#define MODULE_NSLOOKUP
module *nslookup;
bool init_module_nslookup();

#define MODULE_NMAP
module *nmap;
bool init_module_nmap();

#define MODULE_IPCONFIG
module *ipconfig;
bool init_module_ipconfig();

#endif /*_INIT_MODULES_H_*/