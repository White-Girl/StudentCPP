#include "pch.h"
#include <iostream>
using namespace std;


bool isExceeded(int numToCalculateFactorial, int& stepNumber)
{
	int SravnivaemoeNum, numFac = 1;
	bool  l = false;
	cout << "Vvedite sravnivaemoe chislo: ";
	cin >> SravnivaemoeNum;
	for (int i = 1; i <= numToCalculateFactorial; i++)
	{
		numFac = numFac * i;
		if (numFac >= SravnivaemoeNum)
		{
			l = true;
			stepNumber = i - 1;
			break;
		}
	}
	return l;
}

int main()
{
	int stepNumber, numToCalculateFactorial;
	cout << "Vvedite chislo dlya vitsisleniya faktoriala : ";
	cin >> numToCalculateFactorial;
	bool l = isExceeded(numToCalculateFactorial, stepNumber);
	if (l == true)
	{
		cout << "Faktorial bol'she? YES" << endl << "Nomer shaga= " << stepNumber << endl;
	}
	else
	{
		cout << "Faktorial bol'she? No" << endl;
	}
	system("pause");
	return 0;
}