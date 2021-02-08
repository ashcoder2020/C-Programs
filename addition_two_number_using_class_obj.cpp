//addition
#include <iostream>

using namespace std;


class Additon{
    public:
int PerformAddition(int a,int b){
return a+b;
}
};
int main()
{
   int a,b,x;
   cout<<"Enter value of a and b : ";
    cin>>a>>b;
    Additon obj;
    x = obj.PerformAddition(a,b);
    cout<<"Addition = "<<x;
    return 0;
}

