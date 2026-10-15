#include <windows.h>
#include "Functions1.h"
using namespace std;
int main ()
{   int n;
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Введите размер массива чисел: ";
    cin>>n;
    double numbers[n];
    double numbers_sec[n];
    nabor(numbers,n);
    Output_nums(numbers,n);
    Prod_poloz(numbers,n);
    Sum_for_min(numbers,n);
    nabor_sec(numbers,numbers_sec,n);
    Output_nums_sec(numbers_sec,n);
    
    system("pause");
}