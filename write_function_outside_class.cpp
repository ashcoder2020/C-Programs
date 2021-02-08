
#include <iostream>

using namespace std;

class Abc
{
    public:
    void fun();
};


void Abc :: fun()
{
    cout<<"outside class function";
}


int main()
{
    Abc obj;
    obj.fun();


}
