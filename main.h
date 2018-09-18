#pragma once
using namespace std;
#include "Fdostepnych.h"

char wybor()
{
	system("cls");
	char x;
	cout << "Witam w sklepie samochodowym OtoMoto\n"
		<< "Jaki ma byc twoj nastepny krok\n"
		<< "1.Chce obejrzec dostepne marki\n"
		<< "2.Chce stworzyc moj wlasny samochod\n"
		<< "3.Chce sie zarejestrowac\n"
		<< "4.Chce sie zalogowac\n"
		<< "5.Wprowadz dowolny inny klawisz,aby opuscic sklep" << endl;

		x = getchar();
		return x;
}

void zakup(Tpojazd &pojazd)
{
	int x;
	cout << "\n\nCzy chcesz kupic ten samochod?" << endl;
	cout << "1.tak\n"
		<< "2.nie,chce wrocic do wyboru marki" << endl;
	cin >> x;
	switch (x)
	{
	case 1:
	{
		system("cls");
		cout << "Siema" << endl;
		break;
	}
	case 2: break;
	}
}


void dostepne_modele()
{
	int koniec_petli = 0;

	while (koniec_petli != 1)
	{
		char model;

		model = wybor_marki();

		system("cls");
		switch (model)
		{
			case '1':
			{
			std::string wybrany_model;
			wybrany_model = odczyt_modeli("Dostepne//Audi//modele");
			TAudi moje_audi(wybrany_model);
			cin >> moje_audi;
			moje_audi.przedstaw_sie();
			zakup(moje_audi);
			}
		}
	}
}
