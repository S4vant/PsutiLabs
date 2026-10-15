#include <windows.h>
#include "Laboratornaya.h"
using namespace std;
int main ()
{   int n;
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Введите размер массива чисел: ";
    cin>>n;
    double* numbers = new double [n];
    double* numbers_sec = new double[n];
    Nabor_First(numbers,n);
    Output_nums(numbers,n);
    max_num(numbers,n);
    Prod_in_null(numbers,n);   
    nabor_sec(numbers,numbers_sec,n);
    Output_nums_sec(numbers_sec,n);
    system("pause");
}