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
    cout <<setw(5)<< "x      |     y"<<endl<<"---------------"<<endl;//Дизайн для красивой таблицы setw()-колличество символов с строке
    for (x=-t; x<=t;x+=0.2)
    {
        graf();
        cout<<setw(5)<<x<<setprecision(4) <<"  |  "<<y<<endl<<setw(5)<<"---------------"<<endl;
    }                     //setprecision(4) Обозначает округление до 4 символов 
}
void graf()
{
    if (x < -R-1)
    {
        y=-R;
    }
    if (x <= -R&&x>=-R-1)
    {
        y=x*2+R*2;
    }
    if (x < R && x > -R)
    {
        y=R*(sin(0.5*M_PI+M_PI*x/(2*R)));
    }
    if (x==0)
    {
        y=R;
    }
    if (x >= R)
    {
        y=(x-R)*R/5;
        if (y>=R)
        {   
            y=R;
        }
    }
}