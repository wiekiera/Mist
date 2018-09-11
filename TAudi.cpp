#include "Biblioteka.h"
#include "TAudi.h"
#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;


TAudi::TAudi()
{
}

TAudi::TAudi(string mod) :	Tsam_osobowy()
{
	model = mod;

}

TAudi::~TAudi()
{
}