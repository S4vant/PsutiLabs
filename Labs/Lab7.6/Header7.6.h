#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>//Библиотека для подключения времени, нужна для реализации рандома
int Count_Otr_rows;
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
{ Count_Otr_rows=0;
cout<<"\n Cтроки содеражащие отрицательные элементы:"<<endl;
   for (int j =0;j<row;j++)
   {    int Count=0;
        for (int i =0;i<col;i++)
        {   
            Count+=array1[i][j];
            if (array1[i][j]<0)
            {
            flag=true;
            }
        }
        if (flag==true) 
        {
            Count_Otr_rows++;
            cout<<setw(4)<<" "<<j+1<<") "<<Count;
            flag=false;
        }
        Count=0;
        
    }
    if (Count_Otr_rows==0) cout<<"\n Строк с отрицательными элементами в матрице нет";
    else cout<<"\n Количество строк с отрицательными элементами в матрице: "<<Count_Otr_rows;
}
void Second_quest(int **array1,int col,int row)
{   int itaya=0;
double flag_shtok;
 int* dop_array = new int[col];
    cout<<endl<<"Оседлая точка: "<<endl;
    for (int j = 0; j < row; ++j)
    {
       for (int i = 1; i < col; ++i)
        {
        if (array1[i][j]<array1[itaya][j]) 
            {
                itaya=i;
            }
        }
        flag_shtok=array1[itaya][j];
        for (int k=0; k<row; k++)
        {
            if (array1[itaya][j]<array1[itaya][k])
            {
                flag_shtok = array1[itaya][k];
            }
        }
        if (array1[itaya][j]==flag_shtok){
            flag=true;
            cout<<"["<<itaya<<"]"<<"["<<j<<"]:"<<array1[itaya][j]<<" ";
        }
    }
    if (!flag) cout<<"Матрица не имеет оседлой точки \n";
    delete[] dop_array;
}