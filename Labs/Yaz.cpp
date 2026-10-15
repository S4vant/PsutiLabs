#include <iostream>
#include <windows.h>
#include <ctime>
#include <cmath>
using namespace std;
double ran,nran,kran,x,y,k,Summ_MIN,Summ_Nechet,w;
int j,n,i,First_MIN,Last_MIN,n_w;
unsigned value = unsigned(time(nullptr));
int main ()
{   SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double Randoom(int j);
    double numbers_sec[n];
    cout<<"Введите размер массива чисел: ";
    cin>>n;
    double numbers[n];
    for (int i = 0; i < n; ++i)
    {
    y=Randoom(n);
    numbers[i]=y;
    cout <<i+1<<") " <<numbers[i] <<" | ";
    if ((i+1)%2>0)
    {
        Summ_Nechet+=numbers[i];
    }
    // Порождаем и выводим 20 чисел, используя время UNIX как зерно.
    }
    cout<<"\n"<<"Сумма элементов массива с нечетными номерами(№1): "<<Summ_Nechet<<"\n";
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
    cout<<"\n"<<"Первое отрицательное значение: "<<numbers[First_MIN]<<" Последнее отрицательное значение: "<<numbers[Last_MIN];
    for (int i = First_MIN; i < Last_MIN; ++i)
    {
        Summ_MIN+=numbers[i];
    }
    cout<<"\n"<<"Сумма между первым и последним отрицательным значением массива(№2): "<<Summ_MIN<<"\n";
    for (int i = 0; i < n; ++i)
    {
    if (fabs(numbers[i])<1)
    {   
        numbers[i]=0;
        k+=1;
    }
    cout<<numbers[i]<<" ";
    // Порождаем и выводим 20 чисел, используя время UNIX как зерно.
    }
    for (int i = 0; i < n; ++i)
    {

        if (numbers[i]!=0)
        {
            numbers[i]=w;
            numbers_sec[n_w]=w;
            cout<<numbers[n_w]<<" ";
            n_w+=1;
         }
    }
}
double Randoom(int(j))
  { 
    for (int i = 0; i < (j+20); ++i)
    {
        value = (value*29/7 + 91) % 1000;
        ran = sqrt(value-(value*0.51));
        kran = round((14.7-ran)*100)/100;
    }
    return kran;
}
