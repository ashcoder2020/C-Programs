
#include <iostream>

using namespace std;


class Abc{
    public:
    void operator +(){
        cout<<"done"<<endl;
    }
};



int main()
{
    cout<<"Hello World"<<endl;
    Abc obj;
    +obj;

    
    

    return 0;
}
