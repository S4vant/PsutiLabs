#include <iostream>
#include <windows.h>
#include "Func.h"

int main()
{
	SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	int n;
	cout << "Число элементов в массиве: ";
	cin >> n;
	double* m = new double[n];
	Add(m, n);
	Out(m, n);
	Max(m, n);
	Pro(m, n);
	Array(m, n);
}