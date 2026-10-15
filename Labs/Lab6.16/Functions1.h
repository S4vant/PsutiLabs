#include <iostream>
#include <ctime>
#include <cmath>
unsigned value = unsigned(time(nullptr));
double kran, ran,Sum_Abs_Min,y;
int k, Maxim, Minim, n_w, Summ_otriz ;
using namespace std;
void  nabor(double *numbers, int n)
{
    double Get_random(int);
for (int i = 0; i < n; ++i)
    {
    numbers[i]=Get_random(n);
    }
}
void sum_Otriz(double *numbers, int n)
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
void First_Last_min(double *numbers, int n)
{   Maxim=0;
    Minim=0; 
    for (int i = 1; i < n; ++i)
    {
        if (numbers[i]<numbers[Minim])
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
        Sum_Abs_Min+=abs(numbers[i]);
    }
    cout<<"\n"<<"Сумма модулей после минимального: "<<Sum_Abs_Min<<endl;
    }
}
void nabor_sec(double *numbers, double *numbers_sec, int n)
{    
    for (int i = 0; i<n;i++)
    {
        if (numbers[i]<0)
        {
            numbers[i]=pow(numbers[i],2);
        }
    }
    for (int i = 1; i < n; ++i)
    {
        if (numbers[i]>numbers[Maxim]) 
        {
            Maxim=i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; ++j)
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
{
    for (int i = 0; i < n; ++i)
    {   
    cout<<i+1<<")"<<numbers[i]<<" ";
    }
}
void Output_nums_sec(double *numbers_sec,int n)
{   int n_w=0;
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
