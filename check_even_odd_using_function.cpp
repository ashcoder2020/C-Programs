//find even odd without class
#include <iostream>

using namespace std;




void CheckEvenOdd(){
     int n;
    cout<<"Enter number to check even odd : ";
    cin>>n;
    if((n%2)==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }

}


int main()
{
   
    CheckEvenOdd();
    return 0;
}

