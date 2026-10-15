#include <iostream> 
#include <cmath>
#include <windows.h>//Библиотека для создания отдельных окон, но я использую ее только для 8 и 9 строчки
#include <iomanip>
#define _USE_MATH_DEFINES
using namespace std; 

int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);//это для подключения киррилицы в моем компиляторе
    SetConsoleCP(CP_UTF8);
    double x, y, R, t,t1, u,m;
    cout<<"Введите R: ";
    cin>>u;
    R=fabs(u);
    cout << "Введите значение x: ";
    cin >> x;
    if (x <=1-R)
    {
        y=-x+1-R;
    }
    if (x > 1-R&&x<=3-R)
    {
        y=0;   
    }
    if (x >3-R && x < 3+R)
    {
        y=R*cos(M_PI*(x-3)/(R*2));
    }
    if (x>=3+R)
    {
        y=-0.5*(x-3-R);
    }
    cout << setw(5)<<x<<setprecision(4) <<"  |  "<<y<<endl<<setw(5)<<"---------------"<<endl;
    cout << "Введите необходимые значения от a до b. \n а: ";//Диапазон на котором от значения 0 принимаются значения x
    cin >> t;
    cout <<" b: ";
    cin >> t1;
    cout << "Введите шаг: ";// Шаг с которым будет отбираться х для таблицы
    cin >> m;
    cout << setw(5) << "x      |     y" << endl << "---------------" << endl;//Дизайн для красивой таблицы setw()-колличество символов с строке
    for (x=t; x<=t1;x+=m)
    {
        if (x <=1-R)
    {
        y=-x+1-R;
    }
    if (x > 1-R&&x<=3-R)
    {
        y=0;   
    }
    if (x >3-R && x < 3+R)
    {
        y=R*cos(M_PI*(x-3)/(R*2));
    }
    if (x>=3+R)
    {
        y=-0.5*(x-3-R);
    }
        cout << setw(5) << x << setprecision(4) <<"  |  "<< y << endl << setw(5)<<"---------------"<<endl;
    }                   //setprecision(4) Обозначает округление до 4 символов 
}