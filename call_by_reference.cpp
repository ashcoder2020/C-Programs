
#include <iostream>

using namespace std;

int add(int &a,int &b){
    cout<<&a<<endl;
    cout<<&b<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    return a+b;
}

int main()
{
    int num1,num2,result;
    cout<<"Enter num1 and num2 : ";
    cin>>num1>>num2;
    result = add(num1,num2);
    cout<<"Addition  " <<result;

    return 0;
}
