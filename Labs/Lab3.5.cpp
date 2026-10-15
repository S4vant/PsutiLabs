#include <iostream> //КОММЕНТАРИИ УДАЛИТЬ!!!!
#include <cmath>
#include <windows.h>//Библиотека для создания отдельных окон, но я использую ее только для 8 и 9 строчки
#include <iomanip>
using namespace std; 
double x, y, R, t, u,m;
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);//в онлайн компиляоре эти строчки можно удалить
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
    if (x <= -R*5\3)
    {
        y=x-R;
    }
    if (x > -R&&x<2*R)
    {
        y=-x/2;    // Соответственно в этой процедуре мы вычисляем значение x 
    }
    if (x <= R*3 && x >= 2*R)
    {
        y=-R;
    }
    if (x>R*3)
    {
        y=R*sin(0.5*M_PI+M_PI*x/(R*2))-R;
    }
}