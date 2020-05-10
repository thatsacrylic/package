// AUTOGENERATED. DO NOT EDIT.
// RUN `ruby bindings/luajit/generate.rb` TO UPDATE.

#include <bb/string/commands.h>

#if defined(BB_WIN32) || defined(BB_WIN64) || defined(BB_MINGW32) || defined(BB_MACOS) || defined(BB_LINUX) || defined(BB_IOS) || defined(BB_ANDROID) || defined(BB_EMSCRIPTEN)
#define BB_STRING_ENABLED

static int l_string_Asc( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  lua_pushnumber( L,(bb_int_t)bbAsc( __string ) );
  return 1;
}

static int l_string_Bin( lua_State *L ){
  bb_int_t __value = luaL_checknumber( L,1 );
  lua_pushstring( L,bbBin( __value ) );
  return 1;
}

static int l_string_Chr( lua_State *L ){
  bb_int_t __ascii = luaL_checknumber( L,1 );
  lua_pushstring( L,bbChr( __ascii ) );
  return 1;
}

static int l_string_CurrentDate( lua_State *L ){
  lua_pushstring( L,bbCurrentDate(  ) );
  return 1;
}

static int l_string_CurrentTime( lua_State *L ){
  lua_pushstring( L,bbCurrentTime(  ) );
  return 1;
}

static int l_string_Hex( lua_State *L ){
  bb_int_t __value = luaL_checknumber( L,1 );
  lua_pushstring( L,bbHex( __value ) );
  return 1;
}

static int l_string_Instr( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  BBStr * __find = _bbStrConst( luaL_checkstring( L,2 ) );
  bb_int_t __from;
  if( lua_gettop( L ) > 2 ){
    __from = luaL_checknumber( L,3 );
  }else{
   __from = 1;
  }
  lua_pushnumber( L,(bb_int_t)bbInstr( __string,__find,__from ) );
  return 1;
}

static int l_string_LSet( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  bb_int_t __size = luaL_checknumber( L,2 );
  lua_pushstring( L,bbLSet( __string,__size ) );
  return 1;
}

static int l_string_Left( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  bb_int_t __count = luaL_checknumber( L,2 );
  lua_pushstring( L,bbLeft( __string,__count ) );
  return 1;
}

static int l_string_Len( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  lua_pushnumber( L,(bb_int_t)bbLen( __string ) );
  return 1;
}

static int l_string_Lower( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  lua_pushstring( L,bbLower( __string ) );
  return 1;
}

static int l_string_Mid( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  bb_int_t __start = luaL_checknumber( L,2 );
  bb_int_t __count;
  if( lua_gettop( L ) > 2 ){
    __count = luaL_checknumber( L,3 );
  }else{
   __count = -1;
  }
  lua_pushstring( L,bbMid( __string,__start,__count ) );
  return 1;
}

static int l_string_RSet( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  bb_int_t __size = luaL_checknumber( L,2 );
  lua_pushstring( L,bbRSet( __string,__size ) );
  return 1;
}

static int l_string_Replace( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  BBStr * __from = _bbStrConst( luaL_checkstring( L,2 ) );
  BBStr * __to = _bbStrConst( luaL_checkstring( L,3 ) );
  lua_pushstring( L,bbReplace( __string,__from,__to ) );
  return 1;
}

static int l_string_Right( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  bb_int_t __count = luaL_checknumber( L,2 );
  lua_pushstring( L,bbRight( __string,__count ) );
  return 1;
}

static int l_string_String( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  bb_int_t __repeat = luaL_checknumber( L,2 );
  lua_pushstring( L,bbString( __string,__repeat ) );
  return 1;
}

static int l_string_Trim( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  lua_pushstring( L,bbTrim( __string ) );
  return 1;
}

static int l_string_Upper( lua_State *L ){
  BBStr * __string = _bbStrConst( luaL_checkstring( L,1 ) );
  lua_pushstring( L,bbUpper( __string ) );
  return 1;
}

#endif