/*p p p p p
p       p
p p   p p
p
p p
p p p
*/

#include<iostream.h>
#include<conio.h>


void main(){
	int i,j;

	clrscr();
	for(i=1;i<=3;i++){
		for(j=1;j<=5;j++){
			if(i==3 &&j==3){
			 cout<<" ";
			}
		       else if((i==1) ||(j==1)||(j==5)||(i==3)){
			cout<<"p";
			}
			else{
			 cout<<" ";
			}
			}




		cout<<endl;
	}


	for(i=1;i<=3;i++){
		for(j=1;j<=i;j++){
			cout<<"p";
		}
		cout<<endl;
	}
	



getch();
}