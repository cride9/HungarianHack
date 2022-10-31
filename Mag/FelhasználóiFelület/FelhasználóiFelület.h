#pragma once
#include <string>
#include "../Felület/felületek.h"
#include "../magyar.h"

enum FAblakok {

	KIVÁLASZTOTT_ABLAK = 0,
	KIVÁLASZTOTT_CÉLZÁSSEGÍTŐ_FŐ = 1,
	KIVÁLASZTOTT_CÉLZÁSSEGÍTŐ_EXTRÁK = 2,
	KIVÁLASZTOTT_CÉLZÁSSEGÍTŐ_FEGYVEREK = 3,
	KIVÁLASZTOTT_CÉLZÁSSEGÍTŐ_BEÁLLÍTÁSOK = 4
};

namespace felhasználóifelület {

	inline unsigned long felhasználóiFelületBetűtípus;
	inline unsigned long felhasználóiFelületBetűtípusFegyverek;

	static int célzásSegítőAblakok[4];

	void FelhasználóiFelület();

	inline void RajzoljAblakot(int x, int y, int xEnd, int yEnd, bool mellékAblakok, int mellékAblakDarab, int& selectedTab, alapszöveg konstans tabs[]);
	inline void RajzoljJelölőNégyzetet(const char* feltüntetés ,bool& érték);
}