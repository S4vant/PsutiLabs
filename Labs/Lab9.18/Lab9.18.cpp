
#include <iostream>
#include <windows.h>//библиотека для создания оконных приложений
#include <cmath>
#include <iomanip>
#include <ctime>//Библиотека для подключения времени, нужна для реализации рандома
using namespace std;
bool flag;
void Output_arr(struct PRICE *p);
struct PRICE
{   // Declare PERSON struct type
    string name;   // Declare member variablestypes
    string name_store;
    double cost;
} ;
int main ()
{
    int col, ind;
    double k;
    SetConsoleOutputCP(CP_UTF8);//подключение киррилицы в компилятор который ее не поддерживает
    SetConsoleCP(CP_UTF8);
    cout<<"Дано: Лаба 9.18 1)С клав задать 8 значений для структуры PRICE"<<endl;
    PRICE *p = new PRICE[9];//создаем указатель на структуру
    for (int i = 0; i < 8; ++i)
    {
        cout<<"\nВведите имя товара: ";
        cin>>p[i].name;
        cout<<"Введите название магазина: ";
        cin>>p[i].name_store;
        cout<<"Введите цену товара: ";
        cin>>p[i].cost;
    }
    for (int k; k<8;k++)
    {
        for (int i = 0; i<8;i++)
        {
            if (p[i].name.compare(p[i+1].name)<0)
            {
                p[8]=p[i];
                p[i]=p[i+1];
                p[i+1]=p[8];
            }
        }
    }
    Output_arr(p);
    cout<<"\n";
    cout<<"ВВедите название интересующего товара: ";
    cin>>p[8].name;
    for (int i = 0; i < 8; ++i)
    {
        if (p[i].name.compare(p[8].name)==0)
        {
            flag=true;
            ind=i;
            break;
        }

    }
    
    if(flag){
        cout<<"\n Имя товара: "<<setw(8);
        cout<<setw(5)<<p[ind].name<<" ";
        cout<<setw(8)<<"\n Имя магазина: ";
        cout<<setw(5)<<p[ind].name_store<<" ";
        cout<<setw(8)<<"\n Цена: ";
        cout<<setw(5)<<p[ind].cost<<" ";
    }
    else{
        cout << "Данное название продукта не найдено в списке";
    }
}
/*
//Здесь мы уже и вызываем ранее обьявленые процедуры, которые описываются ниже в программе
    Array_Nabor(array1,col,row);//Набор новой матрицы
    Output_arr(array1,col,row);//вывод получившейся матрицы
    Array_shift(array1,col,row);//Выполнение задания с k  
    Output_arr(array1,col,row);//вывод получившейся матрицы

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
}*/
void Output_arr(struct PRICE *p)//Банальная процедура вывода
{
     cout<<setw(20)<<"\n Имя товара: ";
    for (int i = 0; i < 8; ++i)
    {
        cout<<setw(5)<<p[i].name<<" ";
    }
    cout<<setw(20)<<"\n Имя магазина: ";
    for (int i = 0; i < 8; ++i)
    {
        cout<<setw(5)<<p[i].name_store<<" ";
    }
    cout<<setw(20)<<"\n Цена: ";
    for (int i = 0; i < 8; ++i)
    {
        cout<<setw(5)<<p[i].cost<<" ";
    }
}/*
void Array_shift(int **array1,int col,int row)
{ int choice=0;
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

        cout<<real_n<<endl;
        for (int k=0;k<real_n;k++)
        {
            for(int j = 0; j<row;j++)
            {
                for(int i = 0; i<col;i++)
                {
                    array1[i][row+j%2]=array1[i][(j+1)%row];
                    array1[i][(j+1)%row]=array1[i][j];
                    array1[i][(j+2)%2]=array1[i][(j+1)%row];
                    array1[i][(j+2)%row]=array1[i][row+j%2];

                }

            }
        }
        break;
    }
    case 2:
    {
        cout<<"Введите размер сдвига: ";
        cin>>n;
        real_n = n%row;

        break;
    }
    default:
    {
        cout<<"Вы ввели некоректное значение, сдвига матрицы не произошло"<<endl;
        return;
    }
}
}*/
