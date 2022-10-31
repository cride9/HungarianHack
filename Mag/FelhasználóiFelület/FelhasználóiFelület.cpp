#include "FelhasználóiFelület.h"

egész kezdőX értékadás 1000 sorvége
egész kezdőY értékadás 200 sorvége
egész szélesség értékadás 700 sorvége
egész magasság értékadás 500 sorvége

#define ablakKörvonal 105 vessző  17 vessző  191 vessző  255
#define ablakBelseje 52 vessző  8 vessző  94 vessző  255

#define mellékAblakBelseje 41 vessző  6 vessző  74 vessző  255
#define mellékAblakBelsejeKijelölve 61 vessző  9 vessző  110 vessző  255
#define kijelölve 73 vessző 11 vessző 133 vessző 255

használ névtér f sorvége

egész mostaniPozícióX értékadás 0 sorvége
egész mostaniPozícióY értékadás 0 sorvége

űr felhasználóifelület kettőspontkettőspont FelhasználóiFelület nyitózárójel  zárózárójel 
kódblokkeleje
	lebeg piros értékadás 43 sorvége
	lebeg zöld értékadás 7 sorvége
	lebeg kék értékadás 79 sorvége

	lebeg pirosLépés értékadás kivonás nyitózárójel piros kivonás 26 zárózárójel osztás 499.f sorvége
	lebeg zöldLépés értékadás kivonás nyitózárójel zöld kivonás 4 zárózárójel osztás 499.f sorvége
	lebeg bLépés értékadás kivonás nyitózárójel kék kivonás 48 zárózárójel osztás 499.f sorvége

	egész tartalékKezdőY értékadás kezdőY sorvége

	Felszín nyíl RajzSzínÁllítás nyitózárójel 20 vessző  20 vessző  20 vessző  255 zárózárójel sorvége
	Felszín nyíl RajzTöltöttNégyzet nyitózárójel kezdőX kivonás 2 vessző  kezdőY kivonás 2 vessző  kezdőX összeadás szélesség összeadás 2 vessző  kezdőY összeadás magasság összeadás 2 zárózárójel sorvége

	ciklus nyitózárójel egész i értékadás 0 sorvége i kisebbvagyegyenlő magasság sorvége i megmeg zárózárójel
	kódblokkeleje
	Felszín nyíl RajzSzínÁllítás nyitózárójel padló nyitózárójel piros zárózárójel  vessző  padló nyitózárójel zöld zárózárójel  vessző  padló nyitózárójel kék zárózárójel  vessző  255 zárózárójel sorvége
	Felszín nyíl RajzTöltöttNégyzet nyitózárójel kezdőX vessző  tartalékKezdőY vessző  kezdőX összeadás szélesség vessző  tartalékKezdőY összeadás 1 zárózárójel sorvége
	tartalékKezdőY megmeg sorvége

	piros megegyenlő pirosLépés sorvége
	zöld megegyenlő zöldLépés sorvége
	kék megegyenlő bLépés sorvége
	kódblokkvége

	állandó alapszöveg CÉLZÁSSEGÍTŐ_FŐ szögletesnyitózárójel szögleteszárózárójel értékadás kódblokkeleje "alap" vessző "vegyes" kódblokkvége sorvége
	RajzoljAblakot nyitózárójel kezdőX összeadás 5 vessző kezdőY összeadás 35 vessző kezdőX összeadás  nyitózárójel szélesség osztás 2 zárózárójel  kivonás 5 vessző kezdőY összeadás  nyitózárójel magasság osztás 2 zárózárójel  kivonás 5 vessző igaz vessző 2 vessző célzásSegítőAblakok[KIVÁLASZTOTT_CÉLZÁSSEGÍTŐ_FŐ] vessző CÉLZÁSSEGÍTŐ_FŐ zárózárójel  sorvége

	állandó logikai haha értékadás hamis sorvége
	RajzoljJelölőNégyzetet nyitózárójel "teszt1" vessző haha zárózárójel  sorvége

	RajzoljAblakot nyitózárójel kezdőX összeadás 5 vessző kezdőY összeadás  nyitózárójel magasság osztás 2 zárózárójel  vessző kezdőX összeadás  nyitózárójel szélesség osztás 2 zárózárójel  kivonás 5 vessző kezdőY összeadás magasság kivonás 5 vessző hamis vessző 0 vessző célzásSegítőAblakok[KIVÁLASZTOTT_CÉLZÁSSEGÍTŐ_EXTRÁK] vessző CÉLZÁSSEGÍTŐ_FŐ zárózárójel  sorvége

	állandó logikai haha2 értékadás hamis sorvége
	RajzoljJelölőNégyzetet nyitózárójel "teszt2" vessző haha2 zárózárójel  sorvége

	állandó alapszöveg CÉLZÁSSEGÍTŐ_FEGYVEREK szögletesnyitózárójel szögleteszárózárójel értékadás kódblokkeleje "automata" vessző "felderito" vessző "shr" vessző "pisztoly" vessző "npisztoly" vessző "egyéb" kódblokkvége sorvége
	RajzoljAblakot nyitózárójel kezdőX összeadás  nyitózárójel szélesség osztás 2 zárózárójel vessző kezdőY összeadás 35 vessző kezdőX összeadás szélesség kivonás 5 vessző kezdőY összeadás magasság kivonás 5 vessző igaz vessző 6 vessző célzásSegítőAblakok[KIVÁLASZTOTT_CÉLZÁSSEGÍTŐ_FEGYVEREK] vessző CÉLZÁSSEGÍTŐ_FEGYVEREK zárózárójel  sorvége

	állandó logikai haha3 értékadás hamis sorvége
	RajzoljJelölőNégyzetet nyitózárójel "teszt3" vessző haha3 zárózárójel  sorvége
	állandó logikai haha4 értékadás hamis sorvége
	RajzoljJelölőNégyzetet nyitózárójel "teszt4" vessző haha4 zárózárójel  sorvége
kódblokkvége

űr felhasználóifelület kettőspontkettőspont RajzoljAblakot nyitózárójel egész x vessző egész y vessző egész xVége vessző egész yVége vessző logikai mellékAblakok vessző egész mellékAblakDarab vessző egész referencia kiválasztottAblak vessző alapszöveg konstans tabs szögletesnyitózárójel szögleteszárózárójel zárózárójel
kódblokkeleje
	ha  nyitózárójel mellékAblakok zárózárójel
	kódblokkeleje
		egész darabok értékadás  nyitózárójel xVége kivonás x zárózárójel  osztás mellékAblakDarab sorvége
		ciklus  nyitózárójel size_t i értékadás 1 sorvége i kisebbvagyegyenlő mellékAblakDarab sorvége i megmeg zárózárójel  kódblokkeleje

			Felszín nyíl RajzSzínÁllítás nyitózárójel ablakKörvonal zárózárójel  sorvége
			Felszín nyíl RajzKörvonalNégyzet nyitózárójel x összeadás  nyitózárójel darabok szorzás i zárózárójel  kivonás darabok kivonás 1 vessző y kivonás 1 vessző x összeadás  nyitózárójel darabok szorzás i zárózárójel  összeadás 1 vessző y összeadás 30 összeadás 1 zárózárójel  sorvége

			ha  nyitózárójel kiválasztottAblak egyenlő i || Felszín nyíl EgérATérségbenVanE nyitózárójel x összeadás  nyitózárójel darabok szorzás i zárózárójel  kivonás darabok kivonás 1 vessző y kivonás 1 vessző x összeadás  nyitózárójel darabok szorzás i zárózárójel  összeadás 1 vessző y összeadás 30 összeadás 1 zárózárójel  zárózárójel  kódblokkeleje

				ha  nyitózárójel GetAsyncKeyState nyitózárójel VK_LBUTTON zárózárójel  zárózárójel
					kiválasztottAblak értékadás i sorvége

				Felszín nyíl RajzSzínÁllítás nyitózárójel mellékAblakBelsejeKijelölve zárózárójel  sorvége
			kódblokkvége
			különben kódblokkeleje

				Felszín nyíl RajzSzínÁllítás nyitózárójel mellékAblakBelseje zárózárójel  sorvége
			kódblokkvége
			Felszín nyíl RajzTöltöttNégyzet nyitózárójel x összeadás  nyitózárójel darabok szorzás i zárózárójel  kivonás darabok vessző y vessző x összeadás  nyitózárójel darabok szorzás i zárózárójel  vessző y összeadás 30 zárózárójel  sorvége
			Felszín nyíl RajzoljSzöveget nyitózárójel x összeadás  nyitózárójel darabok szorzás i zárózárójel  kivonás  nyitózárójel darabok osztás 2 zárózárójel  vessző y összeadás 10 vessző 212 vessző 212 vessző 212 vessző 255 vessző felhasználóiFelületBetűtípusFegyverek vessző igaz vessző tabs[i kivonás 1].c_str nyitózárójel  zárózárójel  zárózárójel  sorvége
		kódblokkvége

		Felszín nyíl RajzSzínÁllítás nyitózárójel ablakKörvonal zárózárójel  sorvége
		Felszín nyíl RajzKörvonalNégyzet nyitózárójel x kivonás 1 vessző y összeadás 34 vessző xVége összeadás 1 vessző yVége összeadás 1 zárózárójel  sorvége

		Felszín nyíl RajzSzínÁllítás nyitózárójel ablakBelseje zárózárójel  sorvége
		Felszín nyíl RajzKörvonalNégyzet nyitózárójel x vessző y összeadás 35 vessző xVége vessző yVége zárózárójel  sorvége

		mostaniPozícióX értékadás x összeadás 5 sorvége
		mostaniPozícióY értékadás y összeadás 40 sorvége
	kódblokkvége
	különben
	kódblokkeleje
		Felszín nyíl RajzSzínÁllítás nyitózárójel ablakKörvonal zárózárójel  sorvége
		Felszín nyíl RajzKörvonalNégyzet nyitózárójel x kivonás 1 vessző y kivonás 1 vessző xVége összeadás 1 vessző yVége összeadás 1 zárózárójel  sorvége

		Felszín nyíl RajzSzínÁllítás nyitózárójel ablakBelseje zárózárójel  sorvége
		Felszín nyíl RajzKörvonalNégyzet nyitózárójel x vessző y vessző xVége vessző yVége zárózárójel  sorvége

		mostaniPozícióX értékadás x összeadás 5 sorvége
		mostaniPozícióY értékadás y összeadás 5 sorvége
	kódblokkvége
kódblokkvége

űr felhasználóifelület kettőspontkettőspont RajzoljJelölőNégyzetet nyitózárójel konstans szöveg feltüntetés vessző logikai referencia érték zárózárójel
kódblokkeleje

	állandó logikai megnyomtad értékadás hamis sorvége

	Felszín nyíl RajzSzínÁllítás nyitózárójel ablakKörvonal zárózárójel  sorvége
	Felszín nyíl RajzKörvonalNégyzet nyitózárójel mostaniPozícióX kivonás 1 vessző mostaniPozícióY kivonás 1 vessző mostaniPozícióX összeadás 13 vessző mostaniPozícióY összeadás 13 zárózárójel  sorvége

	ha  nyitózárójel Felszín nyíl EgérATérségbenVanE nyitózárójel mostaniPozícióX kivonás 1 vessző mostaniPozícióY kivonás 1 vessző mostaniPozícióX összeadás 13 vessző mostaniPozícióY összeadás 13 zárózárójel  zárózárójel  kódblokkeleje

		ha  nyitózárójel nem érték zárózárójel  kódblokkeleje

			Felszín nyíl RajzSzínÁllítás nyitózárójel mellékAblakBelsejeKijelölve zárózárójel  sorvége
			Felszín nyíl RajzTöltöttNégyzet nyitózárójel mostaniPozícióX összeadás 1 vessző mostaniPozícióY összeadás 1 vessző mostaniPozícióX összeadás 11 vessző mostaniPozícióY összeadás 11 zárózárójel  sorvége
		kódblokkvége

		ha  nyitózárójel GetAsyncKeyState nyitózárójel VK_LBUTTON zárózárójel  zárózárójel  kódblokkeleje

			ha  nyitózárójel nem megnyomtad zárózárójel  kódblokkeleje
				megnyomtad értékadás igaz sorvége
				érték értékadás nem érték sorvége
			kódblokkvége
		kódblokkvége
		különben
			megnyomtad értékadás hamis sorvége
	kódblokkvége


	ha  nyitózárójel érték zárózárójel  kódblokkeleje

		Felszín nyíl RajzSzínÁllítás nyitózárójel kijelölve zárózárójel  sorvége
		Felszín nyíl RajzTöltöttNégyzet nyitózárójel mostaniPozícióX összeadás 1 vessző mostaniPozícióY összeadás 1 vessző mostaniPozícióX összeadás 11 vessző mostaniPozícióY összeadás 11 zárózárójel  sorvége
	kódblokkvége

	Felszín nyíl RajzoljSzöveget nyitózárójel mostaniPozícióX összeadás 18 vessző mostaniPozícióY kivonás 2 vessző 212 vessző 212 vessző 212 vessző 255 vessző felhasználóiFelületBetűtípus vessző hamis vessző feltüntetés zárózárójel  sorvége

	mostaniPozícióY megegyenlő 20 sorvége
kódblokkvége
