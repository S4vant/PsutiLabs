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
            x1=a+sqrt(b);
            y1=a*a+b;
            x2=a*b+1;
            y2=b*b+3*a;
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
    return ((pow((pow(sin(Funck1),2.0)+3*Funck2),0.5))*(pow((Funck1+log(Funck2 + M_PI)),2.0)))/((pow(Funck1+pow(Funck2,2.0),2.0))*(pow(Funck1,2.0)+Funck2));
}