#include <iostream> 
#include <cmath>
#include <windows.h>//эта библиотека нужна для создания окон но мне она нужна для строчек 10 и 11, они подключают кодировку unicode8
//В ней есть киррилица которая у меня нормально не отображается
#include <iomanip>//Эта библиотека нужна для округления
using namespace std; 

int main() 
{   double x,y,d,t,k;
    int i,n;
    SetConsoleOutputCP(CP_UTF8);//эти две строчки замени на setlocale если нужно
    SetConsoleCP(CP_UTF8);
    cout<<"Введите целочисленное n: ";
    cin>>n;
    cout<<"Введите число с плавающей точкой x: ";
    cin>>x;
    t=1;
    k=t;
    y=sin(x);
    d=y/t;
    i=1;
    while ( i<n)//по условию было обязательно выполнять через цикл while
        {  
            y=sin(y);
            t+=2;
            k+=t;
            d+=y/k;
            i++;
        }
cout<<"\nрезультат при n = "<<n<<" и x = "<< x <<" равен d: "<< setprecision(4) <<fixed<<d<<endl;//вывод
system("pause");
}
