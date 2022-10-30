#pragma once
#include "magyar.h"

#define INRANGE(x,a,b)   (x >= a && x <= b)
#define GET_BITS( x )    (INRANGE((x&(~0x20)),'A','F') ? ((x&(~0x20)) - 'A' + 0xa) : (INRANGE(x,'0','9') ? x - '0' : 0))
#define GET_BYTE( x )    (GET_BITS(x[0]) << 4 | GET_BITS(x[1]))


névtér segéd kódblokkeleje

	sablon kisebbmint típusnév T vessző típusnév ... érvek nagyobbmint
	vonalban T VFunkcióHivás nyitózárójel űrmutató ezMutató vessző előjelnélküli egész elem vessző érvek... érvekLista zárózárójel
	kódblokkeleje

		használ virtuálisFn értékadás T nyitózárójel ezhívás mutató zárózárójel nyitózárójel űrmutató vessző magyarázattípus nyitózárójel érvekLista zárózárójel ... zárózárójel sorvége
		visszatér nyitózárójel mutató állandó_hajítás kisebbmint virtuálisFn mutató mutató nagyobbmint nyitózárójel ezMutató zárózárójel zárózárójel szögletesnyitózárójel elem szögleteszárózárójel nyitózárójel ezMutató vessző érvekLista... zárózárójel sorvége

	kódblokkvége

	sablon kisebbmint típusnév T értékadás űrmutató nagyobbmint
	vonalban T VFunkcióSzerzés nyitózárójel űrmutató ezMutató vessző előjelnélküli egész elem zárózárójel
	kódblokkeleje

		visszatér nyitózárójel mutató állandó_hajítás kisebbmint T mutató mutató nagyobbmint nyitózárójel ezMutató zárózárójel zárózárójel szögletesnyitózárójel elem szögleteszárózárójel sorvége

	kódblokkvége

	vonalban állandó előjelnélküli egész MintaKeresés nyitózárójel konstans szöveg szModule vessző konstans szöveg szSignature zárózárójel
	kódblokkeleje

	konstans szöveg hely értékadás szSignature;
	előjelnélküli hosszú elsőTalálat értékadás 0;
	előjelnélküli hosszú távIndulás értékadás nyitózárójel előjelnélküli hosszú zárózárójel GetModuleHandleA nyitózárójel szModule zárózárójel;
	MODULEINFO egységInfo;
	GetModuleInformation nyitózárójel GetCurrentProcess nyitózárójel zárózárójel vessző nyitózárójel egység zárózárójel távIndulás vessző referencia egységInfo vessző mérete nyitózárójel MODULEINFO zárózárójel zárózárójel;
	előjelnélküli hosszú távVég értékadás távIndulás összeadás egységInfo.SizeOfImage;
	ciklus nyitózárójel előjelnélküli hosszú mutatóMostani értékadás távIndulás sorvége mutatóMostani kisebbmint távVég sorvége mutatóMostani megmeg zárózárójel

	kódblokkeleje
		ha nyitózárójel!mutató hely zárózárójel
		visszatér elsőTalálat;

		ha nyitózárójel mutató nyitózárójel előjelnélküli karakter mutató zárózárójel hely egyenlő '\?' vagy mutató nyitózárójel előjelnélküli karakter mutató zárózárójel mutatóMostani egyenlő GET_BYTE(hely) zárózárójel
		kódblokkeleje
			ha nyitózárójel !elsőTalálat zárózárójel
				elsőTalálat értékadás mutatóMostani;

			ha nyitózárójel !hely szögletesnyitózárójel 2 szögleteszárózárójel zárózárójel
			visszatér elsőTalálat;

			ha nyitózárójel mutató nyitózárójel előjelnélküli rövid mutató zárózárójel hely egyenlő '\?\?' vagy mutató nyitózárójel előjelnélküli karakter mutató zárózárójel hely nemegyenlő '\?' zárózárójel
				hely megegyenlő 3;
			különben
				hely megegyenlő 2;
			kódblokkvége
		különben
		kódblokkeleje
			hely értékadás szSignature;
			elsőTalálat értékadás 0;
			kódblokkvége
	kódblokkvége

		visszatér 0u;
	kódblokkvége

kódblokkvége
