// file: globals.h
#ifndef __GLOBALS_H
#define __GLOBALS_H

//other includes that should be associated with global defs
//#include "tests.h"

#ifdef __SENSIBLE_MODIFIERS__
#define staticf protected
#define staticv nosave
#else
#define staticf static
#define staticv static
#endif

//Root directories for public and secure libs
#define PUBLIC_DIR          "/public"
#define SECURE_DIR          "/secure"
#define PUBLIC_LIB_DIR      PUBLIC_DIR"/lib"
#define SECURE_LIB_DIR      SECURE_DIR"/lib"
#define CORE_DIR            SECURE_DIR"/core"
#define CORE_MASTER_DIR     CORE_DIR"/master"
#define CORE_DAEMON_DIR     CORE_DIR"/daemon"


//directories for root libs
#define PUBLIC_COMPONENT_DIR    PUBLIC_LIB_DIR"/component"
#define PUBLIC_DAEMON_DIR       PUBLIC_LIB_DIR"/daemon"
#define PUBLIC_INHERIT_DIR      PUBLIC_LIB_DIR"/inherit"
#define PUBLIC_OBJ_DIR          PUBLIC_LIB_DIR"/obj"
#define PUBLIC SINGLETON_DIR    PUBLIC_LIB_DIR"/single"
#define PUBLIC_CONFIG_DIR       PUBLIC_DIR"/cfg"
#define PUBLIC_CMDS_DIR         PUBLIC_DIR"/cmds"
#define PUBLIC_VERBS_DIR        PUBLIC_CMDS_DIR"/verbs"
#define PUBLIC_LOG_DIR          PUBLIC_DIR"/log"
#define PUBLIC_ETC_DIR          PUBLIC_DIR"/etc"
#define PUBLIC_TMP_DIR          PUBLIC_DIR"/tmp"
#define DOMAINS_DIR             PUBLIC_DIR"/domains"
#define USER_DIR                PUBLIC_DIR"/user"
#define DOC_DIR                 PUBLIC_DIR"/doc"


//dirctories for root secure libs
#define SECURE_COMPONENT_DIR    SECURE_LIB_DIR"/component"
#define SECURE_DAEMON_DIR       SECURE_LIB_DIR"/daemon"
#define SECURE_INHERIT_DIR      SECURE_LIB_DIR"/inherit"
#define SECURE_OBJ_DIR          SECURE_LIB_DIR"/obj"
#define SECURE_SINGLETON_DIR    SECURE_LIB_DIR"/single"
#define SECURE_CONFIG_DIR       SECURE_DIR"/cfg"
#define SECURE_CMDS_DIR         SECURE_DIR"/cmds"
#define SECURE_VERBS_DIR        SECURE_CMDS_DIR"/verbs" 
#define SECURE_LOG_DIR          SECURE_DIR"/log"
#define SECURE_ETC_DIR          SECURE_DIR"/etc"
#define SECURE_TMP_DIR          SECURE_DIR"/tmp"
#define SEFUNS_DIR              SECURE_DIR"/sefun"
#define SEFUNTESTS_DIR          SEFUNS_DIR"/tests"

//save directories
#define SAVE_DIR            SECURE_DIR"/save
#define SAVE_PLAYERS_DIR    SAVE_DIR"/players"
#define SAVE_CREATORS_DIR   SAVE_DIR"/creators"
#define SAVE_DATA_DIR       SAVE_DIR"/data"
#define SAVE_BIN_DIR        SAVE_DIR"/binaries"


//public common objects and files
#define DEBUG_LOG           PUBLIC_LOG_DIR"/debug.log"
#define ERROR_LOG           PUBLIC_LOG_DIR"/log"
#define COMPILE_LOG         PUBLIC_LOG_DIR"/compile"
#define CMDS_TESTS          PUBLIC_CMDS_DIR"/tests"
#define TMP_EVAL_FILE       PUBLIC_TMP_DIR"/tmp_eval_file"
#define CODE_TMP_FILE       PUBLIC_TMP_DIR"/CODE_TMP_FILE"

//secure common objects and files
#define SWAP_FILE           SECURE_TMP_DIR"/swapfile"
#define SECURE_DEBUG_LOG    SECURE_LOG_DIR"/debug.log"
#define OVERRIDES_FILE      SEFUNS_DIR"/sefun"
#define WELCOME_TEXT_FILE   SECURE_ETC_DIR"/motd"

#define SEFUN_OBJ       SEFUNS_DIR"/sefun"
#define MASTER_OBJ      CORE_MASTER_DIR"/master"
#define VALID_OBJ       CORE_MASTER_DIR"/valid"
#define LOGIN_OBJ       SECURE_OBJ_DIR"/login"
#define USER_OBJ        SECURE_OBJ_DIR"/user"
#define VOID_OBJ        SECURE_SINGLETON_DIR"/void"
#define INH_OBJ         SECURE_SINGLETON_DIR"/inh"


//commonly inherited objects
#define CLEAN_UP        SECURE_INHERIT_DIR"/clean_up"
#define BASE_OBJ        SECURE_INHERIT_DIR"/base"


//core daemons daemons
#define VIRTUAL_D  CORE_DAEMON_DIR"/virtual"


//etc
#define ROOT_UID     "Root"
#define BACKBONE_UID "Backbone"
//#define COMMAND_PREFIX "/command/"


// classes for message() efun.
#define M_STATUS "status"
#define M_SAY    "say"



#endif
