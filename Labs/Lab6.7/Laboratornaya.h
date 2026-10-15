#include <iostream>
#include <ctime>
#include <cmath>
double Prod_chet,Sum_chet,y;
int k, F_null,S_null,Max;
using namespace std;
void  Nabor_First(double *numbers, int n)
{
for (int i = 0; i < n; ++i)
    {
    cout << "Введите " << i+1 << ") элемент массива: "<<endl;
    cin >> k;
    numbers[i]=k;
    }
}
void max_num(double *numbers, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (numbers[i]>numbers[Max])
        Max=numbers[i];
    }
    cout<<"\n"<<"Максимальный элемент массива (1)= "<<numbers[Max]<<endl;
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
        cout<<"\n"<<" Первый нулевой элемент массива: "<<F_null+1<<" Второй нулевой элемент массива: "<<S_null+1<<endl;
        cout<<"Произведение элементов от первого до второго нулевого элемента массива (2)= "<<Prod_chet<<endl;
    }
}
void nabor_sec(double *numbers, double *numbers_sec, int n)
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
{
    for (int i = 0; i < n; ++i)
    {   
    cout<<i+1<<")"<<numbers[i]<<" ";
    }
}
void Output_nums_sec(double *numbers_sec,int n)
{   
    cout<<"Отфильтрованный массив(3): "<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<i+1<<") "<<numbers_sec[i]<<" ";
    }
    cout<<endl;
}