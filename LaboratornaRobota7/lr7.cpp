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
	// ����� �������� ������ A
	cout << "Input x:" << endl;
	cin >> a;
	cout << "Input y:" << endl;
	cin >> b;
	cout << "Input z:" << endl;
	cin >> c;
	// ���:
	if ((c + exp(2 + a) > 0) && (pow(sin(a + b), 2) > 0))
		cout << "\t�������� ������ � ��� x = " << a << ", y = " << b << ", z = " << c << " ��������� " << fA(a, b, c) << endl;
	else
		if ((c + exp(2 + a) <= 0) && (pow(sin(a + b), 2) <= 0))
			cout << "\t�� ������� �� ���!" << endl;
	//����� �������� ������ �	
	cout << "����i�� x" << endl;
	cin >> d;
	cout << "����i�� y" << endl;
	cin >> e;
	cout << "����i�� z" << endl;
	cin >> g;
	cout << "\t�������� ������ � ��� x = " << d << " y = " << e << " z=" << g << " ��������� " << fB(d, e, g) << endl;
	//����� ���� �������
	if ((c + exp(2 + a) > 0) && ((pow(sin(a + b), 2) > 0)))
		cin >> A;
	cout << "\t���� ������i� �������� ������ A = " << Task2(A) << endl;
	A = int(fA(a, b, c));
	double C;
	C = fA(a, b, c) - fB(d, e, g);
	cout << "A-B=" << C << endl;
	system("pause");
}
