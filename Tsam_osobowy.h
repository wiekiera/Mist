#pragma once
#include "Biblioteka.h"
#include "Tsamochod.h"
using namespace std;

class Tsam_osobowy : public Tsamochod
{
public:
	bool klimatyzacja;
	int ile_drzwi;
	
	Tsam_osobowy();
	~Tsam_osobowy();
	void przedstaw_sie()
	{
		cout << "Tsam_osob" << endl;
	}
};

