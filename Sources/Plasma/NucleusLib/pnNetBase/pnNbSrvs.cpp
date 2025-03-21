/*==LICENSE==*

CyanWorlds.com Engine - MMOG client, server and tools
Copyright (C) 2011  Cyan Worlds, Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Additional permissions under GNU GPL version 3 section 7

If you modify this Program, or any covered work, by linking or
combining it with any of RAD Game Tools Bink SDK, Autodesk 3ds Max SDK,
NVIDIA PhysX SDK, Microsoft DirectX SDK, OpenSSL library, Independent
JPEG Group JPEG library, Microsoft Windows Media SDK, or Apple QuickTime SDK
(or a modified version of those libraries),
containing parts covered by the terms of the Bink SDK EULA, 3ds Max EULA,
PhysX SDK EULA, DirectX SDK EULA, OpenSSL and SSLeay licenses, IJG
JPEG Library README, Windows Media SDK EULA, or QuickTime SDK EULA, the
licensors of this Program grant you additional
permission to convey the resulting work. Corresponding Source for a
non-source form of such a combination shall include the source code for
the parts of OpenSSL and IJG JPEG Library used as well as that of the covered
work.

You can contact Cyan Worlds, Inc. by email legal@cyan.com
 or by snail mail at:
      Cyan Worlds, Inc.
      14617 N Newport Hwy
      Mead, WA   99021

*==LICENSE==*/

#include "pnNbSrvs.h"
#include <string_theory/string>

#include "pnNbConst.h"

/*****************************************************************************
*
*   Local data
*
***/

static ST::string s_authAddrs[] = { ST::string() };
static ST::string s_fileAddrs[] = { ST::string() };
static ST::string s_gateKeeperAddrs[] = { ST::string() };

static unsigned s_clientPort = kDefaultClientPort;


/*****************************************************************************
*
*   Exports
*
***/

//============================================================================
// Auth
//============================================================================
unsigned GetAuthSrvHostnames (const ST::string*& addrs) {
    addrs = s_authAddrs;
    return std::size(s_authAddrs);
}

//============================================================================
void SetAuthSrvHostname (const ST::string& addr) {
    s_authAddrs[0] = addr;
}

//============================================================================
// File
//============================================================================
unsigned GetFileSrvHostnames (const ST::string*& addrs) {
    addrs = s_fileAddrs;
    return std::size(s_fileAddrs);
}

//============================================================================
void SetFileSrvHostname (const ST::string& addr) {
    s_fileAddrs[0] = addr;
}

//============================================================================
// GateKeeper
//============================================================================
unsigned GetGateKeeperSrvHostnames (const ST::string*& addrs) {
    addrs = s_gateKeeperAddrs;
    return std::size(s_gateKeeperAddrs);
}

//============================================================================
void SetGateKeeperSrvHostname (const ST::string& addr) {
    s_gateKeeperAddrs[0] = addr;
}

//============================================================================
// Client Port
//============================================================================
unsigned GetClientPort() {
    return s_clientPort;
}

//============================================================================
void SetClientPort(unsigned port) {
    s_clientPort = port;
}


//============================================================================
// User-visible Server
//============================================================================
static ST::string s_serverStatusUrl;
static ST::string s_serverSignupUrl;
static ST::string s_serverName;

//============================================================================
ST::string GetServerStatusUrl () {
    return s_serverStatusUrl;
}

//============================================================================
void SetServerStatusUrl (const ST::string& url) {
    s_serverStatusUrl = url;
}

//============================================================================
ST::string GetServerSignupUrl () {
    return s_serverSignupUrl;
}

//============================================================================
void SetServerSignupUrl (const ST::string& url) {
    s_serverSignupUrl = url;
}

//============================================================================
ST::string GetServerDisplayName () {
    return s_serverName;
}

//============================================================================
void SetServerDisplayName (const ST::string& name) {
    s_serverName = name;
}
