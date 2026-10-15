#include <iostream>//Перед сдачей комментарии удалить
#include <cmath>
double Summ_Nechet,Summ_MIN=0,y,k;
int First_MIN,minim, Sec_MIN, n_w;
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
void Min_elem(double *numbers, int n)
{
    minim=0;
    for (int i = 0; i < n; ++i)
    {
    if (numbers[i]<numbers[minim])//каждую итерацию сравниваем новое значение массива с предыдущим минимальным, так пройдя весь массив найдем самый минимальный элемент
        {
            minim=i;
        }
    }
    cout<<"\n"<<"минимальный элемент массива (1)= "<<minim+1 <<") "<<numbers[minim]<<endl;//Соответственно вывод
}
void First_sec_minus(double *numbers, int n)
{   First_MIN=-1;// так как такое значение индекс никогда не получит при выполнении задания то можно его использовать как индикатор наличия нулей
    Sec_MIN=-1;//тоесть если в конце после фильтрации эти значения останутся такими же то значит минусов в массиве нет
    cout<<"Отрицательные элементы массива: "<<endl;
    for (int i = 0; i < n; ++i)
    {
        if (numbers[i]<0)
        {
            cout<<i+1<<") "<<numbers[i]<<" ";//просто для дизайна выводим все нечетные элементы
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
    for (int i = First_MIN+1; i < n; ++i)
        {
            if (numbers[i]<0)
            {
                Sec_MIN=i;
                break;
            }
        }
}
void Summ_FirstLast(double *numbers, int n)
{
    if (First_MIN==-1)
    {
        cout<<"\n"<<"Отрицательных элементов в массиве нет"<<endl;
    }
    else if (First_MIN!=-1 && Sec_MIN==-1)
    {
        cout<<"\n"<<"В массиве только один отрицательный элемент"<<endl;
    }
    else if (First_MIN+1==Sec_MIN)
    {
        cout<<"\n"<<"Между первым и вторым отрицательными элементами нет значений"<<endl;
    }
    else
    {
    cout<<"\n"<<"Первый отрицательный элемент массива: "<<First_MIN+1<<") "<<numbers[First_MIN];
    cout<<"\n"<<"Второй отрицательный элемент массива: "<<Sec_MIN+1<<") "<<numbers[Sec_MIN]<<endl;
    for (int i = First_MIN+1; i < Sec_MIN; ++i)
    {
        Summ_MIN+=numbers[i];//Само условие поиска значений между первым минусом и вторым прописано в цикле
    }//соответственно если минус один или первый и последний расположены рядом в массиве то и между ними не будет значений значит выведется 0
    cout<<"Сумма элементов массива между первым и вторым отрицательным элементами (2)= "<<Summ_MIN<<endl;
    }
}
void nabor_sec(double *numbers, double *numbers_sec, int n)
{//Набор второго массива, нжного для 3-го задания с фильтрацией
        for (int i = 0; i < n; i++)
        {
            if (fabs(numbers[i])<1)
            {   
                numbers_sec[n_w]=numbers[i];//заполняем 2-ой массив с начала значениямя модуль которых меньше 1
                n_w+=1;
            }
        }
    for (int i = 0; i < n; i++)
        {
            if (fabs(numbers[i])>=1)
            {   
                numbers_sec[n_w]=numbers[i];//продолжаем заполнять массив элементами модуль которых больше 1
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
    cout<<"Отфильтрованный массив(3): "<<endl;
    for (int i = 0; i < n; ++i)
    {
        cout<<i+1<<") "<<numbers_sec[i]<<" ";//Вывод второго массива
        
    }
}