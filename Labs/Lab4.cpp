#include <iostream> 
#include <cmath>
#include <windows.h>//Библиотека для 8 и 9 строчек
#include <iomanip>//библиотека для округления
using namespace std;
int main() 
{ 
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
double b, a, R,T,x1,x2,y1,y2;
int i;
for (i=0; i<4;i++)//цикл срабатывающий ровно 4 раза
    {
        double function(double x, double y);
        cout << "Введите число для переменной a = "; 
        cin >> a;
        cout << "Введите число для переменной b = "; 
        cin >> b; 
        x1 = a*a+b; 
        y1 = a+2*b;
        y2 = a*2+b;
        x2 = sqrt(a)+b;
        R = function(x1, y1);
        T = function(x2, y2);
        cout << "Результат = " << setprecision(4) << fixed << R+T<<endl ;
    }
    system("pause");
} 
double function(double x, double y)
    {      
    return pow(pow(x,2)+y,2)*sqrt(sin(x/M_PI)+y)/((pow(x,2)+exp(y)) * (x+log(y+M_PI)));
    
    } 
