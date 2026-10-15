#include <iostream> 
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std; 
double l,y,d,t,i;
int n;
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Введите целочисленное n: ";
    cin>>n;
    t=1;
    i=1;
    while ( i<n)
        {    t*=i;
           d=d+pow(0.5,i);
           i+=0.1;
           cout<<"\nрезультат при n = "<<i<<" d: "<<d;
        }
cout<<"\nрезультат при n = "<<n<<" d: "<<d;
system("pause");
}
