#pragma once
class Tsilnik
{
protected:
	int pojemnosc_silnika;
	int moment_obrotowy_silnika;
	int moc_silnika;

public:
	Tsilnik();
	Tsilnik(int pojemnosc, int obroty, int moc);
	virtual ~Tsilnik();
	virtual void opis();
};

