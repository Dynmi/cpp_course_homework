#include <bits/stdc++.h>
#include "module.h"
using namespace std;


int main()
{
    _Stack<string> st_s;
    _Stack<int>    st_i;
    int n;
    cout<<"测试string stack:"<<endl;
    cin>>n;
    string str;
    for(int p=0;p<n;p++){
        cin>>str;
        st_s._push(str);
    }
    for(int p=0;p<n;p++){
        cout<< "当前top为"<< st_s.get_top() ;
        cout<<"----->>>已弹出栈顶元素"<<endl;
        st_s._pop();
    }
    cout<<"---------------------"<<endl;
    cout<<"测试int stack:"<<endl;
    cin>>n;
    int i;
    for(int p=0;p<n;p++){
        cin>>i;
        st_i._push(i);
    }
    for(int p=0;p<n;p++){
        cout<< "当前top为"<< st_i.get_top() ;
        cout<<"----->>>已弹出栈顶元素"<<endl;
    }

    return 0;
}