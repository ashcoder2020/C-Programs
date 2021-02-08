//heirarchical inheritance
#include <iostream>

using namespace std;

class Grandfather{
    public:
    Grandfather(){
    cout<<"Grandfather class"<<endl;
    }
};
class Father : public Grandfather{
    public:
Father(){
  cout<<"Father class and grandfather"<<endl;
}
};

class Child : public Grandfather {
    public:
    Child(){
        cout<<"Child class and grandfather"<<endl;
    }
};



int main()
{
    Child obj;
    Father obj1;
    
    

    return 0;
}
