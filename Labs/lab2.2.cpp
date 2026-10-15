#include <iostream> //Библиотека для работы с консолью ввод/вывод
#include <cmath>//Библиотека для сложных математических операций
#include <windows.h>//Нужно только мне для добавления кириллицы!ДЛЯ ОНЛАЙН КОМПИЛЯТОРА УДАЛИТЬ
using namespace std; 
int main() 
{ 
SetConsoleOutputCP(CP_UTF8);//Эти двестроки добавляют в консоль ккирилицу если, вдруг она не отображается(как у меня)!ДЛЯ ОНЛАЙН КОМПИЛЯТОРА УДАЛИТЬ
SetConsoleCP(CP_UTF8);
    float x, y, r; // Тип с плавающей запятой
    cout << "r:";
    cin >> r;
    for (int i = 0; i < 10; i++)
    {
        cout << "x" << i + 1 << ":";
        cin >> x;
        cout << "y" << i + 1 << ":";
        cin >> y;
        cout << endl;
        if (((x * x + y * y) <= (r*r) && (x <= 0) && (y >= 0)) || ((y <= 0) && (y >= -r)&&(x>=0)&&(x<=r/2) && (y >= -x*2)) || ((x >= r/2) && (y <= 0) && (x<=r)  && (y >= x*2-r*2)))
        cout << "yes\n";
        else cout << "no\n";
    }
    return 0;}