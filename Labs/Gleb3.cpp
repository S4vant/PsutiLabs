#include <iostream> 
#include <cmath>
#include <windows.h>//Можно удалить. Нужна для меня для строк 8 9
#include <iomanip>//библиотека для округления
using namespace std; 
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);//Эти две строки можешь удалить они нужны только мне для подключения кирилицы в консоль
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
            if ( x < -6 )
            {
                y = R*sin(0.5*M_PI+M_PI*x/(2*R))-R;
            }
           
            if (x>= -6 && x < 2)
            {
                y = 2*x/(R+2)+1;
            }
            if (x>2 && x<=6)
            {
                y = 0;
            }
            if (x>6)
            {
                y = pow((x-6),2);
            }
            cout<<x<<setprecision(4) <<"  |  "<<y<<endl<<"---------"<<endl;
        }
    }
    else
    {
        cout<<"Вы решили не решать график";
        return 0;
    } 
cin >>x;
}