#include <iostream>
#include <windows.h>
using namespace std;

int main() {
   SetConsoleOutputCP(CP_UTF8);
   SetConsoleCP(CP_UTF8);
    float r, x, y;
    for (int i = 0; i < 10; i++)
    {
        setlocale(0, "");
        cout << "Попытка " << i + 1 << endl;
        cout << "Введите R ";
        cin >> r;
        cout << "Введите Х ";
        cin >> x;
        cout << "Введите У ";
        cin >> y;
        if ((y >= 0) && (x * x + y * y <= r * r) || (x <= 0) && (y >= -r) && (y <= x) || (x <= 0) && (y >= 0) && (x - y <= -r) )
        {
            cout << "Точка попадает в область" << endl;
        }
        else
        {
            cout << "Не попали в область" << endl;
        }
    }
    return 0;
}