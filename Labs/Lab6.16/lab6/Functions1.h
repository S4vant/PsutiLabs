//Это заголовочный файл, мы его подключаем к нашему основному с помощью include "Имя.h"
#include <iostream>
#include <ctime>//единственная новая для тебя библиотека, нужна что бы получать значение которое изменяется от времени, использую для функции рандома
#include <cmath>
unsigned value = unsigned(time(nullptr));//присваивает переменной value, постоянно мняющиеся значение времени
double kran, ran,Sum_Abs_Min,y;//В заголовочном файле мы обьявляем все переменные и функции, из значение можно будет получить и в основном файле
int k, Maxim, Minim, n_w, Summ_otriz ;
using namespace std;
void  nabor(double *numbers, int n)//Все функции типа void не возвращают никакого значения а потому являются не функциями а процедурами
{//эта процедура нужна для набора новых значений в массив
    double Get_random(int);//Обьявляем одну функцию внутри другой
for (int i = 0; i < n; ++i)
    {
    numbers[i]=Get_random(n);// Каждую итерацию цикла присваивает следующему элементу массива значения примерно от -12 до 12
    }
}
void sum_Otriz(double *numbers, int n)//процедура для второго задания, думаю тут все понятно
{
    for (int i = 0; i < n; ++i)
    {
    if (numbers[i]<0)
        {
            Summ_otriz++;
        }
    }
    cout<<"\n"<<"Колличество отрицательных элементов массива= "<<Summ_otriz<<endl;
}
void First_Last_min(double *numbers, int n)//Выполняет второе задание 16 варианта
{   Maxim=0;
    Minim=0; 
    for (int i = 1; i < n; ++i)
    {
        if (numbers[i]<numbers[Minim])//Ищем индекс минимального элемента
        {
            Minim=i;
        }
    }
    cout<<"\n"<<"Минимальный элемент массива: "<<Minim+1<<") "<<numbers[Minim];
    if (Minim==n)
        { 
        cout<<"\n"<<"После минимальнго элемента нет других элементов"<<endl;
        }
    else 
    {
    for (int i = Minim+1; i < n; ++i)
    {
        Sum_Abs_Min+=abs(numbers[i]);// abs это функция модуля
    }
    cout<<"\n"<<"Сумма модулей после минимального: "<<Sum_Abs_Min<<endl;
    }
}
void nabor_sec(double *numbers, double *numbers_sec, int n)//Процедура для фильтрации первого массива.
{//фильтр работает так, что по очереди ищет минимальные значения и присваивает их второму массиву, но заменяет эти минимальные значения в первом массиве на максимальное+1, что бы эьи значения не появлялись в дальнейщем поиски мин значений
    
    for (int i = 0; i<n;i++)
    {
        if (numbers[i]<0)
        {
            numbers[i]=pow(numbers[i],2);
        }
    }
    for (int i = 1; i < n; ++i)
    {
        if (numbers[i]>numbers[Maxim])//Ищем индекс максимального элемента, это нужно для работы фильтра
        {
            Maxim=i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; ++j)
    {
        if (numbers[j]<numbers[Minim])//такой фильтр уничтожает изначальный массив остается только отфильрованный по возрастанию второй массив
        {
            Minim=j;// первый массив заполняется одинаковыми максимальными значениями
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
double Get_random(int n)
{ //функция для получения условно рандомных значений
    value = (value*29/7) % 1000;
    ran = sqrt(value-(value*0.22));
    kran = round((17.7-ran)*100)/100;
    return kran;
}
