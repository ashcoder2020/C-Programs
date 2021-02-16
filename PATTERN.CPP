/*
A b c D e
1 2 3 4 5
A b c D e
1 2 3 4 5
*/

#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main(){
 clrscr();
 int row =4,clm=5;
 char A=65,a=97;

 int num,n=1,one,two;
clrscr();
cout<<"Enter how many rows you want to print:";
cin>>row;
cout<<"Enter how many colums you want to print:";
cin>>clm;


 for(int i=0;i<row;i++){
  for(int j=0;j<clm;j++){
  if((i%2)!=0){
   cout<<j+1;
  }
  else{
	int f = j+1;
	if(f==1){
	cout<<A;
	a+=1;
	A+=1;
	}
	else{

	for(int k=2;k<5;k++){
		if(((f+1)%k)==0){
			one = 1;
			break;
		}
		else{
		  one = 0;
		}
	}
	if(one == 1){
	 cout<<a;
	 a+=1;
	 A+=1;
	}
	else{
	 cout<<A;
	 a+=1;
	 A+=1;
	}
	 }

  /*    if((j%2)==0){
	   cout<<A;
	   A+=1;
	   a+=1;
	   n+=1;
	}

	else{
	   cout<<a;
	   a+=1;
	   A+=1;
	   n+=1;
}
*/
}
}
	a = 97;
	A=65;
  cout<<endl;
 }
getch();
}