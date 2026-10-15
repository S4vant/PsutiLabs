#include <iostream> 
#include <cmath>
#include <windows.h>//Это библиотека для строчек 8 и 9 удалить для онлайн компилятора
#include <iomanip>
using namespace std; 
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);//Эти две строчки нужны только для киррилицы на моем компиляторе
    SetConsoleCP(CP_UTF8);//
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
       cout <<setw(5)<< "x      |     y"<<endl<<"---------------"<<endl;
        for (x=-t; x<=t;x+=0.5)
        {
            if ( x <= -2*R )
            {
                y = R*sin(0.5*M_PI+M_PI*x/(2*R));//тригонометрия при значении R=3(как на картинке) и x=-2R(соответственно -6) будет 3*sin(M_PI)
            }
            if (x>-2*R && x<-R)
            {
                y = x+R;
            }
            if (x>=-R&&x<0)
            {
                y = R*sin(0.5*M_PI+M_PI*x/(2*R));
            }
            if (x>=0&&x<=R)
            {
                y = R-x;
            }
            if (x>R)
            {
                y = (x-R)/2;
            }
            cout<<setw(5)<<x<<setprecision(4) <<"  |  "<<y<<endl<<setw(5)<<"---------------"<<endl;
        }
    }
    else
    {
        cout<<"Вы решили не решать график";
        return 0;
    } 
system("pause");
}