#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main ()
{   int count,BL;
    bool flag=true;
    string str,str_Bl,str_Sl;
    const string numbers = "0123456789";
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
        for(int j=0;j<10;j++)
        {
            if(str[i]==numbers[j])
            {
                str.erase(i,1);
                i--;
                break;
            }
        }
    }
cout<<"Преобразованая строка: "<<endl<<str;
    }
}