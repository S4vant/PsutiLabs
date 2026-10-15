#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main ()
{   int count,BL;
    bool flag=false;
    string str,str_Bl,str_Sl;
    const string Big_letters = "QWERTYUIOPASDFGHJKLZXCVBNM";
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Ведите строку(из буквы применять только латинские): "<<endl;
    getline(cin,str);
    count=str.length();
    int* array_ind_BL=new int[str.length()+1];
        for(int i=0;i<count;i++)
    {
        flag=false;
        for(int j=0;j<Big_letters.length();j++)
        {
            if(str[i]==Big_letters[j])
            {
                str_Bl+=str[i];
                BL++;
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            str_Sl+=str[i];
        }
    }
str.replace(0,BL-1,str_Bl);
str.replace(BL,count,str_Sl);
cout<<"Преобразованая строка: "<<endl<<str;
}