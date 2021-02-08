//----------------developed by ashish meshram------------------------------------------------

#include <iostream>

using namespace std;

class AddTwoTime{
    int hours,minutes,seconds;
    int tot_hr,tot_sec,tot_min,carry=0;
    int hourr,minutee,secondd;
    public:
    void AddTime(int hr,int min,int sec){
        hours = hr;
        minutes = min;
        seconds  =sec;
        //cout<<hr<<min<<sec<<endl;
    }
    
    void Addition(AddTwoTime cobj2){
        tot_sec = seconds + cobj2.seconds;
        //seconds convert to min and sec
        if (tot_sec>60){
            //cout<<"Converting seconds to minutes"<<endl;
            int conv_min;
            int conv_sec;
            carry = tot_sec/60;
            conv_sec = tot_sec%60;
            
            //cout<<carry<<":"<<conv_sec;
            secondd = conv_sec;
            
        }
        else{
            secondd = tot_sec;
        }
       
        tot_min = minutes + cobj2.minutes + carry;
        carry = 0;
        //minutes to hours and minutes
        if (tot_min>60){
            //cout<<"Converting minutes to seconds"<<endl;
            int conv_hour;
            int conv_min;
            carry = tot_min/60;
            conv_min = tot_min%60;
            minutee = conv_min;
            
            //cout<<carry<<":"<<conv_min;
            
        }
        else{
            minutee = tot_min;
        }
       
        
        tot_hr = hours + cobj2.hours + carry;
        carry= 0;
        //minutes to hours and minutes
        if (tot_hr>60){
            //cout<<"Converting hours to day"<<endl;
            int conv_day;
            int conv_hour;
            carry = tot_hr/24;
            conv_day = tot_hr%24;
            
            hourr = conv_day;
            //cout<<carry<<":"<<conv_day;
            
        }
        else{
            hourr = tot_hr;
        }   
    } 
    void display(){
        cout<<carry<< " days "<<hourr<<" hours "<<minutee<<" minutes "<<secondd<<" seconds "<<endl;
    }
};

int main()
{
    cout<<"--------------developed by ashish meshram-----------------------"<<endl;
    AddTwoTime obj1,obj2;
    obj1.AddTime(10,20,35);
    obj2.AddTime(12,69,120);
    obj1.Addition(obj2);
    obj1.display();

    return 0;
}
