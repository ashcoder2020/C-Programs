
#include <iostream>

using namespace std;


class Abc{
  public:
  void fun(){
      cout<<"Abc class fun"<<endl;
  }
};
class Def:public Abc{
    public:
    void fun(){
        cout<<"Def class fun"<<endl;
    }
    
};



int main()
{
    Def obj;
    obj.fun();

    return 0;
}
