#include <bits/stdc++.h>

using namespace std;
#define MAXN 9999

int arr[30];
int main()
{
    string str;
    cin>>str;
    int p;
    for(p=0;p<str.size();p++)
    {
        arr[str[p]-'a']++;
    }
    for(p=0;p<str.size();p++)
    {
        if( arr[str[p]-'a'] ==1 )
        {
            cout<<str[p]<<endl;
            break;
        }
    }
    
    return 0;
}