#include <iostream>
#include <windows.h>
#include <ctime>
#include <cmath>
unsigned value = unsigned(time(nullptr));
double kran, ran, Summ_Nechet,Summ_MIN,y;
int k, First_MIN, Last_MIN, n_w;
using namespace std;
void  nabor(double *numbers, int n)
{ double Randoom(int);
for (int i = 0; i < n; ++i)
    {
    numbers[i]=Randoom(n);
    }
}
void sum_nechet(double *numbers, int n)
{
    for (int i = 0; i < n; ++i)
    {
    if ((i+1)%2>0)
        {
            Summ_Nechet+=numbers[i];
        }
    }
    cout<<"\n"<<"Сумма нечетных элементов массива (1)= "<<Summ_Nechet<<endl;
}
void First_Last_minus(double *numbers, int n)
{   
    cout<<"Отрицательные элементы массива: "<<endl;
    for (int i = 0; i < n; ++i)
    {
        if (numbers[i]<0)
        {
            cout<<i+1<<") "<<numbers[i]<<" ";
            Last_MIN=i;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (numbers[i]<0)
        {
            First_MIN=i;
            break;
        }
    }
    cout<<"\n"<<"Первый отрицательный элемент массива: "<<First_MIN+1<<") "<<numbers[First_MIN];
    cout<<"\n"<<"Последний отрицательный элемент массива: "<<Last_MIN+1<<") "<<numbers[Last_MIN]<<endl;
}
void Summ_FirstLast(double *numbers, int n)
{
    for (int i = First_MIN; i < Last_MIN; ++i)
    {
        Summ_MIN+=numbers[i];
    }
    cout<<"Сумма элементов массива между первым и последним отрицательным элементами (2)= "<<Summ_MIN<<endl;
}
void nabor_sec(double *numbers, double *numbers_sec, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (fabs(numbers[i])<1)
        {   
            numbers[i]=0;
            k+=1;
        }
    }
        for (int i = 0; i < n; i++)
        {
            if (fabs(numbers[i])>=1)
            {   
                numbers_sec[n_w]=numbers[i];
                n_w+=1;
            }
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
    cout<<"\n"<<"Количество нулей в массиве: "<<k<<"\n";
    cout<<"Отфильтрованный массив(3): "<<endl;
    for (int i = 0; i < n; ++i)
    {
        if (fabs(numbers_sec[i])<1)
            {   
                numbers_sec[i]=0;
            }
        cout<<i+1<<") "<<numbers_sec[n_w]<<" ";
        n_w+=1;
    }
}
double Randoom(int n)
{ 
    for (int i = 0; i < (n+20); ++i)
    {
        value = (value*29/7) % 1000;
        ran = sqrt(value-(value*0.22));
        kran = round((17.7-ran)*100)/100;
    }
    return kran;
}
