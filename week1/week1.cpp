/*
    "高级语言程序设计２"
    homework for the first week
    author@HanWang 2018141461062
    2020.2.27
*/

#include <bits/stdc++.h>
using namespace std;

class employee
{
    private:
        string e_name;
        short  e_gender;   //1 for man;0 for woman 
        short  e_age;
        short  e_salary;
    public:
        employee(string name, short gender, short age, short salary);
        ~employee(){};
        void show_info();
};

employee::employee(string name, short gender=1, short age=18, short salary=3000)
{
    //　default info for a new employee: gender--man, age--18, salary--3000
    e_name   = name;
    e_age    = age;
    e_gender = gender;
    e_salary = salary;
}

void employee::show_info(void)
{
    cout<<"name: "  <<e_name<<endl;
    cout<<"age: "   <<e_age<<endl;
    cout<<"gender: ";
    if(e_gender==1)
    {
        cout<<"male";
    }
    else
    {
        cout<<"female";
    }
    cout<<endl;
    cout<<e_gender<<endl;
    cout<<"salary: "<<e_salary<<endl;
}

int main()
{
    employee e1("Steven",1,22,13000);
    e1.show_info();
    e1.~employee();
    return 0;
}
