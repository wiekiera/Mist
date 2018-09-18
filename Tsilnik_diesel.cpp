#include "Tsilnik_diesel.h"



Tsilnik_diesel::Tsilnik_diesel(string naz,int pojemnosc,int obroty,int moc) :	
												Tsilnik(pojemnosc,obroty,moc),
												nazwa(naz)
{
	cout << "Stworzy³em silnik diesla" << endl;
}


Tsilnik_diesel::~Tsilnik_diesel()
{
}

void Tsilnik_diesel::opis()
{
	cout << "Co tam" << endl;
}