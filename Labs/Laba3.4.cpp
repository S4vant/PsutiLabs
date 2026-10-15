#include <iostream> 
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std; 
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double x, y, R,t;
    int k;
    cout<<"Введите R: ";
    cin>>R;
    cout<<"Введите Диапазон: ";
    cin>>t;
    cout<<"Нужно ввести функцию? 1-да остальное нет ";
    cin>>k;
    x=0;  
    if (k==1)
    {
       cout << "x  |  y"<<endl<<"---------"<<endl;
        for (x=-t; x<=t;x+=1)
        {
            if ( x < 0 )
            {
                y = -(x * 0.5) - 3;
            }
           
            if (x>=0)
            {
                y = R*sin(1.5*M_PI+M_PI*x/(2*R));
            }
            if (x>=R)
            {
                y = 0;
            }
            cout<<x<<setprecision(4)<<fixed <<"  |  "<<y<<endl<<"---------"<<endl;
        }
    }
    else
    {
        cout<<"Вы решили не решать график";
        return 0;
    } 
cin >>x;
}