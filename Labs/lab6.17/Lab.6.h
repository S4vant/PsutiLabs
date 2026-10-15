//Это заголовочный файл, мы его подключаем к нашему основному с помощью include "Имя.h"
#include <iostream>
#include <ctime>//единственная новая для тебя библиотека, нужна что бы получать значение которое изменяется от времени, использую для функции рандома
#include <cmath>
//присваивает переменной value, постоянно мняющиеся значение времени
double Sum_int_Min;//В заголовочном файле мы обьявляем все переменные и функции, из значение можно будет получить и в основном файле
int k, Maxim, L_null, n_w, S, Nulls ;
using namespace std;
void  Nabor_First(double *numbers, int n)
{
for (int i = 0; i < n; ++i)
    {
    cout << "Введите " << i+1 << " элемент массива number: "<<endl;
    cin >> k;
    numbers[i]=k;
    }
}
void Kol_under_C(double *numbers, int n)//процедура для второго задания, думаю тут все понятно
{  
    for (int i = 0; i < n; ++i)
    {
    if (numbers[i]>0)
        {
            S++;
        }
    }
    cout<<"\n"<<"Колличество положительных элементов массива "<<S<<endl;
}
void Sum_int_after_lmin(double *numbers, int n)//Выполняет второе задание 16 варианта
{
    L_null=0;
    Nulls=0;
    for (int i = 1; i < n; ++i)
    {
        if (numbers[i]==0)//Ищем индекс минимального элемента
        {
            L_null=i;
            Nulls++;
        }
    }
    
    if (L_null+1==n)
        { 
        cout<<"\n"<<"После L_null нет других элементов"<<endl;
        }
    else if(Nulls==0)
    {
        cout << "Нету нулевых элементов ";
    }
    else
    {
    cout<<"\n"<<"последний нулевой элемент массива: "<<L_null+1 << ") "<<numbers[L_null]<<endl;
    for (int i = L_null+1; i < n; ++i)
    {
        Sum_int_Min+=numbers[i];
    }
    cout<<"\n"<<"Сумма целых чисел после L_null: "<<Sum_int_Min<<endl;
    }
}
void Sec_array(double *numbers, double *numbers_sec, int n)//Процедура для фильтрации первого массива.
{//фильтр работает так, что по очереди ищет минимальные значения и присваивает их второму массиву, но заменяет эти минимальные значения в первом массиве на максимальное+1, что бы эьи значения не появлялись в дальнейщем поиски мин значений
    k=0;
    for (int i = 0; i<n;i++)
    {
        if (numbers[i]<2&& numbers[i]>-2)
        {
            numbers_sec[k]=numbers[i];
            k++;
            numbers[i]=-100;
        }
    }
    for(int i=0;i<n;i++)
    {
        if (numbers[i]!=-100)
        {   
        numbers_sec[k]=numbers[i];
        k++;
        }
    }
}
void Output_f_nums(double *numbers, int n)
{//Output_numbers Вывод первого массива
    for (int i = 0; i < n; ++i)
    {   
    cout<<i+1<<")"<<numbers[i]<<" ";
    }
}
void Output_s_nums(double *numbers_sec,int n)
{   int n_w=0;//Output_numbers_second Вывод второго массива, изначально до фильтрации массив этот полностью пустой
    cout<<"\n"<<"Отфильтрованный массив(3): "<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<i+1<<") "<<numbers_sec[n_w]<<" ";
        n_w+=1;
    }
    cout<<endl;
}

