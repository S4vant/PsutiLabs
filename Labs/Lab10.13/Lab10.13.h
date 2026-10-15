#include <iostream>
#include <windows.h>//библиотека для создания оконных приложений
#include <cmath>
#include <iomanip>
#include <string>//Библиотека для работы с строками
#define numb 4

using namespace std;
struct NOTE
{   // Declare PERSON struct type
    string name;
    string sec_name;   // Declare member variablestypes
    string Phone_number;
    double* date_of_birth =new double[3] ;
    double sr_mark;
} ;
void arr_sort(struct NOTE *p)
{string secname1,secname2;
    for (int j; j<numb;j++)
    {
        for (int i = 1; i<numb;i++)
        {secname1=p[i-1].sec_name;
            secname2=p[i].sec_name;
            if (secname2.compare(secname1)<0)
            {
                p[numb]=p[i-1];
                p[i-1]=p[i];
                p[i]=p[numb];
            }
        }
    }
}
void Output_arr(struct NOTE *p)
{
    
    for (int i = 0; i < numb ; ++i)
    {
    cout<<setw(3)<<"\n Фамилия Имя: ";

    cout<<p[i].sec_name<<" "<<p[i].name<<" ";
    
    cout<<setw(3)<<"\n Номер телефона: ";

    cout<<setw(3)<<p[i].Phone_number<<" ";
    
    cout<<setw(3)<<"\n Дата рождения: День месяц год ";
    for(int j=0; j<3;j++)
        {
        cout<<setw(2)<<p[i].date_of_birth[j]<<" ";
        }
    }
    cout<<endl;
}
void Input_arr(struct NOTE *p){
for (int i = 0; i < numb; ++i)
    {
        cout<<"\nВведите Имя:";
        cin>>p[i].name;
        cout<<"\nВведите Фамилию:";
        cin>>p[i].sec_name;
        cout<<endl<<"номер телефона: ";
        cin>>p[i].Phone_number;
        cout<<"\nВведите его дату рождения: 1)День 2)Месяц 3)Год"<<endl;
        for (int j = 0; j < 3; ++j) cin>>p[i].date_of_birth[j];
    }
    
    }
void arr_search(struct NOTE *p)
{
    int triyes=0,dayofbirth,ind;
    bool flag=false;
    cout<<"\nВведите номер месяца рождения: ";
    cin>>dayofbirth;
    for (int i = 0; i < numb; ++i)
    {
        if (p[i].date_of_birth[1]==dayofbirth)
        {
            flag=true;
            ind=i;
            triyes++;
        }
    
    if(flag){
     cout<<setw(3)<<"\n Фамилия Имя: ";

    cout<<p[i].sec_name<<" "<<p[i].name<<" ";
    
    cout<<setw(3)<<"\n Номер телефона: ";

    cout<<setw(3)<<p[ind].Phone_number<<" ";
    
    cout<<setw(3)<<"\n Дата рождения: День месяц год ";
    for(int j=0; j<3;j++)
        {
        cout<<setw(2)<<p[ind].date_of_birth[j]<<" ";
        }
    flag=false;
    }
    }
    if (triyes==0) cout<<"\n Людей с этим месяцем рождения в записях нет"<<endl;
    else cout<<"\n Колличество интересующих нас записей: "<<triyes<<endl;
}