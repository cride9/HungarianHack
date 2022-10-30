#pragma once
#include "../KülsőBővítmények/KisHorgony/minhook.h"
#include "../KülsőBővítmények/KisHorgony/trampoline.h"
#include "../KülsőBővítmények/KisHorgony/detour.hpp"
#include <process.h>
#include <Psapi.h>
#include <Windows.h>
#include <iostream>

/* credit: https://github.com/skver0/ce */
/* zoiak is gae */

//  LOGIKAI OPERÁTOROK
#define és &&
#define vagy ||
#define nemegyenlő !=
#define egyenlő ==
#define nagyobbmint >
#define kisebbmint <
#define nagyobbvagyegyenlő >=
#define kisebbvagyegyenlő <=
#define nem !

//  MŰVELETEK
#define megmeg ++
#define bölböl --
#define megegyenlő +=
#define bölegyenlő -=
#define szoregyenlő *=
#define maradékegyenlő %=
#define osztásegyenlő /=
#define osztás /
#define összeadás +
#define kivonás -
#define maradék %
#define értékadás =
#define nyíl ->

//  TÍPUSOK
#define űr void
#define előjeles signed
#define előjelnélküli unsigned
#define egész int
#define lebeg float
#define dupla double
#define logikai bool
#define hosszú long
#define nagyonhosszú long long
#define rövid short
#define karakter char
#define wkarakter wchar_t
#define szöveg char *
#define konstans const
#define rekord struct

//  POINTEREK
#define egészmutató int *
#define floámutató float *
#define karaktermutató char *
#define űrmutató void *
#define duplamutató double *
#define rövidmutató short *
#define hosszúmutató long *
#define nagyonhosszúmutató long long *
#define mutató *

#define referencia &

//  LOGIKAI + hozzá tartozó
#define ha if
#define különben else
#define kapcsoló switch
#define eset case
#define igaz 1
#define hamis 0
#define törés break
#define folytat continue

//  CIKLUSOK
#define ciklus for
#define amíg while
#define csináld do

//  IN&OUTPUT + egyéb stringek
#define beolvas scanf
#define kiír printf
#define sortörés "\n"
#define egészÚjSor "%d\n"

//  SZERKEZET
#define sorvége ;
#define kezdő main
#define kódblokkeleje {
#define kódblokkvége }
#define nyitózárójel (
#define zárózárójel )
#define szögletesnyitózárójel [
#define szögleteszárózárójel ]
#define vessző ,
#define visszatér return
#define kettőspontkettőspont ::
#define kettőspont :
#define pont .

// SZÖVEG LITERÁL
#define nyitóidézőjel idézőjelben nyitózárójel
#define záróidézőjel )
#define idézőjelben(...) #__VA_ARGS__

#define normálhívás __stdcall
#define gyorshívás __fastcall
#define vektrohívás __vectorcall
#define ezhívás __thiscall
#define cmagyarazat __cdecl
#define magyarázattípus decltype
#define cmagyarazatmutató __cdecl*
#define nullamutató nullptr
#define vonalban inline
#define névtér namespace
#define állandó static
#define sablon template
#define típusnév typename
#define használ using
#define ez this

#define felsorolás enum
#define osztály class
#define nyilvános public
#define magán private

// KASZTOLÁSOK
#define újraértelmezett_hajítás reinterpret_cast
#define állandó_hajítás static_cast

#define példa HINSTANCE
#define fogantyú HANDLE
#define egység HMODULE
#define messzifolyamat FARPROC
#define folyamatcsatolás DLL_PROCESS_ATTACH

//  EGYÉB
#define ugrás goto
#define mérete sizeof
#define semmi NULL

// Szöveg literálok használatához szükséges
#define cékód(...) __VA_ARGS__

#define célkönyvtárhívásokletiltása DisableThreadLibraryCalls
#define csináljszálat CreateThread
#define foganytúbezár CloseHandle
#define kicsihorgonyinicializálása MH_init
#define kicsihorgonykikapcsolás MH_DisableHook
#define kicsihorgonyeltávolítás MH_RemoveHook
#define kicsihorgonyuninicializálás MH_Uninit
#define mindenhorgony MH_ALL_HOOKS
#define készítés Create
#define eredetimegszerzése GetOriginal
#define kerülőúthorgony CDetourHook
#define billentyűállapot GetKeyState
#define billentyűlenyomva GetAsyncKeyState
#define alvás Sleep
#define szabadítsdfelkönyvtáraséslépjkiaszálból FreeLibraryAndExitThread
#define szerezdmegazegységfoganytút GetModuleHandle
#define szerezdmegafolyamatcímet GetProcAddress

#define motor "engine.dll"
#define kl_mozgásminta "55 8B EC 81 EC ? ? ? ? 53 56 8A F9"

// shit pasted dont even think about it