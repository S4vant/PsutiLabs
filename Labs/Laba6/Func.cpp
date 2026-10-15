#include <iostream>

#include <ctime>
#include <cmath>
unsigned c_time = unsigned(time(nullptr));
double kran, ran, Min_num,Summ_MIN,y;
int k, First_MIN, Sec_MIN, n_w;
using namespace std;
void  nabor(double *numbers, int n)
{ 
    double Get_random_number(int);
for (int i = 0; i < n; ++i)
    {
    numbers[i]=Get_random_number(n);
    }
}
void Min_number (double *numbers, int n)
{
    Min_num=numbers[0];
    for (int i = 1; i < n; ++i)
    {
    if (Min_num>numbers[i])
        {
            Min_num=numbers[i];
        }
    }
    cout<<"\n"<<"Наименьший элемент массива (1)= "<<Min_num<<endl;
}
void First_Last_minus(double *numbers, int n)
{   
    cout<<"Отрицательные элементы массива: "<<endl;
    for (int i = 0; i < n; ++i)
    {
        if (numbers[i]<0)
        {
            First_MIN=i;
            break;
        }
    }
    for (int i = First_MIN+1; i < n; i++)
    {
        if (numbers[i]<0)
        {
            Sec_MIN=i;
            break;
        }
    }
    cout<<"\n"<<"Первый отрицательный элемент массива: "<<First_MIN+1<<") "<<numbers[First_MIN];
    cout<<"\n"<<"Второй отрицательный элемент массива: "<<Sec_MIN+1<<") "<<numbers[Sec_MIN]<<endl;
}
void Summ_FirstLast(double *numbers, int n)
{
    for (int i = First_MIN+1; i < Sec_MIN; ++i)
    {
        Summ_MIN+=numbers[i];
    }
    cout<<"Сумма элементов массива между первым и вторым отрицательным элементами (2)= "<<Summ_MIN<<endl;
}
void nabor_sec(double *numbers, double *numbers_sec, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (fabs(numbers[i])<1)
        {   
            numbers_sec[k]=numbers[i];
            k+=1;
        }
    }
        for (int i = 0; i < n; i++)
        {
            if (fabs(numbers[i])>=1)
            {   
                numbers_sec[n_w+k]=numbers[i];
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
    cout<<"\n"<<"Количество модулей меньше 1 в массиве: "<<k<<"\n";
    cout<<"Отфильтрованный массив(3): "<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<i+1<<") "<<numbers_sec[n_w]<<" ";
        n_w+=1;
    }
}
double Get_random_number(int n)
{ 
    c_time = (c_time*29/7) % 1000;
    ran = sqrt(c_time-(c_time*0.22));
    kran = round((17.7-ran)*100)/100;
    return kran;
}
