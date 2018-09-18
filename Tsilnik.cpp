#include "Biblioteka.h"
using namespace std;


Tsilnik::Tsilnik()
{
}






Tsilnik::Tsilnik(int pojemnosc, int obroty, int moc) :	pojemnosc_silnika(pojemnosc),
														moment_obrotowy_silnika(obroty),
														moc_silnika(moc)
{
	cout << "Silnik zosta³ stworzony" << endl;
}






Tsilnik::~Tsilnik()
{
}

void Tsilnik::opis()
{
	cout << "Siema" << endl;
}