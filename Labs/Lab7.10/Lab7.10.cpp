#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <iomanip>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    srand(time(0));
    int m, n, move;
    cout<<"Введите размер квадратной матрицы: ";
    cin>>n;
    m=n;
    int** arr = new int* [n];//создаем массив указателей на указатели
    for (int j = 0; j < n+1; ++j)
    {
        arr[j] = new int[m];
    }
 cout << "Заполнить массив вручную? 1)да остальное нет"<<endl;
    cin>>move;
    switch (move)
    case 1:
    {
        cout << "Заполнить матрицу вручную: "<<endl;
    for (int j = 0; j < m; ++j)
        {
            for (int i = 0; i < n; ++i)
            {
            cout<<"array1["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
            }
        }
        break;
        default:
        cout << "Заполнить матрицу случайными числами";
        srand (time(NULL));//включение рандома в функции rand()
    for (int j = 0; j < m; ++j)
        {
            for (int i = 0; i < n; ++i)
            {
            arr[i][j]=time(NULL)/rand()%20-10;// time(NULL) возвращает нам время прошедшее с начала работы программы, но постоянно обновляется
            }
        }
    break;
    }

    cout << "Массив: " << endl;
    for (int j = 0; j < m; ++j)
    {
        cout<<"\n";
    for (int i = 0; i < n; ++i)
        {
        cout<<setw(4)<<arr[i][j]<<" ";
        }
    }
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < n; j++) {
            sum += abs(arr[i][j]);
        }
    }
    cout <<endl<< "Сумма модулей элементов матрицы выше главной диагонали:" << sum << endl;
    int count = 0;
    cout<<"Локальные минимумы:"<<endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) 
        {
            if (i-1>=0 && i+1<n && j-1>=0 && j+1<m)
            {
            if (arr[i][j] < arr[i - 1][j] && arr[i][j] < arr[i + 1][j] &&
                arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i][j + 1])
                {
                    count++;
                    cout<<"["<<i<<"]"<<"["<<j<<"]: "<<arr[i][j]<<" ";
                }

            }
            else if (i-1<0 || i+1>=n && j-1>=0 && j+1<m)
            {
            if (arr[i][j] < arr[abs(i - 1)][j] &&
                arr[i][j] < arr[i][j - 1] && arr[i][j] < arr[i][j + 1])
                {
                    count++;
                    cout<<"["<<i<<"]"<<"["<<j<<"]: "<<arr[i][j]<<" ";
                }
            }
            else if (i-1>=0 && i+1<n && j-1<0 || j+1>=m)
            {
            if (arr[i][j] < arr[i - 1][j] && arr[i][j] < arr[i + 1][j] &&
                arr[i][j] < arr[i][abs(j - 1)])
                {
                    count++;
                    cout<<"["<<i<<"]"<<"["<<j<<"]: "<<arr[i][j]<<" ";
                }
            }
            else if (i-1<0 && i+1>=n && j-1<0 && j+1>=m)
            {
            if (arr[i][j] < arr[abs(i - 1)][j] && arr[i][j] < arr[i][abs(j - 1)])
                {
                    count++;
                    cout<<"["<<i<<"]"<<"["<<j<<"]: "<<arr[i][j]<<" ";
                }
            }
        }      
        }
        cout << "Количество локальных минимумов в матрице:" << count << endl;
        return 0;
    }