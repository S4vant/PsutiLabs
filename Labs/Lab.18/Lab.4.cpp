#include <iostream> 
#define _USE_MATH_DEFINES // для M_PI
#include <math.h>
#include <windows.h>//Библиотека для 8 и 9 строчек
#include <iomanip>//библиотека для округления
using namespace std;
int main() 
{ 
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
double b, a, R,T,x1,x2,y1,y2;// объявляем вещественные переменные x, y и R 
int i,k;//Объявляем целочисленные переменные
i=0;
k=0;
    double function(double x, double y);//объявляем нашу функцию внутри этой 
    cout << "Введите числос плавающей точкой для переменной a = "; 
    cin >> a;
    cout << "Введите число с плавающей точкой для переменной b = "; 
    cin >> b; 
    x1 = a*2+b; //если непонятно что это - подойди ко мне
    y1 = a+sqrt(b);
    x2 = a*a+b;
    y2 = a+b*2;
    R = function(x1, y1) ;//присваиваем этим переменным значение выражения ниже но заменяем условные x,у на x1,y1 и x2,y2 соответственно 
    T = function(x2, y2);
    cout << "Результат = " << setprecision(4) << fixed << R+T<<endl ;
} 
double function(double x, double y)
    {      
    return pow(x+atan(y),2)*sqrt((pow(sin(x/M_PI),2)+pow(y,2)))/((pow(x,2)+exp(y)) * pow(x+pow(tan(y/M_PI),2),2));
    // Вызывая эту функцию мы возвращаем вот это выражение (оно одинаковое для левой и правой части, но с разными x и y)
    } 
