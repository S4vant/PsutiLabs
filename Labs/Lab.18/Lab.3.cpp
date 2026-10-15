#include <iostream> 
#define _USE_MATH_DEFINES //для подключения math.h
#include <math.h>
#include <windows.h>//Библиотека для создания отдельных окон, но я использую ее только для 8 и 9 строчки
#include <iomanip>
using namespace std; 
double x, y, R, t, u,m;

int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);//эти строчки подключают кодировку юникод-8 нужна для кириллицы
    SetConsoleCP(CP_UTF8);
    int k;
    cout<<"Введите R: ";
    cin>>u;
    R=fabs(u);
    cout << "Введите значение x: ";
    cin >> x;
    if (x <= -R)
    {
        y=-x-R;
    }
    if (x > -R&&x<0)
    {
        y=R*(sin(M_PI*(-x)/(R)))/2;
    }
    if (x < R*2 && x >= 0)
    {
        y=R*(sin(M_PI*(-x)/(2*R)));
    }
    if (x>=R*2 && x<=R*3)
    {
        y=-x/2+R;
    }
    if (x>R*3)
    {
        y=-0.5*R;
    }

    cout << setw(5)<<x<<setprecision(4) <<"  |  "<<y<<endl<<setw(5)<<"---------------"<<endl;
    cout << "Введите Диапазон: ";//Диапазон на котором от значения 0 принимаются значения x
    cin >> t;   
    cout << "Введите шаг для таблицы: " ;
    cin >> m;
    cout << setw(5) << "x      |     y" << endl << "---------------" << endl;//Дизайн для красивой таблицы setw()-колличество символов с строке
    for (x=-t; x<=t;x+=m)
    {
        if (x <= -R)
    {
        y=-x-R;
    }
    if (x > -R&&x<0)
    {
        y=R*(sin(M_PI*(-x)/(R)))/2;
    }
    if (x < R*2 && x >= 0)
    {
        y=R*(sin(M_PI*(-x)/(2*R)));
    }
    if (x>=R*2 && x<=R*3)
    {
        y=-x/2+R;
    }
    if (x>R*3)
    {
        y=-0.5*R;
    }
        cout << setw(5) << x << setprecision(4) <<"  |  "<< y << endl << setw(5)<<"---------------"<<endl;
    }                   //setprecision(4) Обозначает округление до 4 символов 
}
