#pragma once
#include "Tpojazd.h"
using namespace std;

class TAudi : public Tsam_osobowy
{
private:
	
public:
	std::string model;
	std::string sciezka = "Dostepne//Audi//Audi_";
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
			cout <<"model: " <<model << endl;
			cout <<"Rok produkcji: "<< rok_produkcji << endl;
			cout <<"Silnik: "<< silnik << endl;
			cout <<"Koni mechanicznych: "<< konie_mechaniczne << endl;
			cout <<"Maksymalna predkosc: "<< max_predkosc << endl;
			cout <<"Klimatyzacja: "<< klimatyzacja << endl;
			cout <<ile_drzwi <<" Drzwiowy" <<endl;
			cout <<"Cena: "<< cena << endl;
		}
		else cout << "Brak danego modelu na magazynie" << endl;
	}




	friend istream &operator>>(istream& strumien_wej, TAudi &w);
};