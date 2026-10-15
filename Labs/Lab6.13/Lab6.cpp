#include <windows.h>
#include "Headerforlab.h"
using namespace std;
int main ()
{   int n;
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Введите размер массива чисел: ";
    cin>>n;
    double* numbers = new double [n];
    Nabor_First(numbers,n);
    Output_nums(numbers,n);
    Kol_from_a_to_b(numbers,n);  
    Array_sort(numbers,n);
    Output_nums(numbers,n);
    system("pause");
}