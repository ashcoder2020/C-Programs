#include <iostream>
using namespace std;

int main()
{
   int i,j,k,s=7; 
   char ch = 'A';

for (int i=0;i<5;i++)
{
   for (int k=0;k<s;k++)
{
   cout<<" ";
}
for (int j=0;j<2*i-1;j++)
{
   cout<<ch;
   ch+=1;
}
ch=65;
   s--;
   cout<<endl;
}
return 0;
}
