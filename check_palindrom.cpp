

#include <iostream>

using namespace std;


class CheckPalindrom{
    int num,rev=0,rem,numcopy;
    public:
    void Inputs(){
        cout<<"Enter number to chek palindrom or not : ";
        cin>>num;
        numcopy = num;
        
    }
    int Revers(){
    while(num!=0){
        rem = num%10;
        rev = (rev*10)+rem;
        num = num/10;
    }
    return rev;
    }
    void chekPal(){
        if(numcopy == rev){
            cout<<"Number is Palindrom";
        }
        else{
            cout<<"number is not palindrom";
        }
    }
    
};



int main()
{
    int res;
    cout<<"\n------PROGRAM START-----------";
    CheckPalindrom obj;
    obj.Inputs();
    obj.Revers();
    obj.chekPal();
    
    return 0;
}
