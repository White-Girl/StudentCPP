#include "pch.h"
#include <iostream>
using namespace std;

int num;
void go(bool& a, bool& b, int& c, bool& d);

int main()
{
	bool a,b,d;
	int c;
	cout << "Enter the number: ";
	cin >> num;
	go(a, b, c, d);
	if (a)
		cout << "Is the number positive? Yes" << endl;
	else
		cout << "Is the number positive? No" << endl;
	if (b)
		cout << "Is the number even? No" << endl;
	else
		cout << "Is the number even? Yes" << endl;
	cout << "The remainder of the division by 5 = " << c<< endl;
	if (d)
		cout << "Is the number greater than 10? Yes" << endl;
	else
		cout << "Is the number greater than 10? No" << endl;
	
}

void go(bool& a, bool& b, int& c, bool& d)
{
	a = num > 0;
	b = num % 2;
	c = num % 5;
	d = num > 10;
}