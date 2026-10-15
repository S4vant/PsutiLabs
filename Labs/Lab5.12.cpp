#include "iostream"
#include "cmath"
using namespace std;

int main()
{   double d,x,y,q;
    int n;
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n; 
    int i = 1;
    while (i <= n)
    {
        d = pow((x+1), i);
        q=sqrt(q+2);
        y += d / q;
        i++;
        
    }
    cout << "y = " << y;
    return 0;
}