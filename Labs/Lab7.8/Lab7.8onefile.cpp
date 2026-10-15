
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
double Summ_otr_abs=0,k;
bool flag;
#include <windows.h>
using namespace std;
int main ()

{   double Summ_otr_abs=0,k;
    bool flag;
    int col,row,n,times=1,move=10;
    void Nabor_First(int**,int,int);
    void Output_nums(int**,int,int);
    void Sort_matrix(int**,int,int);
    void First_sec_minus(int**,int,int);
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
    for (int i = 0; i < col+1; i++)
	{
		delete[]array1[i]; // Удаляем каждый элемент
	}
    delete[] array1;
    system("pause");
}
void  Nabor_First(int **array1, int col, int row)
{
    srand (time(NULL));
for (int i = 0; i < col; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
        array1[i][j]=time(NULL)/rand()%20-10;
        }
    }
    for (int i = 0; i < col; ++i)
    {
        for (int j = 0; j < row; ++j)
        {
            if (array1[i][j] % 2 == 0 && array1[i][j]<0)//изменить с "четных" на "неченые" по заданию, сделал четные просто для более удобной проверки
            {
                Summ_otr_abs+=abs(array1[i][j]);
            }
        }
    array1[i][row]=Summ_otr_abs;
    Summ_otr_abs=0;
    }
}
void Output_nums(int **array1, int col, int row)
{
    cout << "Элементы матрицы "<< col<<" на "<<row<<": "<< endl;
    for (int j = 0; j < row; ++j)
    {
        cout<<"\n";
    for (int i = 0; i < col; ++i)
    {
    cout<<setw(4)<<array1[i][j]<<" ";
    k+=array1[i][j];
    }
    }
    cout<<"\n"<<"Сумма элементов массива = "<<k;
    cout<< "\n"<<"Характеристики соответствующих столбцов:"<<endl;
    for (int i =0; i<col; i++)
    {
        cout<<setw(4)<<array1[i][row]<<" ";
    }
    cout<<endl<<endl;
}
void Sort_matrix(int **array1, int col, int row)
{
    for (int l = 0; l < col; ++l)
    {
        for (int i = 0; i < col; ++i)
        {
        if (array1[i+1][row]<array1[i][row])
            {
            for (int j = 0; j <= row; ++j)
                {
                array1[col][j]=array1[i][j];
                array1[i][j]=array1[i+1][j];
                array1[i+1][j]=array1[col][j];
                }
            }
        }
    }
}
void First_sec_minus(int **array1, int col, int row)
{   int n=-1;
 int* ind = new int[col];
    cout<<"Столбцы с отрицательными элементами: "<<endl;
    for (int i = 0; i < col; ++i)
    {
       for (int j = 0; j < row; ++j)
        {
        if (array1[i][j]<0) 
            {
            flag = true;
            }
        k+=array1[i][j];
        }
        if (flag)
        {
            n++; ind[n]=i;
        }
        flag = false;
        array1[i][row]=k;
        k=0;
    }
    for (int j = 0; j < row; ++j)
    {
    for (int i = 0; i < n+1; ++i)
    {
        cout<<setw(4)<<array1[ind[i]][j]<<" "; 
    }
    cout<<endl;
    }
    delete[] ind;
}