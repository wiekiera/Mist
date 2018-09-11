#pragma once
#include "Biblioteka.h"
using namespace std;
class Tsamochod : public Tpojazd
{
public:
	int rok_produkcji;
	int konie_mechaniczne;

	Tsamochod();
	~Tsamochod();
	void przedstaw_sie()
	{
		cout << "siema,elo" << endl;
	}
};

