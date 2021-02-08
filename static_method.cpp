
#include <iostream>

using namespace std;



class Abc{
    int a;
    public:
    static void Printa(){
        cout<<"Static function"<<endl;
    }
};

int main()
{
    Abc obj;
    obj.Printa();

    return 0;
}
