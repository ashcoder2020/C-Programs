//parameterised constructor
#include <iostream>

using namespace std;


class Abc{
    public:
    int a;
    Abc(int b){
        a = b;
    }
    void geta(){
        cout<<"a = "<<a;
    }
};



int main()
{
    Abc obj(50);
    obj.geta();

    return 0;
}
