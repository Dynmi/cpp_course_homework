#include <bits/stdc++.h>
using namespace std;

template <class T>
class _Stack
{
public:
    vector<T> v;
    void _pop(){    v.pop_back();   }
    void _push(T a){    v.push_back(a);    }
    T get_top(){ return v.back();}
    bool is_empty(){ return (v.size()!=0)?1:0 ; }
    
};
