//parameterised constructor
#include <iostream>

using namespace std;


class Abc{
    public:
    int a;
    Abc(int b){
        a = b;
    }
    
    Abc(Abc &obj1){
        a=obj1.a;
    }
    void geta(){
        cout<<"a = "<<a;
    }
};



int main()
{
    Abc obj(50);
    obj.geta();
    Abc obj1 = obj;
    obj1.geta();
    
  

    return 0;
}
