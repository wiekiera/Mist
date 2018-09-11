#pragma once
#include "Biblioteka.h"
using namespace std;
//#include "Tsilnik.h"
class Tpojazd
{
public:
	int cena;
	int licznik_kilometrow;

	Tpojazd();
	virtual ~Tpojazd();
	virtual void przedstaw_sie()
	{
		cout << "siema" << endl;
	}
};

