////Это заголовочный файл, мы его подключаем к нашему основному с помощью include "Имя.h"
#include <iostream>
#include <cmath>
double a_b,Sum_ot_max,bubl,a,b;//В заголовочном файле мы обьявляем все переменные и функции, из значение можно будет получить и в основном файле
int MAX;
using namespace std;
void  Nabor_First(double *numbers, int n)//Все функции типа void не возвращают никакого значения а потому являются не функциями а процедурами
{//эта процедура нужна для набора новых значений в массив
for (int i = 0; i < n; ++i)
    {
    cout << "Введите " << i+1 << " эемент массива number: "<<endl;
    cin >> numbers[i];

    }
}
void Kol_from_a_to_b(double *numbers, int n)//процедура для 1-го задания, думаю тут все понятно
{   cout<<"\n"<<"Введите значения а и b: "<<endl;
    cin>>a>>b;
    for(int i = 0; i < n; i++)
    {
    if (numbers[i]>=a && numbers[i]<=b || numbers[i]<=a && numbers[i]>=b) a_b++;
    }
    
    cout<<"\n"<<"Колличество элементов значения которых находятся в промежутке от "<<a<<"до "<<b<<" (1)= "<<a_b<<endl;
}
void Sum_befor_max(double *numbers, int n)
{ 
    for (int i=0; i<n; i++)
    {
    if (numbers[i]>numbers[MAX]) MAX=i;
    }
    if (MAX==n)
    {
       cout<<"\n"<<"Максимальный элемент последний в массиве, после него нет элеменотв."<<endl;
    }
    else
    {
        for (int i = MAX+1 ; i < n; ++i)
        {
            Sum_ot_max+=numbers[i];
        }
        cout<<"\n"<<"Номер максимального элемента= "<<MAX+1<<endl;
        cout<<"Сумма элементов после максимального элемента массива (2)= "<<Sum_ot_max<<endl;
    }
}
void Array_sort(double *numbers, int n)//Процедура для фильтрации первого массива.
{//фильтр работает так, что по очереди ищет минимальные значения и присваивает их второму массиву, но заменяет эти минимальные значения в первом массиве на максимальное+1, что бы эьи значения не появлялись в дальнейщем поиски мин значений
    int j=0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n-1; i++)
        { 
            if (abs(numbers[i+1])>=abs(numbers[i]))
            {
                bubl=numbers[i+1];
                numbers[i+1]=numbers[i];
                numbers[i]=bubl;
            }
        }
    }
}
void Output_nums(double *numbers, int n)
{//Output_numbers Вывод первого массива
    for (int i = 0; i < n; ++i)
    {   
    cout<<i+1<<")"<<numbers[i]<<" ";
    }
}