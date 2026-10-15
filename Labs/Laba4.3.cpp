#include <iostream> 
#include <cmath>
#include <windows.h>
#include <iomanip>
#define _USE_MATH_DEFINES // for M_PI
using namespace std; 
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    double b,ans,a,x1,x2,y1,y2;
    int k;
    double func(double Funck1,double Funck2);
    for (int i=0; i<10;i++)
        {
        cout<<"Нужно ввести функцию? 1-да остальное нет ";
        cin>>k;  
        if (k==1)
        {
            cout<<"Введите a: ";
            cin>>a;
            cout<<"Введите b: ";
            cin>>b;
            x1=a+b*2;
            y1=sqrt(a)+sqrt(b);
            x2=sqrt(a)+b;
            y2=b+pow(a,2);
            ans=func(x1,y1)+func(x2,y2);
            cout <<"Ответ: "<<setprecision(4)<<fixed<<ans<<endl;
        }
        else
        {
            cout<<"Вы преждевременно закончили цикл";
            return 0;
        }
        }
return 0;
}

double func(double Funck1, double Funck2)
{
    return (pow((pow(Funck1,2)+pow(Funck2,2)),2))*(pow((pow(Funck1,2)+exp(Funck2)),2.0))/((cos(Funck1/(2*M_PI))+sin(Funck2/M_PI))*sqrt(Funck1+Funck2+1));
}