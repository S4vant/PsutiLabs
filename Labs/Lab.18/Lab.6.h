//Это заголовочный файл, мы его подключаем к нашему основному с помощью include "Имя.h"
#include <iostream>
#include <ctime>//единственная новая для тебя библиотека, нужна что бы получать значение которое изменяется от времени, использую для функции рандома
#include <cmath>
unsigned val = unsigned(time(nullptr));//присваивает переменной value, постоянно мняющиеся значение времени
double kran, ran,Sum_int_Min,C;//В заголовочном файле мы обьявляем все переменные и функции, из значение можно будет получить и в основном файле
int k, Maxim, L_min, n_w, S ;
using namespace std;
void  f_array(double *numbers, int n)//Все функции типа void не возвращают никакого значения а потому являются не функциями а процедурами
{//эта процедура нужна для набора новых значений в массив
    double random(int);//Обьявляем одну функцию внутри другой
for (int i = 0; i < n; ++i)
    {
    numbers[i]=random(n);// Каждую итерацию цикла присваивает следующему элементу массива значения примерно от -12 до 12
    }
}
void Kol_under_C(double *numbers, int n)//процедура для второго задания, думаю тут все понятно
{   cout<<" Введите значение С"<<endl;
    cin>>C;
    for (int i = 0; i < n; ++i)
    {
    if (numbers[i]<C)
        {
            S++;
        }
    }
    cout<<"\n"<<"Колличество элементов массива меньше С= "<<S<<endl;
}
void Sum_int_after_lmin(double *numbers, int n)//Выполняет второе задание 16 варианта
{   Maxim=0;
    L_min=0; 
    for (int i = 1; i < n; ++i)
    {
        if (numbers[i]<0)//Ищем индекс минимального элемента
        {
            L_min=i;
        }
    }
    cout<<"\n"<<"последний отрицательный элемент массива: "<<L_min+1 << ") "<<numbers[L_min]<<endl;
    if (L_min+1==n)
        { 
        cout<<"\n"<<"После L_min нет других элементов"<<endl;
        }
    else 
    {
    for (int i = L_min+1; i < n; ++i)
    {
        Sum_int_Min+=trunc(numbers[i]);// trunc это функция отбрасывания дробной части
    }
    cout<<"\n"<<"Сумма целых чисел после L_min: "<<Sum_int_Min<<endl;
    }
}
void Sec_array(double *numbers, double *numbers_sec, int n)//Процедура для фильтрации первого массива.
{//фильтр работает так, что по очереди ищет минимальные значения и присваивает их второму массиву, но заменяет эти минимальные значения в первом массиве на максимальное+1, что бы эьи значения не появлялись в дальнейщем поиски мин значений
    for(int i=1;i<n;i++)
    {
        if (numbers[i]>numbers[Maxim])
        {
            Maxim=i;
        }
    }
    cout<<"\n"<<"Максимальное значение в массиве: "<<numbers[Maxim]<<endl;
    for (int i = 0; i<n;i++)
    {
        if (numbers[i]<numbers[Maxim]*1.2&&numbers[i]>numbers[Maxim]*0.8)
        {
            numbers_sec[k]=numbers[i];
            k++;
            numbers[i]=-106;
        }
    }
    for(int i=0;i<n;i++)
    {
        if (numbers[i]!=-106)
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
double random(int n)
{ //функция для получения условно рандомных значений
    val = (val*29/7) % 1000;
    ran = sqrt(val-(val*0.22));
    kran = round((17.7-ran)*100)/100;
    return kran;
}
