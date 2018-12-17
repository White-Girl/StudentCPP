
#include <iostream>
#include <conio.h>
#include "pch.h"

bool isExceeded(int numToCalculateFactorial, int& stepNumber);

int main()
{
	int stepNumber = 0;
	cout << "Vvedite chislo factoriala ";
	int A;
	cin >> A;
	cout << "Vvedite sravnivaemoe chislo ";
	int B;
	cin >> B;
	if (isExceeded(A, stepNumber))
	{
		cout << "Factorial bolshe chisla" << endl;
		cout << "Nomer shaga= " << stepNumber;
	}
	else
		cout << "Factorial men'she chisla";
	_getch();
}

bool isExceeded(int numToCalculateFactorial, int& stepNumber)
{
	int fact = 1, B;
	for (int i = 2; i <= numToCalculateFactorial; i++)
	{
		fact = fact * i;
		if (fact > B)
		{
			stepNumber = i - 1;
			return true;
		}
	}
	return false;
}



