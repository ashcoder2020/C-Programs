
#include <iostream>

using namespace std;



void pattern(){
    
    int i,j;
    char x = 65;
    char y = 96;
    for(i=0;i<5;i++){
        cout<<x;
        y+=1;
        x+=1;
        for(j=0;j<5;j++){
            
            cout<<y;
            
        }
        cout<<"\n";
        
    }
}


int main()
{
    pattern();

    return 0;
}
