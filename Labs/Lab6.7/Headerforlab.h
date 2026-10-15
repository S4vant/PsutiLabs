////Это заголовочный файл, мы его подключаем к нашему основному с помощью include "Имя.h"
#include <iostream>
#include <ctime>//единственная новая для тебя библиотека, нужна что бы получать значение которое изменяется от времени, использую для функции рандома
#include <cmath>
double Prod_chet,Sum_chet,y;//В заголовочном файле мы обьявляем все переменные и функции, из значение можно будет получить и в основном файле
int k, F_null,S_null,Maxim;
using namespace std;
void  Nabor_First(double *numbers, int n)//Все функции типа void не возвращают никакого значения а потому являются не функциями а процедурами
{//эта процедура нужна для набора новых значений в массив
for (int i = 0; i < n; ++i)
    {
    cout << "Введите " << i+1 << ") элемент массива: "<<endl;
    cin >> k;
    numbers[i]=k;
    }
}
void max_num(double *numbers, int n)//процедура для 1-го задания, думаю тут все понятно
{
    for (int i = 0; i < n; i++)
    {
        if (numbers[i]>numbers[Maxim])//поиск индекса максимального значения массива
        Maxim=i;
    }
    cout<<"\n"<<"Максимальный элемент массива (1)= "<< Maxim+1<<") " numbers[Maxim]<<endl;
}
void Prod_in_null(double *numbers, int n)
{   Prod_chet=1;
    S_null=-1;
    F_null=-1; 
    for (int i = 0; i < n; ++i)
    {
        if (numbers[i]==0)
        {
            F_null=i;
            break;
        }
    }
    for (int i = F_null+1; i < n; ++i)
    {
        if (numbers[i]==0)
        {
            S_null=i;
            break;
        }
    }
    if (F_null==-1)
    {
       cout<<"\n"<<"В массиве нет нулевых элементов"<<endl;
    }
    else if (S_null==-1)
    {
       cout<<"\n"<<"В массиве только один ноль"<<endl;
    }
    else if (S_null==F_null+1)
    {
       cout<<"\n"<<"Между первым и вторым нулем массива нету значений"<<endl;
    }
    else
    {
        for (int i = F_null+1 ; i < S_null; ++i)
        {
            Prod_chet*=numbers[i];
        }
        cout<<"\n"<<" Первый нулевой элемент массива: "<<F_null+1<<"Второй нулевой элемент массива "<<S_null+1<<endl;
        cout<<"Произведение элементов от первого до второго нулевого элемента массива (2)= "<<Prod_chet<<endl;
    }
}
void nabor_sec(double *numbers, double *numbers_sec, int n)//Процедура для набора второго массива.
{
    int j=0;
    for (int i = 0; i < n; i+=2)
    { 
        numbers_sec[j]=numbers[i];
        j++;
    }
    for (int i = 1; i < n; i+=2)
    { 
        numbers_sec[j]=numbers[i];
        j++;
    }
}
void Output_nums(double *numbers, int n)
{//Output_numbers Вывод первого массива
    for (int i = 0; i < n; ++i)
    {   
    cout<<i+1<<")"<<numbers[i]<<" ";
    }
}
void Output_nums_sec(double *numbers_sec,int n)
{   //Output_numbers_second Вывод второго массива, изначально до фильтрации массив этот полностью пустой
    cout<<"Отфильтрованный массив(3): "<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<i+1<<") "<<numbers_sec[i]<<" ";
    }
    cout<<endl;
}