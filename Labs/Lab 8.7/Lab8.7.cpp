#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main ()
{  int count,count_ind=0,max_str;
bool flag=false;
    string str;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Ведите строку(применять только латинские буквы): ";
    getline(cin,str);
    cout<<str<<"\n";
const string letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int* indexes=new int[str.length()+1];
        for(int i=0;i<=str.length();i++)
    {
        flag=false;
        for(int j=0;j<letters.length();j++)
        {
            if(str[i]==letters[j])
            {
                flag=true;
                count++;
                break;
            }
        }
        if (i==str.length()) flag=false ;
        if(flag==false&&count!=0)
        {
            indexes[count_ind]=i-count;//индекс начала подстроки
            indexes[count_ind+1]=count;//колличество символов в подстроке
            indexes[count_ind+2]=i;//конечный индекс подстроки
            count_ind+=3;
            count=0;
        }
    }
    cout<<"Количество подстрок: "<<count_ind/3<<"\n";
    max_str=1;
    for(int i=4;i<count_ind;i+=3)
    {
        if (indexes[i]>indexes[max_str])
        {
            max_str=i;
        }
    }
    cout<<"Максимальная подстрока: "<<str.substr(indexes[max_str-1],indexes[max_str]) << "  "<< indexes[max_str]<<" "<<indexes[max_str-1]<<" "<<indexes[max_str+1];
  
    //system("pause");
}