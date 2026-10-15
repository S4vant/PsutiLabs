#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main ()
{   int str[10],str1;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    cout<<"\n";
    for(int i=0;i<10;i++)
    {
        cout<<" ";
        cin>>str[i];
    }

    cout<<"\n";
    for(int i=0;i<10;i++)
    {
        if (str[i]==1)
        {
            cout<<" ["<<i<<"] ";
        }
    }
    
}
 