

#include <iostream>

using namespace std;

class Abc{
    
    int a,b;
    public:
    Abc(){
        cout<<"without parameterise constructor call"<<endl;
    }
    Abc(int x,int y){
        a = x;
        b=y;
        cout<<"Additon = "<<a+b<<endl;
    }
      
};

int main()
{
    cout<<"------------addition------------------"<<endl;
    //Abc obj;
    Abc obj(5,10);
    
    
    return 0;
}
