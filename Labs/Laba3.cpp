#include <iostream> 
#include <cmath>
#include <windows.h>
#include <locale.h>
using namespace std; 
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
 
    double x, y;
    int i,k;
    i=0;
    
    for (i=0; i<10;i++)
        {
        cout<<"Нужно ввести функцию? 1-да остальное нет ";
        cin>>k;  
        if (k==1)
        {
            cout<<"Введите х: ";
            cin>>x; 
               
            if ( x < 0 ) {
            y = -(x * 0.5) - 3;
            }
            if (x<3&&x>=0)
            {
                y = -x*sin(M_PI + M_PI*x/6)-3;
            }
            if (x==3)
            {
                y = 0;
            }
            if (x>R)
            {
                y = x*sin(M_PI*(x-3)/6)/2;
            }
                cout << (y)<<endl;
        }
        else
        {
            cout<<"Вы преждевременно закончили цикл";
            return 0;
        }
        }
return 0;
}