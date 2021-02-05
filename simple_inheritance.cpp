

#include <iostream>

using namespace std;


//function overriding
class Over1{
    public:
    void func1(){
        cout<<"This is function 1 in Over 1 "<<endl;
        
    }

};
class Over2 : public Over1
{
    public:
    void func2(){
        cout<<"This is function 2 in Over 2"<<endl;
    }  
};
int main()
{
    cout<<"-----------Simple Inheritance-------------------"<<endl;
    Over2 obj1;
    obj1.func1();
    obj1.func2();

    return 0;
}
