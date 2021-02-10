
#include <iostream>

using namespace std;




void fun1(){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void fun2(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


void fun3(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            cout<<j<<"";
        }
        cout<<endl;
    }
}

void fun4(){
    int i,j;
    char p = 65;
    for(i=1;i<=4;i++){
        p=65;
        for(j=1;j<=4;j++){
            cout<<p<<"";
          
        }
        cout<<endl;
    }
}




void fun5(){
    int i,j;
    char p = 65;
    for(i=1;i<=5;i++){
        p=65;
        for(j=1;j<=5;j++){
            cout<<p<<"";
            p+=1;
          
        }
        cout<<endl;
    }
}


void fun6(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=5;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}


void fun7(){
    int i,j;
    for(i=5;i>=1;i--){
        for(j=5;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



void fun8(){
    int i,j;
    char p =70;
    
    for(i=5;i>=1;i--){
        p-=1;
        for(j=5;j>=1;j--){
            cout<<p<<" ";
        }
        cout<<endl;
    }
}


void fun9(){
    int i,j;
    char p =69;
    
    for(i=5;i>=1;i--){
        p = 69;
        for(j=5;j>=1;j--){
            cout<<p<<" ";
            p-=1;
        }
        cout<<endl;
    }
}


void fun10(){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



void fun11(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


void fun12(){
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<i+1;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}



int main()
{
    fun1();
    fun2();
    fun3();
    fun4();
    fun5();
    fun6();
    fun7();
    fun8();
    fun9();
    fun10();
    fun11();
    fun12();

    return 0;
}
