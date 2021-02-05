

#include <iostream>

using namespace std;

class ShoppingReceipt{
    char *itemName[10] = {"Mango","Apple","Cherry","Orange"};
    int itemPrice[10] = {80,120,250,30};
    char *cartItems[10];
    int sumBuyItem[10];
    int quantity[10];
    int choice;
    int i,c = 0;
    int grandTotal=0;
    int noItemsBuy;
    
    public:
    void printItems(){
        cout<<"----------List of Available Items------------------"<<endl;
        for(i=0;i<4;i++){
            cout<<i+1<<"     "<<itemName[i]<<"\t"<<itemPrice[i]<<endl;
        }
    }
    
    void buyItems(){
        cout<<"Enter item number which you want to buy : ";
        cin>>choice;
        int kg;
        switch(choice){
            case 1:
                cout<<"how many Kg mango you want"<<endl;
                cin>>kg;
                quantity[c] = kg;
                cartItems[c] = itemName[0];
                sumBuyItem[c] = kg * itemPrice[0];
                cout<<"item added successfully"<<endl;
                c= c+1;
                break;
                
            case 2:
                cout<<"how many Kg Apple you want"<<endl;
                cin>>kg;
                quantity[c] = kg;
                cartItems[c] = itemName[1];
                sumBuyItem[c] = kg * itemPrice[1];
                cout<<"item added successfully"<<endl;
                c = c+1;
                break;
                
            case 3:
                cout<<"how many Kg cherry you want"<<endl;
                cin>>kg;
                quantity[c] = kg;
                cartItems[c] = itemName[2];
                sumBuyItem[c] = kg * itemPrice[2];
                cout<<"item added successfully"<<endl;
                c = c+1;
                break;
                
            case 4:
                cout<<"how many Kg Orange you want"<<endl;
                cin>>kg;
                quantity[c] = kg;
                cartItems[c] = itemName[3];
                sumBuyItem[c] = kg * itemPrice[3];
                cout<<"item added successfully"<<endl;
                c = c+1;
                break;
            
                
        }
    }
    
    void showAllBuyItems(){
        cout<<"========================RECEIPT======================="<<endl;
        cout<<endl;
        int noItems = *(&sumBuyItem + 1) - sumBuyItem;
        cout<<"Item No."<<"\t\t"<<"Item Name"<<"\t\t"<<"Quantity(Kg)"<<"\t\t"<<"Total"<<endl;
        for(i=0;i<noItems;i++){
            cout<<endl;
            cout<<i+1<<"\t\t\t"<<cartItems[i]<<"\t\t\t"<<quantity[i]<<"\t\t\t"<<sumBuyItem[i]<<endl;
        }
        int tt = TotalFind();
        cout<<tt;
       
    }
    
    int TotalFind(){
        cout<<"Total find "<<endl;
        int noItemsBuy = *(&sumBuyItem + 1) - sumBuyItem;
        for(i=0;i<noItemsBuy;i++){
            grandTotal = grandTotal + sumBuyItem[i];
        }
        return grandTotal;
    }
    
    
    
    
};





int main()
{
    int startShoping;
    char buyMore;

    cout<<"----------developed by ashish meshram------------"<<endl;
    ShoppingReceipt obj;

        cout<<"Click 1 to start shopping : "<<endl;
        cout<<"click 2 to exit : "<<endl;
        cin>>startShoping;
        switch(startShoping){
            case 1:
                shopAgain:
                obj.printItems();
                obj.buyItems();
                cout<<"Want to buy more press y else press anything to generate receipt : ";
                cin>>buyMore;
                
                if (buyMore == 'y' || buyMore=='Y'){
                    goto shopAgain;
                }
                else{
                    obj.showAllBuyItems();
                    
                    
                    
                }
        }
        
    

    return 0;
}




