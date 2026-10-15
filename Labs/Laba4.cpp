#include <iostream> 
#include <cmath>
#include <windows.h>
#include <locale.h>
#include <iomanip>
using namespace std; 
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    double b,y,a,Funck1,Funck2,Funck3,Funck4,Funck5,Funck6,Funck21,Funck22;
    int i,k;
    y=0;
    i=0;
 
    for (i=0; i<10;i++)
        {
        cout<<"Нужно ввести функцию? 1-да остальное нет ";
        cin>>k;  
        if (k==1)
        {
            cout<<"Введите a: ";
            cin>>a;
            cout<<"Введите b: ";
            cin>>b;
            Funck1=a+pow(b,0.5);
            Funck2=pow(a,2.0)+b;
            Funck21=a*b+1;
            Funck22=3*a+b*b;
            Funck3 = (pow((pow(sin(Funck1),2.0)+3*Funck2),0.5))*(pow((Funck1+log(Funck2 + M_PI)),2.0));
            Funck4 = (pow(Funck1+pow(Funck2,2.0),2.0))*(pow(Funck1,2.0)+Funck2);
            Funck5 = (pow(pow(sin(Funck21),2.0)+3*(Funck22),0.5))*(pow(Funck21+log(Funck22+M_PI),2.0));
            Funck6 = (pow(Funck21+pow(Funck22,2.0),2.0))*(pow(Funck21,2.0)+Funck22);
            y=(Funck3/Funck4)+(Funck5/Funck6);
            cout <<"Ответ: "<<setprecision(4)<<fixed<<(y)<<endl;

        }
        else
        {
            cout<<"Вы преждевременно закончили цикл";
            return 0;
        }
        }
return 0;
}