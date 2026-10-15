
#include <iostream>
#include <windows.h>
#include "Header7.2.h"
using namespace std;
int main ()
{  int col,row,n,times=1,move=10;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Введите колличество строк: ";
    cin>>row;
    cout<<"введите колличество столбцов: ";
    cin>>col;
    int** yarray1 = new int* [col+1];
    for (int j = 0; j < col+1; ++j)
    {
        yarray1[j] = new int[row+1];
    }
    Nabor_First(yarray1,col,row);
    Output_nums(yarray1,col,row);
    Sort_matrix(yarray1,col,row);
    Output_nums(yarray1,col,row);
    /*First_sec_minus(yarray1,col,row);*/
    while (times != 0)
    {
        cout<<"Выберете действие: 1)вывести массив; 2)Набрать новый массив; 3)Отсортировать массив в соответствии с ростом характеристик;" << endl ;
        cout<< "0) Завершить работу "<<endl;
        cin>>move;
        switch (move)
        {
        case 1:
        {
            
            Output_nums(yarray1,col,row);
            break;
        }
        case 2:
        {
            cout<<"Введите колличество строк: ";
            cin>>row;
            cout<<"введите колличество столбцов: ";
            cin>>col;
            Nabor_First(yarray1,col,row);
            break;
        }
        case 3:
        {
            Sort_matrix(yarray1,col,row);
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
		delete[]yarray1[i]; // Удаляем каждый элемент
	}
    delete[] yarray1;
    system("pause");
}