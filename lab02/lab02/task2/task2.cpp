#include "pch.h"
#include <iostream>

using namespace std;
float boo(float);

int main()
{
	float f1, f2, f3, f4, f5, s;
	cout << "Enter five numbers:" << endl;
	cin >> f1 >> f2 >> f3 >> f4 >> f5;
	f1 = boo(f1);
	f2 = boo(f2);
	f3 = boo(f3);
	f4 = boo(f4);
	f5 = boo(f5);
	s = f1 * f3 - f2 / f4 + f4 * (f5 - f1) - f2;
	cout << "s=" << s << endl;


}
float boo(float a)
{
	float y = (a * 2 - a + a * (a / 2)) / a / 5;
	return y;
}

