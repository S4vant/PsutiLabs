#include <iostream> 
#include <cmath>
#include <windows.h>//Аналогично как и до этого эту и 10 с 11 строками лучше подчистить
#include <iomanip>
using namespace std; 
double x,y,d,t;
int i,n;
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    i=0;
    cout<<"Введите n: ";
    cin>>n;
    cout<<"Введите x: ";
    cin>>x;
    t=1;
    d=0;
    y=sqrt(2);
    for (i=0; i<n;i++)
        {   
            d+=t/y;
            t+=pow(x,i+1);
            y=sqrt(2+y);
            
        }
cout<<"\nрезультат при n = "<<n<<" и x = "<<x<<" равен d: "<< setprecision(4) <<fixed<<d<<endl;

system("pause");
}
