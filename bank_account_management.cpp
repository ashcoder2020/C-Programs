
#include <iostream>

using namespace std;

class ATM{
    public:
    char fname[20],lname[20];
    double mobileno,fbalance,total_balance,deposite=0,withdraw;
    int choice;
    
    void OpenAccount(){
        cout<<"-----------create account------------------------"<<endl;
        cout<<"Enter your First Name : ";
        cin>>fname;
        cout<<"Enter your last name : ";
        cin>>lname;
        cout<<"Enter mobile number : ";
        cin>>mobileno;
    }
    void AddFirstBalance(){
        cout<<"ENter how many Rs. you want to deposite first balance : ";
        cin>>total_balance;
    }
    void AddBalance(){
        cout<<"-------------deposite money-----------------------"<<endl;
        cout<<"Enter how many Rs. you want to deposite : ";
        cin>>deposite;
        total_balance = total_balance + deposite;
        cout<<"Your deposite added successfully "<<endl;
    }
    void ShowBalance(){
        cout<<"--------------------show balance----------------------"<<endl;
        cout<<"your total account balance is : "<<total_balance<<endl;
        
    }
    void Withdraw(){
        cout<<"---------------------withdraw money---------------------------"<<endl;
        cout<<"Enter how many money you want to withdraw : ";
        cin>>withdraw;
        total_balance = total_balance - withdraw;
        cout<<withdraw<<" withdraw succesfully"<<endl;
        cout<<"Now your account balance is : "<<total_balance<<endl;
        
    }
    void ShowAccountDetail(){
        cout<<"-------Your Account detail-----------------------"<<endl;
        cout<<"full Name : "<<fname<<" "<<lname<<endl;
        cout<<"Mobile Number : "<<mobileno<<endl;
        cout<<"your Account balance : "<<total_balance<<endl;
    }
    int menu(){
        
        cout<<"=====================BANK ACCOUNT SYSTEM========================"<<endl;
        cout<<"1. Create account"<<endl;
        cout<<"2. Add Balance"<<endl;
        cout<<"3. Show Balance"<<endl;
        cout<<"4. Withdraw money"<<endl;
        cout<<"5. show your account detail"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        return choice;
    }
    
};

int main()
{
    int x;
    cout<<"----------------BANK ACCOUNT---------------"<<endl;
    ATM obj;
    int i=0;
 
    do{
        x = obj.menu();
        switch(x){
            case 1:
                obj.OpenAccount();
                obj.AddFirstBalance();
                break;
            
            case 2:
                obj.AddBalance();
                break;
            
            case 3:
                obj.ShowBalance();
                break;
            
            case 4:
                obj.Withdraw();
                break;
            
            case 5:
                obj.ShowAccountDetail();
                break;
            
            case 6:
                x = 10;
                cout<<"Exit Program"<<endl;
                break;
            default:
                x = obj.menu();
                
        }
        
    }while(x!=10);
    return 0;
}
