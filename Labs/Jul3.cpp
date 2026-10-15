#include <iostream> 
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std;
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double x, y, R,t,m;
    int k;
    cout<<"Введите R: ";
    cin>>R;
    cout<<"Введите Диапазон: ";
    cin>>t;
    cout<<"Введите Шаг: ";
    cin>>m;
    cout <<setw(5)<< "x      |     y"<<endl<<"---------------"<<endl;
    for (x=-t; x<=t;x+=m)
    {
        if ( x <= -R/2 ) 
        {
            y = -x-R/2; 
        }
           
        if (x>=-R/2 && x<=R/2)
        {
            y = 0;
        }
        if (x>R/2 && x<2.5*R)
        {
            y = R*sin(M_PI+M_PI*-(x-1)/(2*R));
        }
        if (x>=2.5*R)
        {
            y = -(x-5)/R;
        }
        cout<<setw(5)<<x<<setprecision(4) <<"  |  "<<y<<endl<<setw(5)<<"---------------"<<endl;
    }
    
system("pause");
}