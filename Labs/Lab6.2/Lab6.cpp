//В онлайн компиляторе, скопируй весь этот файл в встроенный файл main.cpp
//В Студии добавь этот файл как основной
#include <iostream>
#include <windows.h>//библиотека для создания окон, но мне она нужна для подключения киррилицы в строках 8 и 9
#include "Functions1.h"//в студии пропиши до заголовочного файла полный путь
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);//Собственно ждесь я подключаю русский язык для вывода, тебе в онлайн компилторе это не нужно
    SetConsoleCP(CP_UTF8);
    int n;
    cout << "Введите кол-во элементов массива: ";
    cin >> n;
    double* array = new double[n];//создаем ссылку на массива array оператор new выделяет под него память
    Add(array, n);//вызываем здесь процедуры из заголовочного файла
    Out(array, n);
    Summ(array, n);
    comp(array, n);
    Preo(array, n);
    return 0;
}