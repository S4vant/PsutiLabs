#include <windows.h>
#include "Functions1.h"
using namespace std;
int main ()
{   int n;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Введите размер массива чисел: ";
    cin>>n;
    double* numbers=new double [n];
    double* numbers_sec = new double[n];//явное объявление динамического массива, для того что бы выделить память в куче(heap)
    nabor(numbers,n);                    //Куча - неструктурированая ячейка памяти для обновления массива
    Output_nums(numbers,n);
    ABS_Min(numbers,n);
    Sum_from_minus(numbers,n);
    nabor_sec(numbers,numbers_sec,n);
    Output_nums_sec(numbers_sec,n);
    system("pause");
}