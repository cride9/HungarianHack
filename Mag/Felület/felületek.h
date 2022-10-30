#pragma once
#include "../SegédEszközök.h"
#include "../magyar.h"
#define felületlétrehozás "CreateInterface"

// felületek
#include "Felületek/tábla.h"
#include "Felületek/motorgff.h"
#include "Felületek/felszín.h"

névtér f kódblokkeleje

	
	vonalban motorGff mutató MotorGff sorvége
	vonalban tábla mutató Tábla sorvége
	vonalban felszín mutató Felszín sorvége

	sablon kisebbmint típusnév típus nagyobbmint
	típus mutató SzerezdMegAFelületet nyitózárójel konstans szöveg könyvtár vessző konstans szöveg név zárózárójel 
	kódblokkeleje

		konstans egység egységFoganytú értékadás szerezdmegazegységfoganytút nyitózárójel újraértelmezett_hajítás kisebbmint LPCWSTR nagyobbmint nyitózárójel könyvtár zárózárójel zárózárójel sorvége
		
		ha nyitózárójel nem egységFoganytú zárózárójel kódblokkeleje
			visszatér nullamutató sorvége
		kódblokkvége

		konstans messzifolyamat függvényCím értékadás szerezdmegafolyamatcímet nyitózárójel egységFoganytú vessző felületlétrehozás zárózárójel sorvége
		
		ha nyitózárójel nem függvényCím zárózárójel kódblokkeleje
			visszatér nullamutató sorvége
		kódblokkvége

		használ Fn értékadás típus mutató nyitózárójel mutató zárózárójel nyitózárójel konstans szöveg vessző egészmutató zárózárójel sorvége
		konstans Fn lopottFunkció értékadás újraértelmezett_hajítás kisebbmint Fn nagyobbmint nyitózárójel függvényCím zárózárójel sorvége

		visszatér lopottFunkció nyitózárójel név vessző nullamutató zárózárójel sorvége

	kódblokkvége

	űr FelületekElőkészítése nyitózárójel zárózárójel sorvége

kódblokkvége