
#include <windows.h>//библиотека для создания оконных приложений
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>//Библиотека для подключения времени, нужна для реализации рандома
double k;
int count_k;
bool flag;
using namespace std;
int main ()
{
    void Nabor_First(int **array1);//Набор новой матрицы
    void Output_nums(int **array1);//вывод получившейся матрицы
    void First_quest(int **array1);//Выполнение задания с k
    void Second_quest(int **array1);

    SetConsoleOutputCP(CP_UTF8);//подключение киррилицы в компилятор который ее не поддерживает
    SetConsoleCP(CP_UTF8);
    cout<<"Дано: Матрица 8х8"<<endl;
    int** array1 = new int* [8];//создаем массив указателей на указатели
    for (int j = 0; j < 8; ++j)
    {
        array1[j] = new int[8];
    }
    Nabor_First(array1);//Набор новой матрицы
    Output_nums(array1);//вывод получившейся матрицы
    First_quest(array1);//Выполнение задания с k
    Second_quest(array1);//Выполнение задания с отриц элементами в строках
    
}
void  Nabor_First(int **array1)
{   int move;
    cout << "Заполнить массив вручную? 1)да остальное нет"<<endl;
    cin>>move;
    switch (move)
    case 1:
    {
        cout << "Заполнить матрицу вручную: "<<endl;
    for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
            cout<<"array1["<<i<<"]["<<j<<"]=";
            cin>>array1[i][j];
            }
        }
        break;
        default:
        cout << "Заполнить матрицу случайными числами";
        srand (time(NULL));//включение рандома в функции rand()
    for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
            array1[i][j]=time(NULL)/rand()%20-10;// time(NULL) возвращает нам время прошедшее с начала работы программы, но постоянно обновляется
            }
        }
    break;
    }
}
void Output_nums(int **array1)
{
    cout << "\n Элементы матрицы 8x8: "<< endl;
    for (int j = 0; j < 8; ++j)
    {
        cout<<"\n";
    for (int i = 0; i < 8; ++i)
    {
    cout<<setw(4)<<array1[i][j]<<" ";
    }
    }
    cout<<"\n";
}
void First_quest(int **array1)
{   cout<<"\nВот k которые удовлетворяют заданию: "<<endl;
    for (int i = 0; i < 8; ++i)
    {   
        flag=true;
        for(int j=0;j<8;j++)
        {
            if (array1[i][j]!=array1[j][i]) flag=false;
        }
       if (true) 
       {
        count_k++;
        cout<<count_k<<") "<<i<<" ";
        flag=false;
       }
    }
    if (count_k==0) cout<<"\nнет таких k которые удовлетворяют заданию\n";
}

void Second_quest(int **array1)
{   int n=0;
double Summ_MIN;
 int* dop_array = new int[8];
    for (int j = 0; j < 8; ++j)
    {
       for (int i = 0; i < 8; ++i)
        {
        if (array1[i][j]<0) 
            {
            flag = true;
            }
        }
        if (flag==true)
        {
            dop_array[n]=j;
            n++; 
        }
        flag = false;
    }
    if (n<1) cout<<"\nв матрице нет отрицательных элементов\n";
    else{
        cout<<"\nCтроки под этими индексами содержат отрицательные элементы: \n";
    for (int j = 0; j < n; ++j)
    {
        cout<<setw(4)<<dop_array[j]<<" ";
    }
    cout<<"\n Соответственно их суммы: \n";
    for (int j = 0; j < n; ++j)
    {Summ_MIN=0;
            for (int i = 0; i < 8; ++i)
        {
            Summ_MIN+=array1[i][dop_array[j]];
        }
        cout<<setw(4)<<Summ_MIN<<" ";
    }
    }
    delete[] dop_array;
}