
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int num;
	float ostatok;
	cout << "Enter the number:" << endl;
	cin >> num;
	if (num > 0)
		cout << "positive" << endl;
	else
		cout << "negative" << endl;

	if (num % 2 == 0)
		cout << "even" << endl;
	else
		cout << "odd" << endl;
	ostatok = num % 5;
	cout << "Remainder of division by 5" << ostatok << endl;
	if (num > 10)
		cout << "num more than 10" << endl;
	else
		cout << "num less than 10" << endl;

}