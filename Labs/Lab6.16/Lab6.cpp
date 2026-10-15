#include <windows.h>
#include "Functions1.h"
using namespace std;
int main ()
{   int n;
    SetConsoleOutputCP(CP_UTF8);// для онлайн компилятора удалить вместе с библиотекой windows.h
    SetConsoleCP(CP_UTF8);
    cout<<"Введите размер массива чисел: ";
    cin>>n;
    double *nums=new double[n];//Объявляем динамический массив размера n
    double *nums_sec= new double[n];//Объявляем второй динамический массив размера n
    nabor(nums,n);
    Output_nums(nums,n);
    sum_Otriz(nums,n);
    First_Last_min(nums,n);
    nabor_sec(nums,nums_sec,n);
    Output_nums_sec(nums_sec,n);
    
    system("pause");
}