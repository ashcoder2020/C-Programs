

#include <iostream>

using namespace std;


//function overloading
void func(){
    cout<<"Thhis is without parameterised"<<endl;
    
}

void func(int num1)
{
    cout<<"Parameterised function called"<<endl;
}
int main()
{
    cout<<"-----------PROGRAM START-------------------"<<endl;
    //parameterised function call
    func(5);
    //without parameterise functin call
    func();

    return 0;
}
