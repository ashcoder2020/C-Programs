
#include <iostream>

using namespace std;

class Grandfather{
    public:
    Grandfather(){
    cout<<"Grandfather class"<<endl;
    }
};
class Father{
    public:
Father(){
  cout<<"Father class"<<endl;
}
};

class Child : public Father,public Grandfather {
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
