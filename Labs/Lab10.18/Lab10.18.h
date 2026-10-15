#include <iostream>
#include <windows.h>//библиотека для создания оконных приложений
#include <cmath>
#include <iomanip>
using namespace std;
struct PRICE
{   // Declare PERSON struct type
    string name;   // Declare member variablestypes
    string name_store;
    double cost;
} ;
int col, ind;
double k;
bool flag;
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
    cout<<endl;
}
void Input_arr(struct PRICE *p)//Банальная процедура ввода
{
    for (int i = 0; i < 8; ++i)
    {
    cout<<" Введите имя товара: ";
    cin>>p[i].name;
    cout<<" Введите название магазина: ";
    cin>>p[i].name_store;
    cout<<" Введите цену: ";
    cin>>p[i].cost;
    }
    cout<<endl;
}
void Sort_arr(struct PRICE *p)//Банальная процедура сортировки
{
    for (int k=0; k<8;k++)
    {
        for (int i = 0; i<8;i++)
        {
            if (p[i].name.compare(p[i+1].name)>0)
            {
                p[8]=p[i];
                p[i]=p[i+1];
                p[i+1]=p[8];
            }
        }
    }
}
void Struct_search(struct PRICE *p)//Банальная процедура поиска
{
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
    cout <<endl;
}