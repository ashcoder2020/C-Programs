
#include <iostream>

using namespace std;

class Abc{
  
    public:
    void printa(){
          static int a=1;           
        cout<<a<<endl;
        a+=1;
    }
};


int main()
{
    Abc obj;
    for(int i= 0;i<5;i++){
    obj.printa();
    }
    return 0;
}
