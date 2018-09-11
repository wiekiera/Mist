#pragma once
using namespace std;

int wybor()
{
	int x;
	cout << "Witam w sklepie samochodowym OtoMoto\n"
		<< "Jaki ma byc twoj nastepny krok\n"
		<< "1.Chce obejrzec dostepne marki\n"
		<< "2.Chce stworzyc moj wlasny samochod\n"
		<< "3.Wprowadz dowolny inny klawisz,aby opuscic sklep" << endl;
	cin >> x;
	if (x == 1 || x == 2)
		return x;
	else exit(0);
}

istream &operator>>(istream& strumien_wej, TAudi &w)
{
	string model = w.model;
	
	string nazwa_pliku_tekstowego = "Dostepne//Audi//Audi_" + model + ".txt";

	cout << "czytanie" << endl;
	ifstream czytanie(nazwa_pliku_tekstowego);
	if (!czytanie)
		cout << "Blad" << endl;
	
	czytanie >> w.model >> w.rok_produkcji
		>> w.silnik >> w.konie_mechaniczne
		>> w.max_predkosc >> w.klimatyzacja
		>> w.ile_drzwi >> w.cena
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
	while (getline(czytanie,dane))
	{
		cout <<i<<"."<< dane << endl;
		i++;
		if (czytanie.eof())
			break;
	}
	czytanie.close();
}

int wybor_marki()
{
	system("cls");
	cout << "Obecnie posiadamy samochody nastepujacych marek: " << endl;
	dostepne_marki();
	cout << "Samochody, ktorej z tych marek chcialbys przegladnac" << endl;
	int x;
	cin >> x;
	return x;
}

string odczyt_modeli(std::string marka)
{
	string nazwa_pliku_tekstowego = marka + ".txt";

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
	
	string wybrany_model;
	cin >> wybrany_model;
	return wybrany_model;
}

void zakup(Tpojazd &pojazd)
{
	int x;
	cout << "Czy chcesz kupic ten samochod?" << endl;
	cout << "1.tak\n"
		<< "2.nie,chce wrocic do wyboru marki" << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		system("cls");
		cout << "Siema" << endl;
	}
}



void dostepne_modele()
{

	int model;
	model = wybor_marki();
	Tpojazd *wsk;
	system("cls");
	switch (model)
	{
		case 1:
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