#include "Biblioteka.h"
#include "main.h"
#include "Fdostepnych.h"
#include "Entrance.h"
using namespace std;


int main()
{
	switch (user_or_admin())
	{
		case '1':
		{
				switch (wybor())
				{
				case '1':
					{
					dostepne_modele();
					break;
					}
				case '2':
					{

					break;
					}
				default: break;
				}
		break;
		}
	}
	




	system("Pause");
	return 0;
}