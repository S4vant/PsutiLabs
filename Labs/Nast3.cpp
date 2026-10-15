#include <iostream> 
#include <cmath>
#include <windows.h>//Библиотека для создания отдельных окон, но я использую ее только для 8 и 9 строчки
#include <iomanip>
using namespace std; 
double x, y, R, t, u,m;
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);//эти строчки подключают кодировку юникод-8 нужна для кириллицы
    SetConsoleCP(CP_UTF8);
    int k;
    void grafic();
    cout<<"Введите R: ";
    cin>>u;
    R=fabs(u);
    cout << "Введите значение x: ";
    cin >> x;
    grafic();
    cout << setw(5)<<x<<setprecision(4) <<"  |  "<<y<<endl<<setw(5)<<"---------------"<<endl;
    cout << "Введите Диапазон: ";//Диапазон на котором от значения 0 принимаются значения x
    cin >> t;
    cout << "Введите шаг: ";// Шаг с которым будет отбираться х для таблицы
    cin >> m;
    cout << setw(5) << "x      |     y" << endl << "---------------" << endl;//Дизайн для красивой таблицы setw()-колличество символов с строке
    for (x=-t; x<=t;x+=m)
    {
        grafic();
        cout << setw(5) << x << setprecision(4) <<"  |  "<< y << endl << setw(5)<<"---------------"<<endl;
    }                   //setprecision(4) Обозначает округление до 4 символов 
}
void grafic()// Войдовская функция отличается от всех остальных тем, что у нее нет возвращения значения путем "Return"
{// Функция void на деле не функция, а процедура
    if (x <= -R)
    {
        y=R;
    }
    if (x > -R&&x<R)
    {
        y=R*(sin(1.5*M_PI+M_PI*x/(2*R)))+R;    // Соответственно в этой процедуре мы вычисляем значение x 
    }
    if (x <= R*2 && x >= R)
    {
        y=-x*2+R*3;
    }
    if (x>R*2)
    {
        y=x-R*3;
    }
}