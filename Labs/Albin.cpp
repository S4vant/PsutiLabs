#include <iostream> 
#include <cmath>
#include <windows.h>//Библиотека для создания отдельных окон, но я использую ее только для 8 и 9 строчки
#include <iomanip>
using namespace std; 
double x, y, R,t;
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);//эти строчки подключают кодировку юникод-8 нужна для кириллицы
    SetConsoleCP(CP_UTF8);
    int k;
    void graf();
    cout<<"Введите R: ";
    cin>>R;
    cout << "Введите значение x: ";
    cin >>x;
    graf();
    cout<<setw(5)<<x<<setprecision(4) <<"  |  "<<y<<endl<<setw(5)<<"---------------"<<endl;
    cout<<"Введите Диапазон: ";//Диапазон на котором от значения 0 принимаются значения x
    cin>>t;
    cout<<"Нужно ввести функцию? 1-да остальное нет ";
    cin>>k;
    if (k==1)
    {
       cout <<setw(5)<< "x      |     y"<<endl<<"---------------"<<endl;//Дизайн для красивой таблицы setw()-колличество символов с строке
        for (x=-t; x<=t;x+=0.2)
        {
            graf();
            cout<<setw(5)<<x<<setprecision(4) <<"  |  "<<y<<endl<<setw(5)<<"---------------"<<endl;
        }                     //setprecision(4) Обозначает округление до 4 символов
    }
    else
    {
        cout<<"Вы решили не решать график";
        return 0;
    } 
}
void graf()
{
    if (x <= -R)
    {
        y=x+R;
    }
    if (x < 0&&x>=-R)
    {
        y=R*(sin(0.5*M_PI+M_PI*x/(2*R)));
    }
    if (x <= 2*R && x >= 0)
    {
        y=R-x/2;
    }
    if (x>2*R)
    {
        y=(x-2*R);
    }
    
}