#pragma once
using namespace std;
#include "main.h"

istream &operator>>(istream& strumien_wej, TAudi &w)
{
	string model = w.model;

	string nazwa_pliku_tekstowego = "Dostepne//Audi//Audi_" + model + ".txt";

	cout << "czytanie" << endl;
	ifstream czytanie(nazwa_pliku_tekstowego);
	if (!czytanie)
		cout << "Blad" << endl;

	czytanie >> w.model
		>> w.rok_produkcji
		>> w.silnik
		>> w.konie_mechaniczne
		>> w.max_predkosc
		>> w.klimatyzacja
		>> w.ile_drzwi
		>> w.cena
		>> w.dostepna_ilosc;
	czytanie.close();
	return strumien_wej;
}

void dostepne_marki()
{
	string nazwa_pliku_tekstowego{ "Dostepne//Marki.txt" };

	ifstream czytanie(nazwa_pliku_tekstowego);
	if (!czytanie)
		cout << "Blad" << endl;
	std::string dane;
	int i = 1;
	while (getline(czytanie, dane))
	{
		cout << i << "." << dane << endl;
		i++;
		if (czytanie.eof())
			break;
	}
	czytanie.close();
}

char wybor_marki()
{
	system("cls");
	cout << "Obecnie posiadamy samochody nastepujacych marek: " << endl;
	dostepne_marki();
	cout << "Samochody, ktorej z tych marek chcialbys przegladnac" << endl;
	char x;
	cin >> x;
	return x;
}

string odczyt_modeli(std::string marka)
{
	string nazwa_pliku_tekstowego = marka + ".txt";

	ifstream czytanie(nazwa_pliku_tekstowego);
	if (!czytanie)
	{
		cout << "Blad" << endl;
		return(0);
	}
	else {
		std::string dane;
		int i = 1;
		while (getline(czytanie, dane))
		{
			cout << i << "." << dane << endl;
			i++;
			if (czytanie.eof())
				break;
		}
		czytanie.close();

		string wybrany_model;
		cin >> wybrany_model;
		return wybrany_model;
	}
	
}