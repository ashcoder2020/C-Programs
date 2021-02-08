
#include <iostream>

using namespace std;

int Fun(int a,int b){
    cout<<"Function with parameter and return type"<<endl;
    return a + b;
}


int main()
{
    int x;
    x = Fun(10,22);
    cout<<x;
    return 0;
}
