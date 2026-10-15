#include <iostream> 
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() 
{ 
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
double b, a, R, D,T,F,Ta,Te;// объявляем вещественные переменные x, y и R 
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
        R = functon((3*a+b*b), (a*b+1)) ;
        D = functon2((a+2*b), (a*a+b));
        F = functon2((3*a+b*b), (a*b+1)) ;
        T = functon((a+2*b), (a*a+b));
        Te = functonten((3*a+b*b), (a*b+1));
        Ta = functontan((3*a+b*b), (a*b+1));
        cout << "Результат = " << setprecision(4) << fixed << R/D<< endl <<R<<endl <<R/sqrt(Ta*Te) << endl<<F << endl<< exp(a*b+1) << endl;
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
    return sqrt(x+pow(tan(y/M_PI),2)*(x*x + exp(y)));
    } 
double functonten(double x, double y)
    {      
    return x*x + exp(y);
    } 
double functontan(double x, double y)
    {      
    return x+pow(tan(y/M_PI),2);
    } 
