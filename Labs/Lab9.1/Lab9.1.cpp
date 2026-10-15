
#include <iostream>
#include <windows.h>//библиотека для создания оконных приложений
#include <cmath>
#include <iomanip>
#include <ctime>//Библиотека для подключения времени, нужна для реализации рандома
#include <string>//Библиотека для работы с строками
#define kol 4
using namespace std;
bool flag;
void Output_arr(struct GROUP *p);
struct GROUP
{   // Declare PERSON struct type
    string name;   // Declare member variablestypes
    double number_group;
    double* marks =new double[5] ;
    double sr_mark;
} ;

int main ()
{
    int colvo_horosh, ind;
    double srmark;
    SetConsoleOutputCP(CP_UTF8);//подключение киррилицы в компилятор который ее не поддерживает
    SetConsoleCP(CP_UTF8);
    /*setlocale(LC_ALL, "");*/
    cout<<"Дано: Лаба 9.1 1)С клав задать 10 значений для структуры STUDENT"<<endl;
    GROUP *p = new GROUP[kol+1];//создаем указатель на структуру
    for (int i = 0; i < kol; ++i)
    {
        cout<<"\nВведите Фамилию и инициалы студента:";
        cin>>p[i].name;
        cout<<"Введите его номер группы: ";
        cin>>p[i].number_group;
        cout<<"Введите его оценки за семестр: 1)Математика 2)Физика 3)Информатика 4)Иностранный язык 5)Программирование";
        for (int j = 0; j < 5; ++j) cin>>p[i].marks[j];  
        for (int j = 0; j < 5; ++j) srmark+=p[i].marks[j];
        p[i].sr_mark=srmark/5;
        srmark=0;
    }
    for (int k; k<kol;k++)
    {
        for (int i = 1; i<kol;i++)
        {
            if (p[i].number_group<p[i-1].number_group)
            {
                p[kol]=p[i-1];
                p[i-1]=p[i];
                p[i]=p[kol];
            }
        }
    }
    Output_arr(p);
    cout<<"\n";
    colvo_horosh=0;
    flag=false;
    for (int i = 0; i < kol; ++i)
    {
        if (p[i].sr_mark>=4)
        {
            flag=true;
            ind=i;
            colvo_horosh++;
        }
    
    if(flag){
    cout<<setw(3)<<"\n Студент: ";
    
    cout<<setw(3)<<p[ind].name<<" ";
    
    cout<<setw(3)<<"\n Номер группы: ";

    cout<<setw(3)<<p[ind].number_group<<" ";
    
    cout<<setw(3)<<"\n Оценки студента: ";
    for(int j=0; j<5;j++)
        {
        cout<<p[ind].marks[j]<<" ";
        }
    cout<<setw(3)<<"\n Cредний балл студента: "<< p[i].sr_mark<<" ";
    flag=false;
    }
    }
    if (colvo_horosh==0) cout<<"\n Все студенты троечники"<<endl;
    else cout<<"\n Количество студентов, которые учились на 4: "<<colvo_horosh<<endl;
    /*delete[] p;*/
    return 0;
}

void Output_arr(struct GROUP *p)//Банальная процедура вывода
{
    for (int i = 0; i < kol ; ++i)
    {
    cout<<setw(3)<<"\n Студент: ";

    cout<<p[i].name<<" ";
    
    cout<<setw(3)<<"\n Номер группы: ";

    cout<<setw(3)<<p[i].number_group<<" ";
    
    cout<<setw(3)<<"\n Оценки студента: ";
    for(int j=0; j<5;j++)
        {
        cout<<setw(2)<<p[i].marks[j]<<" ";
        }
    cout<<setw(3)<<"\n Cредний балл студента: "<< p[i].sr_mark<<" ";
    }
}