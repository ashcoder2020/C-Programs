
#include <iostream>

using namespace std;


class Abc{
    public:
    Abc(){
        cout<<"constructor"<<endl;
    }
    
    ~Abc(){
        cout<<"destructor"<<endl;
    }
};


int main()
{
    Abc obj;

    return 0;
}
