
#include <iostream>

using namespace std;

int main()
{
   int i;
   cout<<"Enter value of i :";
   cin>>i;
   if(i==0){
       cout<<"zero";
   }
    else if(i==1){
        cout<<"One";
    }
     else if(i==2){
        cout<<"Two";
    }
     else if(i==3){
        cout<<"Three";
    }
    else{
        cout<<"Number is less than zero or greater than three";
    }
    return 0;
}
