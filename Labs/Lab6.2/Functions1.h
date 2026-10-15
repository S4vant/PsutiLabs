//Это заголовочный файл 
//в онлайн копиляторе просто добавь его в папку (там будет такая кнопка "include file")
#include <iostream>
#include <cmath>
using namespace std;
double compi = 1;
void Add(double* m, int n)
{
    cout << "Заполните массив: " << endl;//заполнение массива
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") элемент: ";
        cin >> m[i];
    }
    cout << endl;
}
void Out(double* m, int n)//Вывод массива
{
    cout << "Массив: ";
    for (int i = 0; i < n; ++i)
    {
        cout << m[i] << " ";
    }
    cout << endl;
}
void Summ(double* m, int n)//Задание №1
{
    double summ = 0;
    for (int i = 0; i < n; i++)
    {
        if (m[i] > 0)
        {
            summ += m[i];
        }
    }
    cout << "Сумма положительных элементов массива: " << summ << endl;
}
void comp(double* m, int n)//Задание №2
{
    int maxI = 0, minI = 0;
    for (int i = 1; i < n; i++)
    {
        if (abs(m[i]) < abs(m[minI]))
        {
            minI = i;
        }
        if (abs(m[i]) > abs(m[maxI]))
        {
            maxI = i;
        }
    }
    if (n == 1){cout<<"В массиве только 1 число"<<endl;}
    if (maxI < minI-1)
    {
        for (int i = maxI + 1; i < minI; i++)
        {
           compi *= m[i];
        }
        cout << "Произведение чисел между максимальным по модулю и минимальным по модулю элементами " << compi << endl;
    }
    else if (maxI > minI+1)
    {
        for (int i = minI + 1; i < maxI ; i++)
        {
            compi *= m[i];
        }
        cout << "Произведение чисел между максимальным по модулю и минимальным по модулю элементами " << compi << endl;
    }
    else if ((maxI == minI+1) || (maxI == minI-1) )
    {
        cout<<"Между наибольшим и наименьшим значениями по модулю нет других значений "<<endl;
    }
}
void Preo(double* m, int n)//Фильтрация массива или (преобразование)
{
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (m[j] < m[j + 1])
            {
                double temp = m[j];
                m[j] = m[j + 1];
                m[j + 1] = temp;
            }
        }
    }
    cout << "Отсортированный массив ";
    for (int i = 0; i < n; ++i)
    {
        cout << m[i] << " ";
    }
    cout << endl;
}