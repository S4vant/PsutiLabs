
#include <iostream>
#include <windows.h>//библиотека для создания оконных приложений
#include <cmath>
#include <iomanip>
#include <ctime>//Библиотека для подключения времени, нужна для реализации рандома
#include <string>//Библиотека для работы с строками
#define numb 4
using namespace std;
bool flag;
void Output_arr(struct NOTE *p);
struct NOTE
{   // Declare PERSON struct type
    string name;
    string sec_name;   // Declare member variablestypes
    string Phone_number;
    double* date_of_birth =new double[3] ;
} ;

int main ()
{
    int triyes, ind;
    double srmark,dayofbirth; 
    string secname1,secname2; 
    SetConsoleOutputCP(CP_UTF8);//подключение киррилицы в компилятор который ее не поддерживает
    SetConsoleCP(CP_UTF8);
    /*setlocale(LC_ALL, "");*/
    cout<<"Дано: 9.13 1)С клав задать 8 значений для структуры NOTE"<<endl;
    NOTE *p = new NOTE[numb+1];//создаем указатель на структуру
    for (int i = 0; i < numb; ++i)
    {
        cout<<"\nВведите Имя:";
        cin>>p[i].name;
        cout<<"\nВведите Фамилию:";
        cin>>p[i].sec_name;

        cout<<endl<<"\nего номер телефона: ";
        cin>>p[i].Phone_number;
        cout<<"\nВведите его дату рождения: 1)День 2)Месяц 3)Год"<<endl;
        for (int j = 0; j < 3; ++j) cin>>p[i].date_of_birth[j];
    }
    for (int j; j<numb;j++)
    {
        for (int i = 1; i<numb;i++)
        {secname1=p[i-1].sec_name;
            secname2=p[i].sec_name;
            if (secname1.compare(secname2)>0)
            {
                p[numb]=p[i-1];
                p[i-1]=p[i];
                p[i]=p[numb];
            }
        }
    }
    Output_arr(p);
    cout<<"\n";
    triyes=0;
    flag=false;
    cout<<"Введите номер месяца рождения: ";
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
    return 0;
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
    cout<<endl;
    }
    
}