#include <iostream>

using namespace std;

int main()
{
    int bs;
    cout<<"Enter Basic Salary : ";
    cin>>bs;
    float hra=(bs*60)/100;
    float ta=(bs*40)/100;
    float da=(bs*30)/100;
    float gs=bs+hra+ta+da;
    cout<<"\nHouse rent allowance :"<<hra;
    cout<<"\nTravelling allowance :"<<ta;
    cout<<"\ndearness allowance :"<<da;
    cout<<"\nGross salary :"<<gs;
    return 0;
}
