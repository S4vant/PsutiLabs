
#include <iostream>
#include <windows.h>
#include "Header7.8.h"
using namespace std;
int main ()
{  int col,row,n,times=1,move=10;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Введите колличество строк: ";
    cin>>row;
    cout<<"введите колличество столбцов: ";
    cin>>col;
    int** array1 = new int* [col+1];
    for (int j = 0; j < col+1; ++j)
    {
        array1[j] = new int[row+1];
    }
    Nabor_First(array1,col,row);
    Output_nums(array1,col,row);
    Sort_matrix(array1,col,row);
    Output_nums(array1,col,row);
    First_sec_minus(array1,col,row);
    while (times != 0)
    {
        cout<<"Выберете действие: 1)вывести массив; 2)Набрать новый массив; 3)Отсортировать массив по 2му заданию;" << endl << " 4) Вывести массив из 3го задания ";
        cout<< "0) Завершить работу "<<endl;
        cin>>move;
        switch (move)
        {
        case 1:
        {
            
            Output_nums(array1,col,row);
            break;
        }
        case 2:
        {
            cout<<"Введите колличество строк: ";
            cin>>row;
            cout<<"введите колличество столбцов: ";
            cin>>col;
            Nabor_First(array1,col,row);
            break;
        }
        case 3:
        {
            Sort_matrix(array1,col,row);
            break;
        }
        case 4:
        {
        First_sec_minus(array1,col,row);
        break;
        }
        case 0:
        {
            times = 0;
            break;

        }
        }
    }
    for (int i = 0; i < col+1; i++)
	{
		delete[]array1[i]; // Удаляем каждый элемент
	}
    delete[] array1;
    system("pause");
}