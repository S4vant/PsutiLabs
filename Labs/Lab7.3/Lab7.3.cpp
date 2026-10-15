
#include <iostream>
#include <windows.h>//библиотека для создания оконных приложений
#include <cmath>
#include <iomanip>
#include <ctime>//Библиотека для подключения времени, нужна для реализации рандома
using namespace std;
bool flag;
int main ()
{
    void Nabor_First(int**,int,int);//Обьявление процедур которые и выполняют задания, их названия и отображают то что они делают
    void Output_nums(int**,int,int);
    void First_quest(int**,int,int);
    void Second_quest(int**,int,int);
    int col, row,Count_Null_colums;
    double k;
    SetConsoleOutputCP(CP_UTF8);//подключение киррилицы в компилятор который ее не поддерживает
    SetConsoleCP(CP_UTF8);
    cout<<"Дано: Лаба 7.3 1)Колво столбцов с нулевыми элементами 2) Номер строки с самой большой последовательностью одинаковых элементов"<<endl;
    cout<<"Введите кол-во строк: ";
    cin>>row;
    cout<<"Введите кол-во столбцов: ";
    cin>>col;
    int** array1 = new int* [col];//создаем массив указателей на указатели, двойной знак * обозначает создание указателя на указатель
    for (int j = 0; j < col+1; ++j)
    {
        array1[j] = new int[row];//Здесь мы уже и обьявляем в памяти место под каждый элемент в столбце
    }
    //Здесь мы уже и вызываем ранее обьявленые процедуры, которые описываются ниже в программе
    Nabor_First(array1,col,row);//Набор новой матрицы
    Output_nums(array1,col,row);//вывод получившейся матрицы
    First_quest(array1,col,row);//Выполнение задания с k
    Second_quest(array1,col,row);//Выполнение задания с отриц элементами в строках    
}
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
void Output_nums(int **array1,int col,int row)//Банальная процедура вывода
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
{ int Count_Null_colums=0;
cout<<"\n Индексы столбцов содеражащие нулевые элементы:"<<endl;
   for (int i =0;i<col;i++)
   {
        for (int j =0;j<row;j++)
        {
            if (array1[i][j]==0)
            {
            flag=true;
            Count_Null_colums++;//Переменная для счета нулевых элементов
            }
        }
        if (flag==true) 
        {
            cout<<setw(4)<<" "<<i;//Индексы нулевых элементов
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
                flag=true;//flag - булева переменная, использую для того что бы отследить наличие повторений в строке через if (Решил использовать здесь из за того бага, только так починилось)
            }
        else
            {
                flag=false;
            }
        if (flag) {length_pov++; array1[col][j]=length_pov;}//Я изначально задал размер матрицы на еденицу больше, не 3Х3 допустим как написал, а 4Х4 для того что бы доп столбец использовать для записи длины повторений в этой строке
        else {length_pov=0;}
        }
    }
    for (int j=1;j<row;j++)
    {
        if (array1[col][j-1]<array1[col][j])//Здесь мы уже и перебираем тот "лишний столбец" для поиска максимального значения и записываем индекс этой строки в отдельную переменную
        {
            n=j;
        }
    }
    if (array1[col][n]<1) cout<<"\n Нет строк с неоднократно повторяющимися элементами"<<endl;//Проверка на отсутсвие повторений в матрице
    else{
        cout<<"\nCтрока с наибольшим колличеством повторяющихся элементов под индексом: "<<n<< " Длина повторений: "<< array1[col][n]+1 <<endl;
        }
}