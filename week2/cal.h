#include <iostream>
using namespace std;

class ca
{
    public:
        float sum(float a, float b);
        float minus(float a,float b);
        float substract(float a, float b);
        float product(float a, float b);
};

float ca::sum(float a, float b)
{
    return a+b;
}

float ca::minus(float a,float b)
{
    return a-b;
}

float ca::product(float a, float b)
{
    return a*b;
}

float ca::substract(float a, float b)
{
    try{
        if(b == 0)
        {
            throw 0;
        }
        else
        {
            return a/b;
        }
        
    }
    catch(int e)
    {
        cout << "Error! Divisor can't be zero!" << endl;
    }
}