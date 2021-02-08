/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string>

using namespace std;



class Student{
    int id;
    char name[20];
    char address[50];
    public:
    void set(){
        cout<<"enter id of student : ";
        cin>>id;
        cout<<"Enter name of student : ";
        cin>>name;
        cout<<"enter address of student : ";
        
    }
    
    void get(){
        cout<<"Student detail : "<<id<<"\t"<<name<<"\t"<<address<<endl;
    }
    
};

class Exam : public Student{
    int p_mark_in_paper1,p_mark_in_paper2;
    public:
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
    int sports_marks;
    public:
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
    
    
    void get(){
    cout<<"id : "<<re.id<<endl;
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
    re.get();
    
    

    return 0;
}
