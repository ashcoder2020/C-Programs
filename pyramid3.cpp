#include <iostream>
using namespace std;

int main()
{
   int i,j,k,s=7,n,nn; 

for (int i=0;i<5;i++)
{
   for (int k=0;k<s;k++)
{
   cout<<" ";
}
n=i*2-1;
for (int j=0;j<2*i-1;j++)
{
    nn=n;
   cout<<nn;
   n--;

  
}
   s--;
   cout<<endl;
}
return 0;
}
