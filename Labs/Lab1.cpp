#include <iostream> 
#include <cmath>
#include <windows.h>
using namespace std; 
int main() 
{ 
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    double x;
    cout<<"Введите число: ";
    cin>>x;
    double y=sqrt(sin(exp(x)))/sqrt(tan(1+pow(x,2)));
    cout << "y = "<<y<<endl;
}