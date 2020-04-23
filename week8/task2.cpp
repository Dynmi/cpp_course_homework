#include <bits/stdc++.h>

class IShape
{
public:
    virtual void area(){};
};

class IAction
{
public:
    virtual void run(){};
};

class Bird:public IShape,public IAction
{
public:
    void area(){ std::printf("我用了接口IShape\n");}
    void run(){ std::printf("我用了接口IAction\n");}
};


int main()
{
    Bird bird;
    bird.area();
    bird.run();
}