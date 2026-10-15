
#include <iostream>
#include <windows.h>//библиотека для создания оконных приложений
#include "Header7.7.h"
using namespace std;
int main ()
{

    SetConsoleOutputCP(CP_UTF8);//подключение киррилицы в компилятор который ее не поддерживает
    SetConsoleCP(CP_UTF8);
    cout<<"Дано: Матрица 8х8"<<endl;
    int** array1 = new int* [8];//создаем массив указателей на указатели
    for (int j = 0; j < 8; ++j)
    {
        array1[j] = new int[8];
    }
    Nabor_First(array1);//Набор новой матрицы
    Output_nums(array1);//вывод получившейся матрицы
    First_quest(array1);//Выполнение задания с k
    Second_quest(array1);//Выполнение задания с отриц элементами в строках
    
}