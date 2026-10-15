#include <iostream>
#include <ctime>
#include <cmath>
unsigned value = unsigned(time(nullptr));
double kran, ran, Summ_otriz,Prod_MI_MA,y;
int k, Maxim, Minim, n_w;
using namespace std;
void  nabor(double *numbers, int n)
{
    double Randoom(int);
for (int i = 0; i < n; ++i)
    {
    numbers[i]=Randoom(n);
    }
}
void sum_Otriz(double *numbers, int n)
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
    for (int i = 1; i < n; ++i)
    {
        if (numbers[i]>numbers[Maxim])
        {
            Maxim=i;
        }
    }
    for (int i = 1; i < n; ++i)
    {
        if (numbers[i]<numbers[Minim])
        {
            Minim=i;
        }
    }
    cout<<"\n"<<"Минимальный элемент массива: "<<Minim+1<<") "<<numbers[Minim];
    cout<<"\n"<<"Максимальный элемент массива: "<<Maxim+1<<") "<<numbers[Maxim]<<endl;
}
void Prod_MinMax(double *numbers, int n)
{   Prod_MI_MA=1;
    k=Maxim-Minim;
    if (k<-1) 
    {
        for (int i = Maxim; i < Minim; ++i)
        {
            Prod_MI_MA*=numbers[i];
        }
    }
    if (k>1) 
    {
        for (int i = Minim; i < Maxim; ++i)
        {
            Prod_MI_MA*=numbers[i];
        }
    }
    cout<<"Произведение между максимальным и минимальным элементом массива (2)= "<<Prod_MI_MA<<endl;
}
void nabor_sec(double *numbers, double *numbers_sec, int n)
{
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
