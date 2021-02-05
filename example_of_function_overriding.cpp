

#include <iostream>

using namespace std;


//function overriding
class Over1{
    public:
    void func(){
        cout<<"This is function 1 in Over 1 "<<endl;
        
    }

};
class Over2 : public Over1
{
    public:
    void func(){
        cout<<"This is function 2 in Over 2"<<endl;
    }  
};
int main()
{
    cout<<"-----------PROGRAM START-------------------"<<endl;
    Over2 obj1;
    obj1.func();

    return 0;
}
