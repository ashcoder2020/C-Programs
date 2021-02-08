
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"How many number you want to store : ";
    cin>>n;
    int *a{ new int[n]{} };
    cout<<"allocate";
    for(int i=0;i<n;i++){
        cout<<"hi"<<i;
    }
    

    return 0;
}
