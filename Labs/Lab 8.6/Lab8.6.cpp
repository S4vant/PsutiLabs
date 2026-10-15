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
const string true_nums = "1234567890";
    int* array_ind_substr=new int[str.length()+1];
        for(int i=0;i<str.length();i++)
    {
        flag=false;
        for(int j=0;j<true_nums.length();j++)
        {
            if(str[i]==true_nums[j])
            {
                flag=true;
                count++;
                break;
            }
        }
        if (i==str.length()-1) flag=false;
        if(flag==false&&count!=0)
        {
            array_ind_substr[count_ind]=i-count;//индекс начала подстроки
            array_ind_substr[count_ind+1]=count;//колличество символов в подстроке
            array_ind_substr[count_ind+2]=i-1;//конечный индекс подстроки
            count_ind+=3;
            count=0;
        }
    }
    cout<<"Количество подстрок: "<<count_ind/3<<"\n";
    max_str=1;
    for(int i=4;i<count_ind;i+=3)
    {
        if (array_ind_substr[i]>array_ind_substr[max_str])
        {
            max_str=i;
        }
    }
    cout<<"Максимальная подстрока: "<<str.substr(array_ind_substr[max_str-1],array_ind_substr[max_str]) <<endl;
    cout<<"Колличество элементов в подстроке: "<< array_ind_substr[max_str]<<" Индексы в строке: ("<<array_ind_substr[max_str-1]<<" - "<<array_ind_substr[max_str+1]<<")"<<endl;
  
    //system("pause");
}