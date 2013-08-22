#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

int main() {

	lua_State *l = luaL_newstate();
        lua_close(l);
	return 0;
}
