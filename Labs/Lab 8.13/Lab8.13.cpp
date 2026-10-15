#include <iostream>
#include <windows.h>//Опять же эта библиотека нужна для вывода кириллица в командной строке
#include <string>
using namespace std;
int main ()
{  int count,count_ind=0,max_str;
bool flag=false;
    string str;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout<<"Ведите строку(буквы применять только латинские): ";
    getline(cin,str);
    cout<<str<<"\n";
const string letters = "abcdefghijklmnopqrstuvwxyz";//здесь я объявляю 2 алфавита с нижним и верхним регисторм
const string letters_up = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int i=0;i<str.length();i++)
    {
        flag=false;
        for(int j=0;j<letters.length();j++)//Проххожу по каждому элементу строки нижних регистров
        {
            if(str[i]==letters[j])/*если попадаю то уменьшаю значение этого элемента на 32, чтобы получить верхний регистр(так работает кодировка: разница между верхним и нижним регистром ровно 32 элемента)*/
            {
                str[i]-=32;
                flag=true;
                break;
            }
        }
        if (!flag){
        for(int j=0;j<letters_up.length();j++)
        {
            if(str[i]==letters_up[j])
            {
                str[i]+=32;
                break;
            }    
        }
        }
    }
    cout<<"строка: "<<str;
}