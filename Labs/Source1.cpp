

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <iomanip>
#include <windows.h> 
using namespace std;
int main() {
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	const int r_pass = 123;
	int count = 0;
	int pass;
	do {
		cout << "Get password: ";
		cin >> pass;
		count++;
	} while (pass != r_pass && count < 3);
	if (pass != r_pass && count == 3) {
		cout << "Password is not correct, attempts are over" << endl;
		system("pause");
		return 0;
	}
	cout << "Login successful, starting..." << endl;
	double Xn, Xk, Dx, x, f;
	const double a = 4, b = 8;
	cout << "Get range: "; cin >> Xn >> Xk;
	cout << "input step : "; cin >> Dx;
	if ((Xn > Xk) || Dx > (Xk - Xn)) {
		cout << "Wrong data" << endl;
		system("pause");
		return 0;
	}
	cout << "������� ������� ������ for" << endl;
	cout << "|" << setw(10) << "x" << "|" << setw(10) << "y" << "|" << endl;
	for (x = Xn; x <= Xk; x += Dx) {
		if (abs(x) > 5)
			f = a + sqrt(abs(x));
		else f = b * pow(x, 2);
		cout << fixed << "|" << setw(10) << setprecision(2) << x << "|" << setw(10) << setprecision(2) << f << "|" << endl;
	}
	cout << "������� ������� ������ for" << endl;
	cout << "|" << setw(10) << "x" << "|" << setw(10) << "y" << "|" << endl;
	x = Xn;
	while (x < Xk) {
		if (abs(x) > 5)
			f = a + sqrt(abs(x));
		else f = b * pow(x, 2);
		cout << fixed << "|" << setw(10) << setprecision(2) << x << "|" << setw(10) << setprecision(2) << f << "|" << endl;
		x += Dx;
	}
	system("pause");
}
