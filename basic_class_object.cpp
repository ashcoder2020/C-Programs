
#include <iostream>

using namespace std;

class Calculater{
    public:
    void add(int a,int b){
        cout<<"Add = "<<a+b;
    }
    void sub(int a,int b){
        cout<<"Sub = "<<a-b;
    }
    void mul(int a,int b){
        cout<<"Mul = "<<a*b;
    }
    void divs(int a,int b){
        cout<<"div = "<<a/b;
    }
   
    
};


int main()
{
    int a,b;
    a=20,b=5;
    Calculater obj;
    obj.add(a,b);
    obj.sub(a,b);
    obj.mul(a,b);
    obj.divs(a,b);
   
   
}
