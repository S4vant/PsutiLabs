#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>//Библиотека для подключения времени, нужна для реализации рандома
double k;
int Count_Null_colums;
bool flag;
using namespace std;
void  Nabor_First(int **array1,int col,int row)
{   int move;
    cout << "Заполнить массив вручную? 1)да остальное нет"<<endl;
    cin>>move;
    switch (move)
    case 1:
    {
        cout << "Заполнить матрицу вручную: "<<endl;
    for (int j = 0; j < row; ++j)
        {
            for (int i = 0; i < col; ++i)
            {
            cout<<"array1["<<i<<"]["<<j<<"]=";
            cin>>array1[i][j];
            }
        }
        break;
        default:
        cout << "Заполнить матрицу случайными числами";
        srand (time(NULL));//включение рандома в функции rand()
    for (int j = 0; j < row; ++j)
        {
            for (int i = 0; i < col; ++i)
            {
            array1[i][j]=time(NULL)/rand()%20-10;// time(NULL) возвращает нам время прошедшее с начала работы программы, но постоянно обновляется
            }
        }
    break;
    }
}
void Output_nums(int **array1,int col,int row)
{
    cout << "\n Элементы матрицы "<<col<<" X "<<row<<": "<< endl;
    for (int j = 0; j < row; ++j)
    {
        cout<<"\n";
    for (int i = 0; i < col; ++i)
    {
    cout<<setw(4)<<array1[i][j]<<" ";
    }
    }
    cout<<"\n";
}
void First_quest(int **array1,int col,int row)
{ Count_Null_colums=0;
cout<<"\n Индексы столбцов содеражащие нулевые элементы:"<<endl;
   for (int i =0;i<col;i++)
   {
        for (int j =0;j<row;j++)
        {
            if (array1[i][j]==0)
            {
            flag=true;
            Count_Null_colums++;
            }
        }
        if (flag==true) 
        {
            cout<<setw(4)<<" "<<i;
            flag=false;
        }
        
    }
    if (Count_Null_colums==0) cout<<"\n Столбцов с нулевыми элементами в матрице нет";
    else cout<<"\n Количество нулевых элементов в матрице: "<<Count_Null_colums;
}
void Second_quest(int **array1,int col,int row)
{   int n=0;
int length_pov=0;
    for (int j = 0; j < row; ++j)
    {
        array1[col][j]=0;
        length_pov=0;
        flag=false;
       for (int i = 1; i < col; ++i)
        {
        if (array1[i][j] == array1[i-1][j]) 
            {
                flag=true;

            }
        else
            {
                flag=false;
            }
        if (flag) {length_pov++; array1[col][j]=length_pov;}
        else {length_pov=0;}
        }
    }
    for (int j=1;j<row;j++)
    {
        if (array1[col][j-1]<array1[col][j])
        {
            n=j;
        }
    }
    if (array1[col][n]<1) cout<<"\n Нет строк с неоднократно повторяющимися элементами"<<endl;
    else{
        cout<<"\nCтрока с наибольшим колличеством повторяющихся элементов под индексом: "<<n<< " "<< array1[col][n] <<endl;
        }
}