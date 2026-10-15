#include <iostream>
#include <ctime>
#include <cmath>
unsigned value = unsigned(time(nullptr));
double kran, ran, Prod_pol,y,Sum_fr_MI,a,b;
int j, First_otr, Minim, n_w ;
using namespace std;
void  nabor(double *numbers, int n)
{
    double Get_random(int);
for (int i = 0; i < n; ++i)
    {
    numbers[i]=Get_random(n);
        }
}
void ABS_Min(double *numbers, int n)//процедура для 1-го задания, думаю тут все понятно
{Prod_pol=1;
    for (int i = 1; i < n; ++i)//Путем сравнения iТого эемента массива с [Minim]элементом массива присваивает индекс наименьшего элемента массива переменной Minim
    {
        if (fabs(numbers[i])<fabs(numbers[Minim]))
        {
            Minim=i;
        }
    }
    cout<<"\n"<<"Минимальный по модулю элемент массива (1)= "<<Minim<<") "<<numbers[Minim]<<endl;
}
void Sum_from_minus(double *numbers, int n)
{ 
    Minim=0; 
    for (int i = 0; i < n; ++i)//Путем сравнения iТого эемента массива с [Minim]элементом массива присваивает индекс наименьшего элемента массива переменной Minim
    {
        if (numbers[i]<0)
        {
            First_otr=i;
            break;
        }
    }
    for (int i = First_otr; i < n; ++i)
    {   
        Sum_fr_MI+=fabs(numbers[i]);
    }
    
    cout<<"\n"<<"Первый отрицательный элемент массива: "<<First_otr+1<<") "<<numbers[First_otr]<<endl;
    cout<<"Сумма модулей элементов после первого отрицательного элемента (2)= "<<Sum_fr_MI<<endl;
}
void nabor_sec(double *numbers, double *numbers_sec, int n)
{
    cout<<"\nВВедите диапазон удаляемых элементов от а до б: ";
    cin>>a>>b;
    for (int i = 0; i < n; i++)
    {
    if (a<b && a<=numbers[i] && numbers[i]<=b)
        {
        numbers[i]=0;
        n_w++;
        }
    if (b<=a && numbers[i]<=a && numbers[i]>=b)
        {
        numbers[i]=0;
        n_w++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (numbers[i]!=0)
        {
        numbers_sec[j]=numbers[i];
        j++;
        }
    }
    for (int i = j; i <n; i++)
    {   
        numbers_sec[i]=0.0;
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

    value = (value*29/7) % 1000;
    ran = sqrt(value-(value*0.22));
    kran = round((17.7-ran)*100)/100;

    return kran;
}
