#include <iostream> //КОММЕНТАРИИ УДАЛИТЬ!!!!
#include <cmath>
#include <windows.h>//Библиотека для создания отдельных окон, но я использую ее только для 8 и 9 строчки
#include <iomanip>
using namespace std; 
double x, y, R, t, u, m;
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);//в онлайн компиляоре эти строчки можно удалить
    SetConsoleCP(CP_UTF8);
    int k;
    cout<<"Введите R: ";
    cin>>u;
    R=fabs(u);
    cout << "Введите значение x: ";
    cin >> x;
    if (x < -R*5/3)
    {
        y=-R;
    }
    if (x >= -R*5/3 && x<=-R)
    {
        y=x+R;
    }
    if (x < R && x > -R)
    {
        y=R*sin(0.5*M_PI+M_PI*x/(R*2));
    }
    if (x>=R)
    {
        y=(x-R)*R/5;
        if (y>=R)
        {
        y=R;
        }
    }
    cout << setw(5)<< x <<setprecision(4) <<"  |  "<< y <<endl<<setw(5)<<"---------------"<<endl;
    cout << "Введите Диапазон: ";//Диапазон на котором от значения 0 принимаются значения x
    cin >> t;
    cout << "Введите шаг: ";// Шаг с которым будет отбираться х для таблицы
    cin >> m;
    cout << setw(5) << "x      |     y" << endl << "---------------" << endl;//Дизайн для красивой таблицы setw()-колличество символов с строке
    for (x=-t; x<=t;x+=m)
    {
        if (x < -R*5/3)
    {
        y=-R;
    }
    if (x >= -R*5/3 && x<=-R)
    {
        y=x+R;
    }
    if (x < R && x > -R)
    {
        y=R*sin(0.5*M_PI+M_PI*x/(R*2));
    }
    if (x>=R)
    {
        y=(x-R)*3/5;
        if (y>=R)
        {
        y=R;
        }  
    }
        cout << setw(5) << x << setprecision(4) <<"  |  "<< y << endl << setw(5)<<"---------------"<<endl;
    }                   //setprecision(4) Обозначает округление до 4 символов 
}