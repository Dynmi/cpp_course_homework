#include <bits/stdc++.h>
using namespace std;

short spe_mon[7]={1,3,5,7,8,10,12};
bool pd_a(short s)
{
    for(int p=0;p<6;p++)
    {
        if(s==spe_mon[p])
        {
            return 1;
        }
    }

    return 0;
}

class Date
{
    private:
        short year;
        short mon;
        short day;
    public:
        Date(){};
        ~Date(){};
        void read_date();
        void print_tomorrow();
        friend Date operator++(Date &d,int);
};

Date operator++(Date &d,int)
{
    (d.day)++;
    if(d.mon==2 && d.day>29)
    {
        d.day=1;
        d.mon=3;
        return d;
    }
    if( (d.day) >31 )
    {
        (d.mon)++;
        d.day=1;
    }
    if(d.mon==13)
    {
        d.mon=1;
        d.year++;
    }

    return d;
}

void Date::read_date()
{
    cout<<"请输入年,月,日: ";
    cin >> year >> mon >> day;
    if( !(year>0&&mon>0&&mon<13&&day>0&&day<32) )
    {
        cout<<"ERORR! 输入日期不合法!"<<endl;
        delete this;
        return;
    }

    printf("今天是: %d-%d-%d ",year,mon,day);
}

void Date::print_tomorrow()
{
    (*this) ++;
    printf("明天是: %d-%d-%d\n",year,mon,day);
}