#include "Lab10.18.h"

using namespace std;
int main ()
{
    SetConsoleOutputCP(CP_UTF8);//подключение киррилицы в компилятор который ее не поддерживает
    SetConsoleCP(CP_UTF8);
    cout<<"Дано: Лаба 9.18 1)С клав задать 8 значений для структуры PRICE"<<endl;
    PRICE *p = new PRICE[9];//создаем указатель на структуру
    void Output_arr(struct PRICE *p);
    void Input_arr(struct PRICE *p);
    void Sort_arr(struct PRICE *p);
    void Struct_search(struct PRICE *p);
    Input_arr(p);
    Output_arr(p);
    Sort_arr(p);
    Output_arr(p);
    Struct_search(p);
    delete[] p;
    return 0;
}