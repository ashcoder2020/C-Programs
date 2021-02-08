//heirarchical inheritance
#include <iostream>

using namespace std;

class GrandMother{
  public:
  GrandMother(){
      cout<<"Grandmother class";
  }
};


class Grandfather{
    public:
    Grandfather(){
    cout<<"Grandfather class"<<endl;
    }
};
class Father : public Grandfather,public GrandMother{
    public:
Father(){
  cout<<"Father class and grandfather and grandmother"<<endl;
}
};

class Child : public GrandMother{
    public:
    Child(){
        cout<<"Child class and grandfather"<<endl;
    }
};



int main()
{
    Father fat;
    cout<<"--------------------------"<<endl;
    Child chl;

    
    

    return 0;
}
