#include<iostream.h>
#include<conio.h>

class Abc{
  public:
   int a,b,n1,n2;
  void operator +(Abc obj1){
		Abc obj2;
		obj2.set(3,5);
	   n1 = obj1.a+obj2.a;
	   n2 = obj1.b+obj2.b;

  cout<<n1<<" "<<n2;
  }
  void set(int c, int d){
   a = c;
  b = d;

  }

};



void main(){
 clrscr();
 Abc obj1,obj2,obj3;
 obj1.set(5,4);
 obj3+obj1;


getch();
}