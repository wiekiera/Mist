#pragma once
#include "Tpojazd.h"
using namespace std;

class TAudi : public Tsam_osobowy
{
private:
	
public:
	std::string model;
	std::string silnik;
	int max_predkosc;
	int dostepna_ilosc;

	TAudi();
	TAudi(string mod);
	~TAudi();
	void przedstaw_sie()
	{
		if (dostepna_ilosc != 0)
		{	
			system("cls");
			cout << dostepna_ilosc << " pieces left" << endl;
			cout << model << endl;
			cout << rok_produkcji << endl;
			cout << silnik << endl;
			cout << konie_mechaniczne << endl;
			cout << max_predkosc << endl;
			cout << klimatyzacja << endl;
			cout << ile_drzwi << endl;
			cout << cena << endl;
		}
		else cout << "Brak danego modelu na magazynie" << endl;
	}




	friend istream &operator>>(istream& strumien_wej, TAudi &w);
};