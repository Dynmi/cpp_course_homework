#include <bits/stdc++.h>

class ComponentBase{
public:
    double length,
        width;
    ComponentBase(double l ,double w):length(l),width(w){}
    virtual void print_property() = 0;
};

class Window: virtual public ComponentBase{
public:
    double cost;
    Window(double l,double w):ComponentBase(l,w){}
    void print_property();
    void show_cost();
};

void Window::print_property(){
    printf("----------------------\n");
    printf("length:  %f\n",length);
    printf("width:   %f\n",width);
    printf("----------------------\n");
}

void Window::show_cost(){
    printf("cost: %f\n",cost);
}


class A{
    public:
        double a,b;
        A(double x,double y):a(x),b(y){}
        void set_value(double x,double y);
        void print_value();
};

void A::set_value(double x,double y)
{
    a = x;
    b = y;
}

void A::print_value()
{
    printf("----------------------\n");
    printf("a: %f\n",a);
    printf("b: %f\n",b);
    printf("----------------------\n");    
}

class C: virtual public A{
    public:
        double d;
        C(double x,double y,double z):A(x,y),d(z){}
        void set_d();
        void print_d();
};

class E:virtual public A{
    public:
        double e;
        E(double x,double y,double z):A(x,y),e(z){}
        void set_e(double x);
        void print_e();
};

void E::set_e(double x)
{
    e = x;
}

void E::print_e()
{
    printf("e: %f \n",e);
}

class G: public C,public E{
public:
    G(double x,double y,double z,double s):C(x,y,z),E(x,y,s),A(x,y){}
    void set_value(double x,double y,double z,double s);
    void print();
};

void G::set_value(double x,double y,double z,double s)
{
    a=x;
    b=y;
    d=z;
    e=s;
}

void G::print(){
    printf("----------------------\n");
    printf("a: %f\n",a);
    printf("b: %f\n",b);
    printf("d: %f\n",d);
    printf("e: %f\n",e);
    printf("----------------------\n");    
}


int main(){

    Window w(1.2,2.3);
    w.print_property();
    G g(0,0,0,0);
    g.set_value(1,2,3,4);
    g.print();
    return 0;
}