#include <iostream> 
#include <cmath>
#include <windows.h>//Библиотека для строчек 8 и 9. Если ты в онлайн компиляторе делаешь или студии тебе это не надо
#include <iomanip>
using namespace std;
int main() 
{ SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
double b, a, R,T,x1,x2,y1,y2;// объявляем вещественные переменные x, y и R 
    double functon(double x, double y);
    cout << "Введите число для переменной a = "; 
    cin >> a;// пользователь присваивает значение для переменной a 
    cout << "Введите число для переменной b = "; 
    cin >> b;// пользователь присваивает значение для переменной b 
    x1 = a+sqrt(b);
    y1 = a*a+b;
    x2 = a*b+1;
    y2 = 3*a+b*b;
    R = functon(x1, y1) ;
    T = functon(x2, y2);
        cout << "Результат = " << setprecision(4) << fixed << R+T<<endl ;
     }
double functon(double x, double y)
    {      
    return (sqrt(x+pow(y,2))*pow(pow(x,2)+exp(y),2))/(sqrt((exp(x)+exp(-y))*(x + log(y+M_PI))));
    } 
