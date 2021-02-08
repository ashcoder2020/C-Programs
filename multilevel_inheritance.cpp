
#include <iostream>

using namespace std;

class Grandfather{
    public:
    Grandfather(){
    cout<<"Grandfather class"<<endl;
    }
};
class Father : Grandfather{
    public:
Father(){
  cout<<"Father class"<<endl;
}
};

class Child : public Father {
    public:
    Child(){
        cout<<"Child class"<<endl;
    }
};



int main()
{
    Child obj;
    

    return 0;
}
