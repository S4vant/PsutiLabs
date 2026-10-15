#include <iostream> 
#include <cmath>
#include <windows.h>
using namespace std; 
double x, y, R,t;
int k;
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
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
        for (x=-t; x<=t;x+=0.5)
        {
            if ( x <-5&&x>=-9 )
            {
                y = R+R*sin(M_PI+M_PI*fabs(x+9)/(R*2));
            }
            if ( x <=-4 && x >=-5 )
            {
                y = R;
            }
            if (x>-4&&x<=0)
            {
                y = -x*R/4;
            }
            
            if (x>0&&x<M_PI)
            {
                y = sin(M_PI-x);
            }
            if (x>=M_PI)
            {
                y = x-M_PI;
            }
            cout<<x<<"  |  "<<y<<endl<<"---------"<<endl;
        }
    }
    else
    {
        cout<<"Вы решили не решать график";
        return 0;
    } 
cin >>x;
}