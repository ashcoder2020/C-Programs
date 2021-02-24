
#include <iostream>

using namespace std;

int choice,i,j,k=0,score = 0,l=0;
char question[10][300] = {
                                {"question 1"},{"question 2"},{"question 3"},{"question 4"},{"question 5"},
                        };
char option[40][100] = {
                            {"option 1"},{"option 2"},{"option 3"},{"option 4"},
                            {"option 1"},{"option 2"},{"option 3"},{"option 4"},
                            {"option 1"},{"option 2"},{"option 3"},{"option 4"},
                            {"option 1"},{"option 2"},{"option 3"},{"option 4"},
                            {"option 1"},{"option 2"},{"option 3"},{"option 4"},
                            
                        };
                        
int correct_answers[5]={
                        1,2,2,4,3
                        };
int input_answer[5];

void menu(){
    
    cout<<"=============================================="<<endl;
    cout<<"            ONLINE EXAM SYSTEM                "<<endl;
    cout<<"=============================================="<<endl;
    cout<<"1.START EXAM\n2.EXIT"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
}


void display_result(){
    cout<<"==================================================="<<endl;
    cout<<"==================ANSWER KEY======================="<<endl;
    cout<<"==================================================="<<endl;
    for(i=0;i<5;i++){
        cout<<question[i]<<endl;
        
        for(j=0;j<4;j++){
            cout<<j+1<<" : "<<option[l]<<endl;
            l+=1;
            
        }
        cout<<"correct anser : "<<option[correct_answers[i]]<<endl;
        cout<<"you Inputed answer : "<<option[input_answer[i]]<<endl;
        cout<<"----------------------------------------------------------"<<endl;
      
        if(correct_answers[i] == input_answer[i]){
         score = score+1;
       }
       else{
           score= score+0;
       }
        
    }
    cout<<"=====YOU GOT "<<score<<" marks========================="<<endl;
    
}



void exam(){
    cout<<"===================EXAM STARTED=================="<<endl;
    for(i=0;i<5;i++){
        cout<<"question : "<<question[i]<<endl;
        for(j=0;j<4;j++){
            cout<<j<<" : "<<option[k]<<endl;
            k+=1;
        }
        cout<<"Enter Answer : ";
        cin>>input_answer[i];
    }
    //display result
    display_result();
}






void select_option_menu(int choice){
    switch(choice){
        case 1:
        {
            exam();
            break;
        }
        case 2:
        {
            exit;
        }
    }
}




int main()
{
    menu();
    select_option_menu(choice);



    return 0;
}
