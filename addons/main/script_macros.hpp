#define DEBUG_SYNCHRONOUS
#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"



#define DEFAULT_LINKED_ITEMS    "ItemMap","ItemCompass","ItemWatch","ItemRadio"
#define DEFAULT_MAGAZINES       "HandGrenade","HandGrenade","SmokeShell","SmokeShell"
#define DEFAULT_RK62_MAGS       "KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag","KARRK62_Mag"
#define DEFAULT_WEAPONS         "Throw","Put","binocular"

#define TRANSPORT_ITEM(item, cnt)\
        class _xx_##item {\
            name = #item;\
            count = cnt;\
        }

#define TRANSPORT_BACKPACKS(item, cnt)\
        class _xx_##item {\
            backpack = #item;\
            count = cnt;\
        }
        
#define TRANSPORT_WEAPON(item, cnt)\
        class _xx_##item {\
            weapon = #item;\
            count = cnt;\
        }
        
#define TRANSPORT_MAGAZINE(item, cnt)\
        class _xx_##item {\
            magazine = #item;\
            count = cnt;\
        }

// Default versioning level
#define DEFAULT_VERSIONING_LEVEL 2

#define DGVAR(varName)    if(isNil "ACE_DEBUG_NAMESPACE") then { ACE_DEBUG_NAMESPACE = []; }; if(!(QUOTE(GVAR(varName)) in ACE_DEBUG_NAMESPACE)) then { PUSH(ACE_DEBUG_NAMESPACE, QUOTE(GVAR(varName))); }; GVAR(varName)
#define DVAR(varName)     if(isNil "ACE_DEBUG_NAMESPACE") then { ACE_DEBUG_NAMESPACE = []; }; if(!(QUOTE(varName) in ACE_DEBUG_NAMESPACE)) then { PUSH(ACE_DEBUG_NAMESPACE, QUOTE(varName)); }; varName
#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)
#define DEFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#undef QFUNC
#undef QEFUNC
#define QFUNC(var1) QUOTE(DFUNC(var1))
#define QEFUNC(var1,var2) QUOTE(DEFUNC(var1,var2))

#define GETVAR_SYS(var1,var2) getVariable [ARR_2(QUOTE(var1),var2)]
#define SETVAR_SYS(var1,var2) setVariable [ARR_2(QUOTE(var1),var2)]
#define SETPVAR_SYS(var1,var2) setVariable [ARR_3(QUOTE(var1),var2,true)]

#undef GETVAR
#define GETVAR(var1,var2,var3) (var1 GETVAR_SYS(var2,var3))
#define GETMVAR(var1,var2) (missionNamespace GETVAR_SYS(var1,var2))
#define GETUVAR(var1,var2) (uiNamespace GETVAR_SYS(var1,var2))
#define GETPRVAR(var1,var2) (profileNamespace GETVAR_SYS(var1,var2))
#define GETPAVAR(var1,var2) (parsingNamespace GETVAR_SYS(var1,var2))

#undef SETVAR
#define SETVAR(var1,var2,var3) var1 SETVAR_SYS(var2,var3)
#define SETPVAR(var1,var2,var3) var1 SETPVAR_SYS(var2,var3)
#define SETMVAR(var1,var2) missionNamespace SETVAR_SYS(var1,var2)
#define SETUVAR(var1,var2) uiNamespace SETVAR_SYS(var1,var2)
#define SETPRVAR(var1,var2) profileNamespace SETVAR_SYS(var1,var2)
#define SETPAVAR(var1,var2) parsingNamespace SETVAR_SYS(var1,var2)

#define GETGVAR(var1,var2) GETMVAR(GVAR(var1),var2)
#define GETEGVAR(var1,var2,var3) GETMVAR(EGVAR(var1,var2),var3)

#define ARR_SELECT(ARRAY,INDEX,DEFAULT) (if (count ARRAY > INDEX) then {ARRAY select INDEX} else {DEFAULT})
#define ANY_OF(ARRAY,CONDITION) (ARRAY findIf {CONDITION} != -1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(functions\DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(functions\DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif