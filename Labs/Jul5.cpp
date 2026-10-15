#include <iostream> 
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std; 
double x,y,d,t,k;
int i,n;
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    i=0;
    cout<<"Введите целочисленное n: ";
    cin>>n;
    cout<<"Введите число с плавающей точкой x: ";
    cin>>x;
    t=cos(x);
    k=sqrt(2);
    while ( i<n)
        {  
            d+=t/k;
            t=cos(t);
            k=sqrt(k+2+i);
            i++;
        }
cout<<"\nрезультат при n = "<<n<<" и x = "<< x <<" равен d: "<< setprecision(4) <<fixed<<d<<endl;
system("pause");
}
