#include <bits/stdc++.h>

using namespace std;

bool isP(string s, int len)
{
    for(int p=0;p<len/2;p++)
    {
        if(s[p]!=s[len-1-p])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string str;
    int ans;
    cin>>str;
    int str_len = str.size();
    for(int s=0;s<str_len;s++)
    {
        for(int len = 2;s+len<str_len;len++)
        {
            if( isP(str.substr(s,len),len) )
            {
                ans = max(ans, len);
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}