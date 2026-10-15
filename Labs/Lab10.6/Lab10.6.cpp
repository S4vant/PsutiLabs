
#include <windows.h>//библиотека для создания оконных приложений
#include <string>//Библиотека для работы с строками
#include "Lab10.h"
#define numb 4 //константа ограницивающая колличество записей о работниках
using namespace std;

int main ()
{
    void Output_arr(struct WORKER *p);
    void Input_arr(struct WORKER *p);
    void Need_exp(struct WORKER *p);
    SetConsoleOutputCP(CP_UTF8);//подключение киррилицы в компилятор который ее не поддерживает
    SetConsoleCP(CP_UTF8);
    /*setlocale(LC_ALL, "");*/
    cout<<"Дано: 10.6 1)С клав задать 10 значений для структуры WORKER c разделением на неск файлов"<<endl;
    WORKER *p = new WORKER[numb+1];//создаем указатель на структуру
    Input_arr(p);
    Output_arr(p);
    Need_exp(p);
    delete[] p;
    return 0;
}