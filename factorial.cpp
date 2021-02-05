

#include <iostream>

using namespace std;


class Factorial{
    int num,fact=1;
    public:
    void Inputs(){
        cout<<"Enter number to check factorial : ";
        cin>>num;
        
    }
    int Operation(){
        for(int i=1;i<=num;i++){
            fact = fact*i;
        }
        return fact;
    }
    
};



int main()
{
    int res;
    cout<<"\n------PROGRAM START-----------";
    Factorial obj;
    obj.Inputs();
    res = obj.Operation();
    cout<<"Factorial = "<<res;
    
    return 0;
}
