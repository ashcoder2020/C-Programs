#include<iostream.h>
#include<conio.h>
#include<string.h>

class Abc{
	public:
	char name[20];
	char fullname[40];
	void operator +(Abc &obj2){
		cout<<name<<" " <<obj2.name;
	}


	void set(char *fname){
	strcpy(name,fname);
	}

};


void main(){
	 clrscr();

	 Abc obj1,obj2;
	 obj1.set("Ashish");
	 obj2.set("Meshram");
	 obj1+obj2;


 getch();
}