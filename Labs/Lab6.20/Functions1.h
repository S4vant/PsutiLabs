//Это заголовочный файл, мы его подключаем к нашему основному с помощью include "Имя.h"
#include <iostream>
#include <ctime>//единственная новая для тебя библиотека, нужна что бы получать значение которое изменяется от времени, использую для функции рандома
#include <cmath>
unsigned value = unsigned(time(nullptr));//присваивает переменной value, постоянно мняющиеся значение времени
double kran, ran, Prod_pol,Sum_MI,y;//В заголовочном файле мы обьявляем все переменные и функции, из значение можно будет получить и в основном файле
int k, Maxim, Minim, n_w ;
using namespace std;
void  nabor(double *numbers, int n)//Все функции типа void не возвращают никакого значения а потому являются не функциями а процедурами
{//эта процедура нужна для набора новых значений в массив
    double Get_random(int);//Обьявляем одну функцию внутри другой
for (int i = 0; i < n; ++i)
    {
    numbers[i]=Get_random(n);// Каждую итерацию цикла присваивает следующему элементу массива значения примерно от -12 до 12
    }
}
void Prod_poloz(double *numbers, int n)//процедура для 1-го задания, думаю тут все понятно
{Prod_pol=1;
    for (int i = 0; i < n; ++i)
    {
    if (numbers[i]>0)
        {
            Prod_pol*=numbers[i];
        }
    }
    cout<<"\n"<<"Произведение положительных элементов массива (1)= "<<Prod_pol<<endl;
}
void Sum_for_min(double *numbers, int n)
{ 
    Maxim=0;
    Minim=0; 
    for (int i = 1; i < n; ++i)//Путем сравнения iТого эемента массива с [Minim]элементом массива присваивает индекс наименьшего элемента массива переменной Minim
    {
        if (numbers[i]<numbers[Minim])
        {
            Minim=i;
        }
    }
    for (int i = 1; i < n; ++i)
    {
        if (numbers[i]>numbers[Maxim])
        {
            Maxim=i;
        }
    }
    for (int i = 0; i < Minim; ++i)
    {
        Sum_MI+=numbers[i];
    }
    cout<<"\n"<<"Минимальный элемент массива: "<<Minim+1<<") "<<numbers[Minim]<<endl;
    cout<<"Сумма элементов от первого до минимального элемента массива (2)= "<<Sum_MI<<endl;
}
void nabor_sec(double *numbers, double *numbers_sec, int n)//Процедура для фильтрации первого массива.
{//фильтр работает так, что по очереди ищет минимальные значения и присваивает их второму массиву, но заменяет эти минимальные значения в первом массиве на максимальное+1, что бы эьи значения не появлялись в дальнейщем поиски мин значений
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n; j+=2)
    {
        if (numbers[j]<numbers[Minim])
        {   k++;
            Minim=j;
        }
    }
    numbers_sec[i]=numbers[Minim];
    numbers[Minim]=numbers[Maxim]+1;
    }
    for (int i = n/2; i < n; i++)
    {
        for (int j = 1; j < n; j+=2)
    {
        if (numbers[j]<numbers[Minim])
        {
            Minim=j;
        }
    }
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
{   //Output_numbers_second Вывод второго массива, изначально до фильтрации массив этот полностью пустой
    cout<<"Отфильтрованный массив(3): "<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<i+1<<") "<<numbers_sec[i]<<" ";
    }
    cout<<endl;
}
double Get_random(int n)
{ //функция для получения условно рандомных значений
    value = (value*29/7) % 1000;
    ran = sqrt(value-(value*0.22));
    kran = round((17.7-ran)*100)/100;

    return kran;
}
