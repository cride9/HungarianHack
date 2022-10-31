#pragma once

osztály felszín kódblokkeleje
nyilvános kettőspont

	űr RajzoljSzöveget(egész X vessző egész Y vessző egész r vessző egész g vessző egész b vessző egész a vessző előjelnélküli hosszú Font vessző logikai Center vessző konstans karaktermutató _Input vessző ...) kódblokkeleje

		egész segítség értékadás 0 sorvége

		karakter puffer szögletesnyitózárójel 2048 szögleteszárózárójel értékadás kódblokkeleje '\0' kódblokkvége sorvége

		va_list érvek sorvége

		va_start(érvek, _Input) sorvége
		vsprintf_s nyitózárójel puffer vessző _Input vessző érvek zárózárójel sorvége
		va_end(érvek) sorvége

		előjelnélküli egész méret értékadás strlen nyitózárójel puffer zárózárójel összeadás 1 sorvége

		wkarakter mutató szélesPuffer értékadás új wkarakter szögletesnyitózárójel méret szögleteszárózárójel sorvége

		mbstowcs_s nyitózárójel 0 vessző szélesPuffer vessző méret vessző puffer vessző méret kivonás 1 zárózárójel sorvége

		egész szélesség értékadás 0 vessző magasság értékadás 0 sorvége

		ha nyitózárójel Center zárózárójel kódblokkeleje
			MegszerezniBetűméretet nyitózárójel Font vessző szélesPuffer vessző szélesség vessző magasság zárózárójel sorvége
		kódblokkvége

		RajzSzínSzövegÁllítás nyitózárójel r vessző g vessző b vessző a zárózárójel sorvége
		RajzBetűtípusBeállítás nyitózárójel Font zárózárójel sorvége
		RajzPozícióStövegÁllítás nyitózárójel X kivonás  nyitózárójel szélesség osztás 2 zárózárójel vessző Y zárózárójel sorvége
		RajzNyomtatásSzöveg nyitózárójel szélesPuffer vessző wcslen(szélesPuffer zárózárójel zárózárójel sorvége

		törlés szélesPuffer vessző méret sorvége;

		visszatér sorvége
	kódblokkvége

	űr RajzSzínÁllítás nyitózárójel lebeg mutató colDraw zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 14 vessző colDraw zárózárójel sorvége
	kódblokkvége

	űr RajzSzínÁllítás nyitózárójel egész r vessző egész g vessző egész b vessző egész a zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 15 vessző r vessző g vessző b vessző a zárózárójel sorvége
	kódblokkvége

	űr RajzTöltöttNégyzet nyitózárójel egész x0 vessző egész y0 vessző egész x1 vessző egész y1 zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 16 vessző x0 vessző y0 vessző x1 vessző y1 zárózárójel sorvége
	kódblokkvége

	űr RajzTöltöttNégyzetÁtmenet nyitózárójel egész x0 vessző egész y0 vessző egész x1 vessző egész y1 vessző előjelnélküli egész uAlpha0 vessző előjelnélküli egész uAlpha1 vessző logikai bHorizontal zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 123 vessző x0 vessző y0 vessző x1 vessző y1 vessző uAlpha0 vessző uAlpha1 vessző bHorizontal zárózárójel sorvége
	kódblokkvége

	űr RajzKörvonalNégyzet nyitózárójel egész x0 vessző egész y0 vessző egész x1 vessző egész y1 zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 18 vessző x0 vessző y0 vessző x1 vessző y1 zárózárójel sorvége
	kódblokkvége

	űr RajzVonal nyitózárójel egész x0 vessző egész y0 vessző egész x1 vessző egész y1 zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 19 vessző x0 vessző y0 vessző x1 vessző y1 zárózárójel sorvége
	kódblokkvége

	űr RajzPolyVonal nyitózárójel egész mutató  x vessző egész mutató  y vessző egész nPoegészs zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 20 vessző x vessző y vessző nPoegészs zárózárójel sorvége
	kódblokkvége

	űr RajzBetűtípusBeállítás nyitózárójel előjelnélküli hosszú hFont zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 23 vessző hFont zárózárójel sorvége
	kódblokkvége

	űr RajzSzínSzövegÁllítás nyitózárójel lebeg mutató  color zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 24 vessző color zárózárójel sorvége
	kódblokkvége

	űr RajzSzínSzövegÁllítás nyitózárójel egész r vessző egész g vessző egész b vessző egész a zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 25 vessző r vessző g vessző b vessző a zárózárójel sorvége
	kódblokkvége

	űr RajzPozícióStövegÁllítás nyitózárójel egész x vessző egész y zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 26 vessző x vessző y zárózárójel sorvége
	kódblokkvége

	űr RajzNyomtatásSzöveg nyitózárójel konstans wkarakter mutató  wszText vessző egész nTextLength vessző egész drawType = 0 zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 28 vessző wszText vessző nTextLength vessző drawType zárózárójel sorvége
	kódblokkvége

	űr RajzTextúrÁllításPKZA nyitózárójel egész nIndex vessző konstans előjelnélküli szöveg rgba vessző egész iWide vessző egész iTall zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 37 vessző nIndex vessző rgba vessző iWide vessző iTall zárózárójel sorvége
	kódblokkvége

	űr RajzTextúraÁllítás nyitózárójel egész nIndex zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 38 vessző nIndex zárózárójel sorvége
	kódblokkvége

	egész ÚjTextúraLétrehozásID nyitózárójel logikai bProcedural értékadás hamis zárózárójel kódblokkeleje
		visszatér segéd kettőspontkettőspont VFunkcióHivás kisebbmint egész nagyobbmint  nyitózárójel ez vessző 43 vessző bProcedural zárózárójel sorvége
	kódblokkvége

	űr KurzorKinyitása nyitózárójel  zárózárójel kódblokkeleje
		visszatér segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 66 zárózárójel sorvége
	kódblokkvége

	űr KurzorBezárás nyitózárójel  zárózárójel kódblokkeleje
		visszatér segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 67 zárózárójel sorvége
	kódblokkvége

	előjelnélküli hosszú BetűtípusKészítés nyitózárójel  zárózárójel kódblokkeleje
		visszatér segéd kettőspontkettőspont VFunkcióHivás kisebbmint előjelnélküli hosszú nagyobbmint  nyitózárójel ez vessző 71 zárózárójel sorvége
	kódblokkvége

	logikai BetűtípusBeállítás nyitózárójel előjelnélküli hosszú hFont vessző konstans karakter mutató  szWindowsFontName vessző egész iTall vessző egész iWeight vessző egész iBlur vessző egész nScanLines vessző egész iFlags vessző egész nRangeMin = 0 vessző egész nRangeMax = 0 zárózárójel kódblokkeleje
		visszatér segéd kettőspontkettőspont VFunkcióHivás kisebbmint logikai nagyobbmint  nyitózárójel ez vessző 72 vessző hFont vessző szWindowsFontName vessző iTall vessző iWeight vessző iBlur vessző nScanLines vessző iFlags vessző nRangeMin vessző nRangeMax zárózárójel sorvége
	kódblokkvége

	űr MegszerezniBetűméretet nyitózárójel előjelnélküli hosszú hFont vessző const wchar_t mutató  wszText vessző egész& iWide vessző egész& iTall zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 79 vessző hFont vessző wszText vessző std kettőspontkettőspont ref nyitózárójel iWide zárózárójel vessző std kettőspontkettőspont ref nyitózárójel iTall zárózárójel zárózárójel sorvége
	kódblokkvége

	űr HangLejátszásFelület nyitózárójel konstans szöveg szFileName zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 82 vessző szFileName zárózárójel sorvége
	kódblokkvége

	űr RajzKörvonalKör nyitózárójel egész x vessző egész y vessző egész iRadius vessző egész nSegments zárózárójel kódblokkeleje
		segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 103 vessző x vessző y vessző iRadius vessző nSegments zárózárójel sorvége
	kódblokkvége

	//űr DrawTexturedPolygon nyitózárójel egész n vessző Vertex_t mutató  pVertice vessző bool bClipVertices = true zárózárójel kódblokkeleje
	//	segéd kettőspontkettőspont VFunkcióHivás kisebbmint űr nagyobbmint  nyitózárójel ez vessző 106 vessző n vessző pVertice vessző bClipVertices zárózárójel sorvége
	//kódblokkvége

	koordináta EgérPozícióMegszerzése nyitózárójel zárózárójel
	kódblokkeleje

		koordináta egérPozíció sorvége
		szerezdmegakurzorpozíciót nyitózárójel referencia egérPozíció zárózárójel sorvége
		képernyőklienshez nyitózárójel keresdmegablakot nyitózárójel 0 vessző "Counter-Strike: Global Offensive" zárózárójel vessző referencia egérPozíció zárózárójel sorvége

		visszatér egérPozíció sorvége

	kódblokkvége

	logikai EgérATérségbenVanE nyitózárójel egész x vessző egész y vessző egész xVég vessző egész yVég zárózárójel 
	kódblokkeleje

		konstans koordináta EgérPozíció értékadás EgérPozícióMegszerzése nyitózárójel zárózárójel sorvége

		ha nyitózárójel 
			EgérPozíció pont x nagyobbvagyegyenlő x és
			EgérPozíció pont y nagyobbvagyegyenlő y és
			EgérPozíció pont x kisebbvagyegyenlő xVég és
			EgérPozíció pont y kisebbvagyegyenlő yVég zárózárójel
		visszatér igaz sorvége

		visszatér hamis sorvége
		
	kódblokkvége

kódblokkvége sorvége