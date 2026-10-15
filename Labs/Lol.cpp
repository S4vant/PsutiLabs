#include <iostream> 
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std; 
double l,y,d,t,p;// объявляем вещественные переменные x, y и R 
int i,n;
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    i=0;
    cout<<"Введите n: ";
    cin>>n;
    cout<<"Введите x: ";
    cin>>l;
    t=l+1;
    d=0;
    y=sqrt(3);
    for (i=0; i<n;i++)
        {   
            d+=t/y;
            t=(l+1)*t;
            if ((i % 2)!=0)
            {
                y=sqrt(3+y);
            }
            else
            {
                y=sqrt(5+y);
            }
        }
cout<<"\nрезультат при n = "<<n<<" и x = "<< l <<" равен d: "<< setprecision(4) <<fixed<<d;
cout<<"\nf равно: "<<setprecision(4)<<fixed<<t/y<<"\n";
cout<<"При n = "<<n+1<<" результат равен d+f "<<d+t/y<< setprecision(4) <<fixed<<"\n";
cin>>p;
}
