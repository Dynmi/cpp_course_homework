#include <bits/stdc++.h>
#include "cal.h"
using namespace std;

int main()
{
    float a,b;
    char  c;
    ca    cal;
    
    cout << "Please give the formula:" << endl;
    cout <<"For example, '* 4.0 2.5' stands for '4.0 * 2.5 = 10'" << endl;
    cin  >> c >> a >> b;    
    if(c == '+')
    {
        cout << cal.sum(a,b) << endl;
    }
    if(c == '-')
    {
        cout << cal.minus(a,b) << endl;
    }
    if(c == '/')
    {
        cout << cal.substract(a,b) << endl;
    }
    if(c == '*')
    {
        cout << cal.product(a,b) << endl;
    }

    return 0;
}