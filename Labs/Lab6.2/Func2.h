#include <iostream>
#include <cmath>
using namespace std;
double compi = 1;
void Add(double* m, int n)
{
    cout << "Заполните массив: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") элемент: ";
        cin >> m[i];
    }
    cout << endl;
}
void Out(double* m, int n)
{
    cout << "Массив: ";
    for (int i = 0; i < n; ++i)
    {
        cout << m[i] << " ";
    }
    cout << endl;
}
void Summ(double* m, int n)
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
void comp(double* m, int n)
{
    int maxI = 0, minI = 0;
    double min_abs = abs(m[0]);
    double max_abs = abs(m[0]);
    for (int i = 1; i < n; i++)
    {
        if (abs(m[i]) <= abs(m[minI]))
        {
            minI = i;
        }
        if (abs(m[i]) >= abs(m[maxI]))
        {
            maxI = i;
        }
    }
    if (maxI < minI)
    {
         double comp = 1;
         for (int i = maxI + 1; i < minI; i++)
         {
            compi *= m[i];
         }
    }
         if (maxI > minI)
        {
            for (int i = minI + 1; i < maxI ; i++)
            {
                compi *= m[i];
            }
        }
    cout << "Произведение чисел между максимальным по модулю и минимальным по модулю элементами " << compi << endl;
}
void Preo(double* m, int n)
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
