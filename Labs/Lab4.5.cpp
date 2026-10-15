#include <iostream> 
#include <cmath>
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
for (i=0; i<4;i++)//цикл срабатывающий ровно 4 раза
    {
        double function(double x, double y);//объявляем нашу функцию внутри этой 
        cout << "Введите числос плавающей точкой для переменной a = "; 
        cin >> a;
        cout << "Введите число с плавающей точкой для переменной b = "; 
        cin >> b; 
        x1 = 3*a+b*b; //{если непонятно что это - подойди ко мне
        y1 = a+2*b;
        x2 = a*b+1;
        y2 = sqrt(a)+b;//}
        R = function(x1, y1) ;//присваиваем этим переменным значение выражения ниже но заменяем условные x,у на x1,y1 и x2,y2 соответственно 
        T = function(x2, y2);
        cout << "Результат = " << setprecision(4) << fixed << R+T<<endl ;
    }
    system("pause");
} 
double function(double x, double y)
    {      
    return sqrt((pow(sin(x),2)+3*y)*(x+pow(y,2)))/((cos(x/(2*M_PI))+sin(y/M_PI)) * pow((pow(sin(x/M_PI),2)+pow(y,2)),2));
    // Вызывая эту функцию мы возвращаем вот это выражение (оно одинаковое для левой и правой части, но с разными x и y)
    } 
