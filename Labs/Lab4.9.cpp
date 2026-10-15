#include <iostream> 
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() 
{ 
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
double b, a, R, D,T,F,Ta,Te,x1,x2,y1,y2,Te2,Ta2;// объявляем вещественные переменные x, y и R 
int i,k;
i=0;
k=0;

for (i=0; i<10;i++)
    {
    cout<<"Решить функцию?: ";
    cin>>k;
   
    if (k==1)
        { 
        double functonten(double x, double y);
        double functontan(double x, double y);
        double functon(double x, double y);
        double functon2(double x, double y);
        cout << "Введите число для переменной a = "; 
        cin >> a;// пользователь присваивает значение для переменной x 
        cout << "Введите число для переменной b = "; 
        cin >> b;// пользователь присваивает значение для переменной y 
        x1 = 3*a+b*b;
        x2 = a+2*b;
        y1 = a*b+1;
        y2 = a*a+b;

        R = functon(x1, y1) ;
        D = functon2(x2, y2);
        F = functon2(x1, y1) ;
        T = functon(x2, y2);
        Te = functonten(x1, y1);
        Ta = functontan(x1, y1);
        Te2 = functonten(x2, y2);
        Ta2 = functontan(x2, y2);
        cout << "Результат = " << setprecision(4) << fixed << R/sqrt(Ta*Te)+T/sqrt(Ta2*Te2)<< endl <<R/F+T/D<<endl <<R/sqrt(Ta*Te) << endl<<D << endl;
        }
    else
        {
        cout<<"Цикл преждевременно прерван"<<endl; 
        return(0);
        }
    }
} 
double functon(double x, double y)
    {      
    return (x+y*y)*(sqrt((x*x+y*y)));
    } 
double functon2(double x, double y)
    {      
    return sqrt(x+pow(tan(y/M_PI),2))*sqrt((x*x + exp(y)));
    } 
double functonten(double x, double y)
    {      
    return x*x + exp(y);
    } 
double functontan(double x, double y)
    {      
    return x+pow(tan(y/M_PI),2);
    } 
