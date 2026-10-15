#include <iostream>
#include <windows.h>
#include <cmath>
#include "Header.h"
using namespace std;
int main ()
{   SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Введите размер массива чисел: ";
    cin>>n;
    double arr[n];
    double arrBack[n];
    vvod_v_massiv(arr,arrBack, n);
    vivod_Massivov(arr,arrBack, n);
    proisvedenie(arr, n);
    summ(arr, n);
}