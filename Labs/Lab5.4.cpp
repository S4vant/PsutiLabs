#include <iostream> 
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std; 
double l,y,d,t;
int i,n;
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Введите целочисленное n: ";
    cin>>n;
    cout<<"Введите число с плавающей точкой x: ";
    cin>>l;
    t=l+1;
    y=sqrt(3);
    while ( i<n)
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
            i++;
        }
cout<<"\nрезультат при n = "<<n<<" и x = "<< l <<" равен d: "<< setprecision(4) <<fixed<<d;
system("pause");
}
