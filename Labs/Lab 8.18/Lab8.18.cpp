#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main ()
{   int count,BL;
    bool flag=true;
    string str;
    const string simbol = "-";
    const string simbol1 = "_";
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Ведите строку(из буквы применять только латинские): "<<endl;
    getline(cin,str);
    if (str[0]==false) {cout<<"Вы a)Ввели не то или не так б)Вы ничего не ввели"<<endl; flag=false;}
    if (flag)
    {
    count=str.length();
        for(int i=0;i<count;i++)
    {
        if (str[i]==simbol[0]) str[i]=simbol1[0];
    }
cout<<"Преобразованая строка: "<<endl<<str;
    }
}