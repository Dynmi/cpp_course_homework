#include <bits/stdc++.h>
using namespace std;

class Person{
public:
    char* _name;
    int    _age;
    bool   _gender;
    int    _salary;
    char* _address;
    char* _phone;
    Person(char* n,int a, bool g,int s, char* add,char* p):_name(n), _age(a), _gender(g), _salary(s), _address(add), _phone(p){}
    void show();
};

void Person::show(){
    cout<<"-------------------------------"<<endl;
    printf("name: %s\n",_name);
    printf("age: %d\n",_age);
    printf("gender: %d\n",_gender);
    printf("salary: %d\n",_salary);
    printf("address: %s\n",_address);
    printf("phone: %s\n",_phone);
    cout<<"-------------------------------"<<endl;
}

class Teacher: virtual public Person{
protected:
    string _title;
public:
    Teacher(char* n,int a, bool g,int s, char* add,char* p,char* ti):Person(n,a,g,s,add,p), _title(ti){}
    void show();
};
void Teacher::show(){
    cout<<"-------------------------------"<<endl;
    printf("name: %s\n",_name);
    printf("age: %d\n",_age);
    printf("gender: %d\n",_gender);
    printf("salary: %d\n",_salary);
    printf("address: %s\n",_address);
    printf("phone: %s\n",_phone);
    cout<<"role:"<<_title<<endl;
    cout<<"-------------------------------"<<endl;
}

class Cadre: virtual public Person{
protected:
    string _role;
public:
    Cadre(char* n,int a, bool g,int s, char* add,char* p,char* ti):Person(n,a,g,s,add,p), _role(ti){}
    void show();
};
void Cadre::show(){

    cout<<"-------------------------------"<<endl;
    printf("name: %s\n",_name);
    printf("age: %d\n",_age);
    printf("gender: %d\n",_gender);
    printf("salary: %d\n",_salary);
    printf("address: %s\n",_address);
    printf("phone: %s\n",_phone);
    cout<<"role:"<<_role<<endl;
    cout<<"-------------------------------"<<endl;
}

class TeacherCadre: public Teacher,public Cadre{
};