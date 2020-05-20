#include <bits/stdc++.h>

class CFraction
{
public:
    int a , b;
    CFraction(){};
    void set_value(int _a,int _b);
    bool operator <(const CFraction& d);
    void get_value();
};

void CFraction::set_value(int _a,int _b)
{
    a = _a;
    b = _b;
}

bool CFraction::operator<(const CFraction& d)
{
    if( a * d.b < b * d.a)
    {
        return 1;
    }
    return 0;
}

void CFraction::get_value()
{
    printf("%d / %d\n",a,b);
}

template<class T>
T MaxElement(T arr[],int len)
{
    int p=0;
    T _max= arr[p];
    while(p < len-1)
    {
        p++;
        if( _max<arr[p]){
            _max = arr[p];
        }
    }
    return _max;
}