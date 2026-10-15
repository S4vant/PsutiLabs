#include "iostream"
#include "cmath"
#include "iomanip"
using namespace std;

int main()
{   double d,x,y,q;
    int n;
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n; 
    int i = 1;
    d=x;
    while (i <= n)
    {
        d = cos(d);
        q=sqrt(q+(i+1));
        y += d / q;
        i++;
    }
    cout << setprecision(4)<<fixed<<"y = " << y;
    return 0;
}