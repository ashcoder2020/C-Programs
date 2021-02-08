
#include <iostream>

using namespace std;

void Fun(int a,int b){
    cout<<"Function with parameter"<<endl;
    int c = a+b;
    cout<<"Addition = "<<c;
}


int main()
{
    Fun(10,12);

    return 0;
}
