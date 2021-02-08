//find even odd without class
#include <iostream>

using namespace std;


class EvenOdd{

    int n;
    public:
void CheckEvenOdd(){
     
    cout<<"Enter number to check even odd : ";
    cin>>n;
    if((n%2)==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }

}


};
int main()
{
   
    EvenOdd obj;
    obj.CheckEvenOdd();
    return 0;
}

