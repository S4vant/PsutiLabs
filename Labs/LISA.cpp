#include <iostream> 
#include <cmath>
#include <windows.h>
using namespace std; 
int main() 
{ 
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
double x, y;// объявляем вещественные переменные x, y и R 
int i,k;
i=0;
k=0;
for (i=0; i<10;i++)
    {
    cout<<"Бросить дротик? 1-да остальное нет: ";
    cin>>k;
    if (k==1)
    { 
        cout << "Попытока №"<<i+1<<"/10"<<endl;
        cout << "Введите число для переменной x = "; 
        cin >> x;// пользователь присваивает значение для переменной x 
        cout << "Введите число для переменной y = "; 
        cin >> y;// пользователь присваивает значение для переменной y 

        if ((x >= 0 && y <= 0 && y>=(pow((x -2), 2) - 3) && y <= x)||(x >= 0 && y >= 0 && y <= x && y >= (pow((x - 2), 2) - 3)))
            {
            cout << "Вы попали в мишень !!!" << endl;
            }
        else 
            {
            cout << "Промах !!!" << endl;
            }
    }
    else
        {
        cout<<"Вы решили дальше не кидать"<<endl;
        return 0; 
    }
    } 
return 0;
}