#include <iostream>
#include <windows.h>//библиотека для создания оконных приложений
#include <iomanip>
#include <string>//Библиотека для работы с строками
#define numb 4 //константа ограницивающая колличество записей о работниках
using namespace std;
struct WORKER
{   // Declare PERSON struct type
    string name;
    string job_title;   // Declare member variablestypes
    double year;
    double exp;
} ;
void Output_arr(struct WORKER *p)
{
    for (int i = 0; i < numb ; ++i)
    {
    cout<<setw(3)<<"\n Имя: ";

    cout<<p[i].name<<" ";
    
    cout<<setw(3)<<"\n Должность: ";

    cout<<p[i].job_title<<" ";
    
    cout<<setw(3)<<"\n Год поступления на работу и стаж ";

    cout<<setw(2)<<p[i].year<<" год. Стаж:"<<p[i].exp<<"  ";
    cout<<endl;
    cout<<endl;
    }
}
void Input_arr(struct WORKER *p)
{ 
    string name1,name2;
    for (int i = 0; i < numb; ++i)
    {
        cout<<"\nВведите Фамилию и инициалы Без пробелов:";
        cin>>p[i].name;
        cout<<"\nВведите должность работника:";
        cin>>p[i].job_title;
        cout<<"\nВведите год поступления на работу"<<endl;
        cin>>p[i].year;
        p[i].exp=2024-p[i].year;
        if(p[i].exp<0||p[i].exp>60) {
            cout<<"\nНекорректный стаж работы"<<endl;
            i--;
        }
    }
    for (int j; j<numb;j++)
    {
        for (int i = 1; i<numb;i++)
        {name1=p[i-1].name;
            name2=p[i].name;
            if (name1.compare(name2)>0)
            {
                p[numb]=p[i-1];
                p[i-1]=p[i];
                p[i]=p[numb];
            }
        }
    }
    
}

void Need_exp(struct WORKER *p)
{
    int triyes=0,ind;
    double time_of_work;
    bool flag=false;
    cout<<"Необходимый стаж работы: ";
    cin>>time_of_work;
    for (int i = 0; i < numb; ++i)
    {
        if (p[i].exp>time_of_work)
        {
            flag=true;
            ind=i;
            triyes++;
        }
    
    if(flag){
     cout<<setw(3)<<"\n Должность: "<<p[i].job_title;

    cout<<"\n Фамилия инициалы: "<<p[i].name<<" ";
    
    cout<<setw(3)<<"\n год поступления на работу и стаж ";

    cout<<setw(2)<<p[ind].year<<" "<<endl;
    flag=false;
    }
    }
    if (triyes==0) cout<<"\n Работников с таким стажем нет"<<endl;
    else cout<<"\n Колличество интересующих нас записей: "<<triyes<<endl;
}