
#include <iostream>
#include <cstring>
#include<string>

using namespace std;



class Student{
    public:
    int id;
    char name[20];
    char address[50];
   
    void set(){
        cout<<"enter id of student : ";
        cin>>id;
        cout<<"Enter name of student : ";
        cin>>name;
        cout<<"enter address of student : ";
        cin>>address;

    }

    void get(){
        cout<<"Student detail : "<<id<<"\t"<<name<<"\t"<<address<<endl;
    }

};

class Exam : public Student{
    public:
    int p_mark_in_paper1,p_mark_in_paper2;
    
    void set(){
        cout<<"Enter paper1 marks : ";
        cin>>p_mark_in_paper1;
        cout<<"Enter paper2 marks : ";
        cin>>p_mark_in_paper2;
    }
    void get(){
        cout<<"paper 1 and paper 2 marks : "<<p_mark_in_paper1<<"\t"<<p_mark_in_paper2<<endl;
    }

};

class Sport{
    public:
    int sports_marks;
 
    void set(){
        cout<<"Enter sports marks : ";
        cin>>sports_marks;

    }
    void get(){
        cout<<"Sports marks : "<<sports_marks;
    }

};

class Result : public Exam, public Sport{
    int total_marks;

    public:
    void get(Student s1, Exam e1,Sport sp1){
        
        total_marks = e1.p_mark_in_paper1 + e1.p_mark_in_paper2 + sp1.sports_marks;
    cout<<"id : "<<s1.id<<"\tname :"<<s1.name<<"\taddress : "<<s1.address<<"\tpaper marks 1 : "<<e1.p_mark_in_paper1<<"\tpaper mark 2 : "<<e1.p_mark_in_paper2<<"\tsports marks : "<<sp1.sports_marks<<"\tTotal marks : "<<total_marks<<endl;
    }


};


int main()
{
    cout<<"-----------START PROGRAM-----------------"<<endl;
    Student s1;
    Exam e1;
    Sport sp1;
    Result re1;



    //logic called objects to set and total_marks
    s1.set();
    e1.set();
    sp1.set();
    re1.get(s1,e1,sp1);



    return 0;
}
