#include<bits/stdc++.h>
#include "task.h"

int main()
{
    CFraction CF[5];
    int a,b;
    for(int p=0;p<5;p++)
    {
        std::cin>>a>>b;
        CF[p].set_value(a,b);
    }

    auto res = MaxElement(CF,5);
    res.get_value();
    return 0;
}