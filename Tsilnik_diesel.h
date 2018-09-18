#pragma once
#include "Biblioteka.h"
class Tsilnik_diesel : public Tsilnik
{
protected:
	std::string nazwa;
public:
	Tsilnik_diesel();
	Tsilnik_diesel(string naz, int pojemnosc, int obroty, int moc);

	~Tsilnik_diesel();
	void opis();
};

