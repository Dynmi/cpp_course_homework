#include <bits/stdc++.h>


template<class T>
class mylist{
public:
    list<T> lis;
    void insert_at_top(T a);
    void r_trave();
    void erase_at(int a);
    void sort_ele(){ lis.sort(); };
    int  find_ele(T a);
    void rm_duplic();
    void destroy();
};

template<class T>
void mylist<class T>::insert_at_top(T a)
{
    lis.push_front(a);
}

template<class T>
void mylist<class T>::erase_at(int a)
{
    auto it = lis.begin();
    advance(it, a);
    lis.erase(it);
}

template<class T>
int mylist<class T>::find_ele(T a)
{
    auto it = lis.begin();
    int p=0;
    while(*it!=a)
    {
        it++;
        p++;
    }
    if(it==lis.end()){
        return -1;
    }else{
        return p;
    }
}

template<class T>
void mylist<class T>::destroy()
{
    lis.clear();
    delete lis;
}

template<class T>
void mylist<class T>::r_trave()
{
    auto it = lis.end();
    while((--it)!=lis.begin())
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

template<class T>
void mylist<class T>::rm_duplic()
{
    lis.erase( unique( lis.begin(), lis.end() ), lis.end());
}