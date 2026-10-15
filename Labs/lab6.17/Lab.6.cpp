#include <windows.h>
#include "Lab.6.h"
using namespace std;
int main ()
{   int n;
    SetConsoleOutputCP(CP_UTF8);// для онлайн компилятора удалить вместе с библиотекой windows.h
    SetConsoleCP(CP_UTF8);
    cout<<"Введите размер массива чисел: ";
    cin>>n;
    double *nums=new double[n];//Объявляем динамический массив размера n
    double *nums_sec= new double[n];//Объявляем второй динамический массив размера n
    Nabor_First(nums,n);
    Output_f_nums(nums,n);
    Kol_under_C(nums,n);
    Sum_int_after_lmin(nums,n);
    Sec_array(nums,nums_sec,n);
    Output_s_nums(nums_sec,n);
    system("pause");
}