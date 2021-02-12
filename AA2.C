#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<fstream.h>

void main(){

char str[3000];
clrscr();

fstream firstfileopen("file1.txt",ios::in);
fstream secondfilewrite("file2.txt",ios::out);

while(!firstfileopen.eof())
{

 firstfileopen.getline(str,2000);
 cout<<"first file data read:"<<str<<endl;
 secondfilewrite<<str<<endl;
}

getch();
}
