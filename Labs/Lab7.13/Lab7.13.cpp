
#include <iostream>
#include <windows.h>//библиотека для создания оконных приложений
#include <cmath>
#include <iomanip>
#include <ctime>//Библиотека для подключения времени, нужна для реализации рандома
using namespace std;
bool flag;
int main ()
{
    void Array_Nabor(int**,int,int);//Обьявление процедур которые и выполняют задания, их названия и отображают то что они делают
    void Output_arr(int**,int,int);
    void Array_shift(int**,int,int);
    int col, row,Count_Null_colums;//Обьявление переменных
    double k;
    SetConsoleOutputCP(CP_UTF8);//подключение киррилицы в компилятор который ее не поддерживает
    SetConsoleCP(CP_UTF8);
    
    cout<<"Дано: Лабораторная работа 7 вар 13. Задание: Выполнить сдвиг вправо или вниз по желанию на произвольное значение"<<endl;
    cout<<"Введите кол-во столбцов: ";
    cin>>col;
    cout<<"Введите кол-во строк: ";
    cin>>row;
    int** array1 = new int* [col+1];//создаем массив указателей на указатели, двойной знак * обозначает создание указателя на указатель
    for (int j = 0; j < col+2; ++j)
    {
        array1[j] = new int[row+1];//Здесь мы уже и обьявляем в памяти место под каждый элемент в столбце
    }
    //Здесь мы уже и вызываем ранее обьявленые процедуры, которые описываются ниже в программе
    Array_Nabor(array1,col,row);//Набор новой матрицы
    Output_arr(array1,col,row);//вывод получившейся матрицы
    Array_shift(array1,col,row);//Выполнение задания с k  
    Output_arr(array1,col,row);//вывод получившейся матрицы
}
void  Array_Nabor(int **array1,int col,int row)
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
void Output_arr(int **array1,int col,int row)//Банальная процедура вывода
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
void Array_shift(int **array1,int col,int row)//Основная функция выполняющая сдвиг. Тут же находится выбор сдвига вниз или вправо
{ 
int choice=0;
int n, real_n;
cout<<"\n Выбирете режим: 1-вниз; 2-вправо; (вводить только латинские цифры)"<<endl;
cin>>choice;
switch (choice)
{
    case 1:
    {
        cout<<"Введите размер сдвига: ";
        cin>>n;
        real_n = n%row;
        cout<<"Cдвиг будет выполнен на: "<<real_n<<" вниз"<<endl;
        
        for (int k=0;k<real_n;k++)
        {
            for(int j = row-1; j>0;j--)
            {
                for(int i = 0; i<col;i++)
                {
                    array1[i][row+j%2]=array1[i][j];
                    array1[i][j]=array1[i][(j+1)%row];
                    array1[i][(j+1)%row]=array1[i][row+j%2];
                }
            }
        }
        break;
    }
    case 2:
    {
        cout<<"Введите размер сдвига: ";
        cin>>n;
        real_n = n%col;

        cout<<"Cдвиг будет выполнен на: "<<real_n<<" вправо"<<endl;
        
        for (int k=0;k<real_n+col;k++)
        {
            for(int i = col-1; i>0;i--)
            {
                for(int j =0; j<row;j++)
                {
                    array1[col+i%2][j]=array1[i][j];
                    array1[i][j]=array1[(i+1)%col][j];
                    array1[(i+1)%col][j]=array1[col+i%2][j];
                    
                }
            }
        }
        break;
    }
    default:
    {
        cout<<"Вы ввели некоректное значение, сдвига матрицы не произошло"<<endl;
        return;
    }
}
}
