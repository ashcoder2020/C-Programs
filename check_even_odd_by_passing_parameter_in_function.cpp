//find even odd without class
#include <iostream>

using namespace std;


class EvenOdd{

   
    public:
void CheckEvenOdd(int n){
     
    
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
   int n;
   cout<<"Enter number to check even odd : ";
    cin>>n;
    EvenOdd obj;
    obj.CheckEvenOdd(n);
    return 0;
}

