
#include <iostream>

using namespace std;

class Grandfather{
    public:
    Grandfather(){
    cout<<"Grandfather class"<<endl;
    }
};
class Father :public Grandfather{
    public:
Father(){
  cout<<"Father class"<<endl;
}
};



int main()
{
    Father obj;
    

    return 0;
}
