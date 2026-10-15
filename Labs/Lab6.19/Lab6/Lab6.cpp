#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;
int t = 0, i = 0, s, size;
double number, prsv, sum, maxx, numberI;
//===================================================================================
void vvod_v_massiv(double *arr, double *arrBack, int n)
{ 
    cout << "Введите размер массива:= "; cin >> n; s = n;
    for (i; i < n; i++) 
        {
          s--;
          cout << "Введите значение в массив:= ";
          cin >> number;
          arr[i] = number;
         arrBack[s] = number;
        }
    cout << "Обычный порядок элементов массива:" << endl;
}
//=================================================================================
void vivod_Massivov(double *arr, double *arrBack, int n)
{
    for (i = 0; i < n; i++)
        {
        cout << arr[i] << " ; ";
        }
    cout << endl << "Обратный порядок элементов массива:" << endl;
    for (i = 0; i < n; i++)
        {
        cout << arrBack[i] << " ; ";
        }
}
//=================================================================================
void proisvedenie(double *arr, int n)
{
    for (i = 0; i < n; i++)
        {
        if (arr[i] < 0) 
        {
            prsv *= arr[i];
        }
        }
    cout << endl << "Произведение отрицательных элементов массива:= " << endl << prsv << endl;
}
//=================================================================================
    void summ(double *arr, int n)
    {
    for (i = 0; i < n; i++)
        {
        if (arr[i] > maxx) maxx = arr[i];
        }
    for (i = 0; i < n; i ++)
        {
        if (arr[i] == maxx) numberI = i;
        }
    for (i = 0; i < n; i++)
        {
        if (arr[i] >= 0 && i < numberI) sum += arr[i];
        }
    cout << "Сумма положительных элементов массива до максимального значения:=" << endl << sum << endl;
    }