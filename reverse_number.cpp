

#include <iostream>

using namespace std;


class FindReverse{
    int num,rev=0,rem;
    public:
    void Inputs(){
        cout<<"Enter number to reverse : ";
        cin>>num;
        
    }
    int Revers(){
    while(num!=0){
        rem = num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    return rev;
    }
    
};



int main()
{
    int res;
    cout<<"\n------PROGRAM START-----------";
    FindReverse obj;
    obj.Inputs();
    res = obj.Revers();
    cout<<"Reverse = "<<res;
    
    return 0;
}
