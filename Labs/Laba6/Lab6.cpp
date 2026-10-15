#include <iostream>
#include <windows.h>
#include "Lab.h"
using namespace std;
int main ()
{   SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Введите размер массива чисел: ";
    cin>>n;
    double numbers[n];
    double numbers_sec[n];
    nabor(numbers,n);
    Output_nums(numbers,n);
    Min_number(numbers,n);
    First_Last_minus(numbers,n);
    Summ_FirstLast(numbers,n);
    nabor_sec(numbers,numbers_sec,n);
    Output_nums_sec(numbers_sec,n);
    system("pause");
}