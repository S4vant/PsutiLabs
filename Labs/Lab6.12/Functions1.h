#include <iostream>
#include <ctime>
#include <cmath>
unsigned value = unsigned(time(nullptr));
double kran, ran, Prod_pol,y,Sum_fr_MI,a,b;
int j, First_pol, Minim, n_w,Max ;
using namespace std;
void  nabor(double *numbers, int n)
{
    double Get_random(int);
for (int i = 0; i < n; ++i)
    {
    numbers[i]=Get_random(n);
        }
}
void ABS_Max(double *numbers, int n)//процедура для 1-го задания, думаю тут все понятно
{Prod_pol=1;
    for (int i = 1; i < n; ++i)//Путем сравнения iТого эемента массива с [Minim]элементом массива присваивает индекс наименьшего элемента массива переменной Minim
    {
        if (fabs(numbers[i])>fabs(numbers[Max]))
        {
            Max=i;
        }
    }
    cout<<"\n"<<"Максимальный по модулю элемент массива (1)= "<<Max+1<<") "<<numbers[Max]<<endl;
}
void Sum_from_minus(double *numbers, int n)
{ 
    for (int i = 0; i < n; ++i)
    {
        if (numbers[i]>0)
        {
            First_pol=i;
            break;
        }
    }
    for (int i = First_pol; i < n; ++i)
    {   
        Sum_fr_MI+=numbers[i];
    }
    
    cout<<"\n"<<"Первый положительный элемент массива: "<<First_pol+1<<") "<<numbers[First_pol]<<endl;
    cout<<"Сумма элементов после первого положительного элемента (2)= "<<Sum_fr_MI<<endl;
}
void nabor_sec(double *numbers, double *numbers_sec, int n)
{
    cout<<"\n Введите диапазон элементов от а до б которые будут выводиться сначала: ";
    cin>>a>>b;
    for (int i = 0; i < n; i++)
    {
    if (a<b && a<numbers[i] && numbers[i]<b)
        {
        numbers_sec[n_w]=numbers[i];
        n_w++;
        numbers[i]=0;
        }
    if (b<=a && numbers[i]<a && numbers[i]>b)
        {
        numbers_sec[n_w]=numbers[i];
        n_w++;
        numbers[i]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (numbers[i]!=0)
        {
        numbers_sec[j+n_w]=numbers[i];
        j++;
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
{   
    cout<<"Отфильтрованный массив(3): "<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<i+1<<") "<<numbers_sec[i]<<" ";
    }
    cout<<endl;
}
double Get_random(int n)
{ //функция для получения условно рандомных значений
    for (int i = 0; i < (n+20); ++i)
    {
        value = (value*29/7) % 1000;
        ran = sqrt(value-(value*0.22));
        kran = round((17.7-ran)*100)/100;
    }
    return kran;
}
