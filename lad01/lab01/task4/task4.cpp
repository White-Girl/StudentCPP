﻿#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "Hello,my dear. What are the numbers?""\n";
	char c = 'y';
	while ((c) == 'y')
	{
		int a, c, o, r1, r2, r3, r4, otvet;
		cout << "Vvedite pervoe chislo" << endl;
		cin >> a;
		cout << "Vvedite vtoroe chislo" << endl;
		cin >> c;
		cout << "Vvedite operatsiyou " << endl;
		printf("1. +\n2. -\n3. *\n4. /\n");
		cout << "Vi hotote sdela't:";
		cin >> o;
		if ((int)(o == 1))
		{
			otvet = a + c;
		}
		else if ((int)(o == 2))
		{
			otvet = a - c;
		}
		else if ((int)(o == 3))
		{
			otvet = a * c;
		}
		else if ((int)(o == 4))
		{
			otvet = a / c;
		}
		cout << "Otvet=" << otvet << endl;
		cout << "Hochesh prodolshit ?:" << endl;
		cin >> c;
	}
}