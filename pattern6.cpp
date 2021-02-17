#include <iostream>

using namespace std;

void fun12(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void fun13(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=4;j>=i+1;j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}



int main()
{
    
    fun12();
    fun13();

    return 0;
}
