#include <iostream>//Перед сдачей комментарии удалить
#include <cmath>
double Summ_Nechet,Summ_MIN=0,y,k;
int First_MIN, Last_MIN, n_w;
using namespace std;
void  Nabor_First(double *numbers, int n)//Все функции типа void не возвращают никакого значения а потому являются не функциями а процедурами
{//эта процедура нужна для набора новых значений в массив
cout << "Введите элементы массива"<< endl;
for (int i = 0; i < n; ++i)
    {
    cout << i+1<<") " ;
    cin >> numbers[i];//набор решил сделать с клавиатуры, так проше обьяснить чем "рандом"
    }
}
void sum_nechet(double *numbers, int n)
{
    for (int i = 0; i < n; ++i)
    {
    if ((i+1)%2>0)//Если индекс массива при делении на 2 имеет остаток значит что это нечетное значение 
        {
            Summ_Nechet+=numbers[i];// Приплюсовываем нечетные значения массива к Данной переменной
        }
    }
    cout<<"\n"<<"Сумма нечетных элементов массива (1)= "<<Summ_Nechet<<endl;//Соответственно вывод
}
void First_Last_minus(double *numbers, int n)
{   
    cout<<"Отрицательные элементы массива: "<<endl;
    for (int i = 0; i < n; ++i)
    {
        if (numbers[i]<0)
        {
            cout<<i+1<<") "<<numbers[i]<<" ";//просто для дизайна выводим все нечетные элементы
            Last_MIN=i;
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (numbers[i]<0)
        {
            First_MIN=i;
            break;
        }
    }
    cout<<"\n"<<"Первый отрицательный элемент массива: "<<First_MIN+1<<") "<<numbers[First_MIN];
    cout<<"\n"<<"Последний отрицательный элемент массива: "<<Last_MIN+1<<") "<<numbers[Last_MIN]<<endl;
}
void Summ_FirstLast(double *numbers, int n)
{
    for (int i = First_MIN+1; i < Last_MIN; ++i)
    {
        Summ_MIN+=numbers[i];//Само условие поиска значений между первым минусом и последним прописано в цикле
    }//соответственно если минус один или первый и последний расположены рядом в массиве то и между ними не будет значений значит выведется 0
    cout<<"Сумма элементов массива между первым и последним отрицательным элементами (2)= "<<Summ_MIN<<endl;
}
void nabor_sec(double *numbers, double *numbers_sec, int n)
{//Набор второго массива, нжного для 3-го задания с фильтрацией
    for (int i = 0; i < n; i++)
    {
    numbers_sec[i]=0;//Присваиваем всем значениям вторго массива значения 0, что бы потом незаполненые значения не выводили значения типа undefined (это типа e+310 e-112)
    }
        for (int i = 0; i < n; i++)
        {
            if (fabs(numbers[i])>=1)
            {   
                numbers_sec[n_w]=numbers[i];//заполняем 2-ой массив с начала значениямя модуль которых больше 1, конец массива уже заполнен
                n_w+=1;
            }
        }
}
void Output_nums(double *numbers, int n)
{
    for (int i = 0; i < n; ++i)
    {   
    cout<<i+1<<")"<<numbers[i]<<" ";//Вывод первого массива
    }
}
void Output_nums_sec(double *numbers_sec,int n)
{  
    cout<<"\n"<<"Количество нулей в массиве: "<<n-n_w<<"\n";
    cout<<"Отфильтрованный массив(3): "<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<i+1<<") "<<numbers_sec[i]<<" ";//Вывод второго массива
        
    }
}