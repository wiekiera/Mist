#pragma once
#include <iostream>
#include <string>
using namespace std;

char user_or_admin()
{
	cout << "1.Wejscie dla uzytkownika\n"
	   	 << "2.Wejscie dla admina" << endl;
	char y;

	y = getchar();
	return y;
}