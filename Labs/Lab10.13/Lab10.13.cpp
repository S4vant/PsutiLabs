
#include <iostream>
#include <windows.h>//библиотека для создания оконных приложений
#include <cmath>
#include <iomanip>
#include <string>//Библиотека для работы с строками
#include "Lab10.13.h"
#define numb 4
using namespace std;
bool flag;
void Output_arr(struct NOTE *p);
int main ()
{
    SetConsoleOutputCP(CP_UTF8);//подключение киррилицы в компилятор который ее не поддерживает
    SetConsoleCP(CP_UTF8);
    void Input_arr(struct NOTE *p);
    void Output_arr(struct NOTE *p);
    void arr_search(struct NOTE *p);
    void arr_sort(struct NOTE *p);
    cout<<"Задание 10.13: С клав задать 8 значений для структуры NOTE"<<endl;
    NOTE *p = new NOTE[numb+1];//создаем указатель на структуру
    Input_arr(p);
    arr_sort(p);
    Output_arr(p);
    arr_search(p);
    delete[] p;
    return 0;
}