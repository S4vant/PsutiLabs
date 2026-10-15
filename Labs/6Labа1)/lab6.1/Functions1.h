//Это заголовочный файл, мы его подключаем к нашему основному с помощью include "Имя.h"
#include <iostream>
#include <ctime>//единственная новая для тебя библиотека, нужна что бы получать значение которое изменяется от времени, использую для функции рандома
#include <cmath>
double Summ_otriz,Prod_MI_MA,y;//В заголовочном файле мы обьявляем все переменные и функции, из значение можно будет получить и в основном файле
int k, Maxim, Minim, n_w ;
using namespace std;
void  Nabor_First(double *numbers, int n)//Все функции типа void не возвращают никакого значения а потому являются не функциями а процедурами
{//эта процедура нужна для набора новых значений в массив
 cout << "Введите элементы массива"<< endl;
for (int i = 0; i < n; ++i)
    {
    cout << i+1<<") " ;
    cin >> numbers[i];//набор решил сделать с клавиатуры, так проше обьяснить чем "рандом"
    }
}
void sum_Otriz(double *numbers, int n)//процедура для второго задания, думаю тут все понятно
{
    for (int i = 0; i < n; ++i)
    {
    if (numbers[i]<0)
        {
            Summ_otriz+=numbers[i];
        }
    }
    cout<<"\n"<<"Сумма отрицательных элементов массива (1)= "<<Summ_otriz<<endl;
}
void First_Last_min(double *numbers, int n)
{ 
    Maxim=0;
    Minim=0; 
    cout<<"Отрицательные элементы массива: "<<endl;
    for (int i = 1; i < n; ++i)//Путем сравнения iТого эемента массива с [Maxim]элементом массива присваивает индекс наибольшего элемента массива переменной Maxim
    {
        if (numbers[i]>numbers[Maxim])
        {
            Maxim=i;
        }
    }
    for (int i = 1; i < n; ++i)
    {
        if (numbers[i]<numbers[Minim])// Тут тоже самое, но уже индекс минимального элемента
        {
            Minim=i;
        }
    }
    cout<<"\n"<<"Минимальный элемент массива: "<<Minim+1<<") "<<numbers[Minim];
    cout<<"\n"<<"Максимальный элемент массива: "<<Maxim+1<<") "<<numbers[Maxim]<<endl;
}
void Prod_MinMax(double *numbers, int n)// Процедура выполняет 2-е задание Product_Min-Max
{   Prod_MI_MA=1;// Если мин и макс значения соседи, то между ними и не будет никаких других элементов, соответсвенно произведение 1
    k=Maxim-Minim;
    if (k<-1) 
    {
        for (int i = Maxim+1; i < Minim; ++i)
        {
            Prod_MI_MA*=numbers[i];
        }
    }
    if (k>1) 
    {
        for (int i = Minim+1; i < Maxim; ++i)
        {
            Prod_MI_MA*=numbers[i];
        }
    }
    cout<<"Произведение между максимальным и минимальным элементом массива (2)= "<<Prod_MI_MA<<endl;
}
void nabor_sec(double *numbers, double *numbers_sec, int n)//Процедура для фильтрации первого массива.
{//фильтр работает так, что по очереди ищет минимальные значения и присваивает их второму массиву, но заменяет эти минимальные значения в первом массиве на максимальное+1, что бы эьи значения не появлялись в дальнейщем поиски мин значений
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; ++j)
    {
        if (numbers[j]<numbers[Minim])
        {
            Minim=j;
        }
    }
    k++;
    numbers_sec[i]=numbers[Minim];
    numbers[Minim]=numbers[Maxim]+1;
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
{   int n_w=0;//Output_numbers_second Вывод второго массива, изначально до фильтрации массив этот полностью пустой
    cout<<"Отфильтрованный массив(3): "<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<i+1<<") "<<numbers_sec[n_w]<<" ";
        n_w+=1;
    }
    cout<<endl;
}