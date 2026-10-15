#include <iostream>
#include <windows.h>
#include "Neww.h"
using namespace std;
int main ()
{  
    int n;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Введите размер массива чисел: ";
    cin>>n;
    double* numbers=new double [n];
    double* numbers_sec = new double[n];
    nabor(numbers,n);
    Output_nums(numbers,n);
    sum_nechet(numbers,n);
    First_Last_minus(numbers,n);
    Summ_FirstLast(numbers,n);
    nabor_sec(numbers,numbers_sec,n);
    Output_nums_sec(numbers_sec,n);
    system("pause");
}