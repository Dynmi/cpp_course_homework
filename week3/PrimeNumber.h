#include <bits/stdc++.h>

class PrimeNumber
{
    private:
        int  num_begin,num_end;
        int  arr[2001];
        short vis[2005];
        int  cnt;
    public:
        PrimeNumber();
        ~PrimeNumber();
        void get_primes(int s,int e);
        void show();

};

PrimeNumber::PrimeNumber()
{
    memset(arr,0,sizeof(int));
    memset(vis,0,sizeof(vis));
    vis[1] = 1;
    for(int i=2;i<50;i++)
    {
        for(int j=i;i*j<2100;j++)
        {
            vis[i*j] = 1;
        }
    }
}

PrimeNumber::~PrimeNumber()
{
    memset(arr,0,sizeof(int));
    num_begin = 0;
    num_end   = 0;
    cnt       = 0;
}

void PrimeNumber::get_primes(int s,int e)
{
    if(s>=e)
    {
        printf("Error!\n");
        return;
    }
    num_begin = s;
    num_end   = e;
    cnt       = 0;
    int i = s;
    while(i<=e)
    {
        if(vis[i]==0)
        {
            arr[cnt++]=i;
        }

        i++;
    }
}

void PrimeNumber::show()
{
    printf("起点数%d 终点数%d :",num_begin,num_end);
    for(int i=0;i<cnt;i++)
    {
        printf(" %d",arr[i]);
    }
    printf(" \n");
}