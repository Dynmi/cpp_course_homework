#include <bits/stdc++.h>
#include "PrimeNumber.h"

int main()
{
    PrimeNumber pn;
    int a,b;
    scanf("%d %d",&a,&b);
    pn.get_primes(a,b);
    pn.show();
    return 0;
}