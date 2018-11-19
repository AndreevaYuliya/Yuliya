#include "stdafx.h"
#include "windows.h"
#define _USE_MATH_DEFINES
#include "math.h"
#include <iostream>
#include "func.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int A;
	float a, b, c, d, e, g;
	// Пошук значення виразу A
	cout << "Input x:" << endl;
	cin >> a;
	cout << "Input y:" << endl;
	cin >> b;
	cout << "Input z:" << endl;
	cin >> c;
	// ОДЗ:
	if ((c + exp(2 + a) > 0) && (pow(sin(a + b), 2) > 0))
		cout << "\tЗначення виразу А при x = " << a << ", y = " << b << ", z = " << c << " становить " << fA(a, b, c) << endl;
	else
		if ((c + exp(2 + a) <= 0) && (pow(sin(a + b), 2) <= 0))
			cout << "\tНе входить до ОДЗ!" << endl;
	//Пошук значення виразу В	
	cout << "Введiть x" << endl;
	cin >> d;
	cout << "Введiть y" << endl;
	cin >> e;
	cout << "Введiть z" << endl;
	cin >> g;
	cout << "\tЗначення виразу В при x = " << d << " y = " << e << " z=" << g << " становить " << fB(d, e, g) << endl;
	//Пошук суми розрядів
	if ((c + exp(2 + a) > 0) && ((pow(sin(a + b), 2) > 0)))
		cin >> A;
	cout << "\tСума розрядiв значення виразу A = " << Task2(A) << endl;
	A = int(fA(a, b, c));
	double C;
	C = fA(a, b, c) - fB(d, e, g);
	cout << "A-B=" << C << endl;
	system("pause");
}
