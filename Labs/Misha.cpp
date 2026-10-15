#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    double x,y,r,z;
    cout << "Enter X:";
    cin >> (x); //Ввод переменной x
    r = (atan(1+pow(sin(x),2)) * exp(-x) * (1+pow(sin(x),2))); //Делимое
    z = (log(3-pow(cos(x),2))); //Делитель
    y = (r / z); //Переменная являющая ответом
    cout << (y); //Вывод ответом
    return 0;
}