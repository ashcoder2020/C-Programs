/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


class Abc{
    int a;
    public:
    void fun(){
        cout<<"Enter num1 :";
        cin>>a;
        cout<<a<<endl;
    }
    
    void CallObject(Abc &obj1){
        int x = 9;
        int res = x + obj1.a;
        cout<<res;
    }
      
};


int main()
{
    Abc obj1,obj2;
    obj1.fun();
    obj2.CallObject(obj1);

    return 0;
}
