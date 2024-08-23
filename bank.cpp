#include<iostream>
#include"mylib.cpp"
using namespace std;
int main(){
    string name,typeacc;
    cout<<"ENTER YOUR NAME:"<<endl;
    cin>>name;
    cout<<"ENTER THE TYPE OF YOUR ACCOUNT:"<<endl;
    cin>>typeacc;    
    Bank customer(name,typeacc);
    int choice;   
    do
    {
         cout<<"ENTER 1 TO DEPOSIT ,2 TO WITHDRAW AND 3 TO CHECK YOUR BALANCE:";
        cin>>choice;
        switch (choice)
    {
    case 1:
        int amt;
        cout<<"ENTER THE AMOUNT TO DIPOSIT:"<<endl;
        cin>>amt;
        customer.diposit(amt);
        break;
    case 2:
        //int amt;
        cout<<"ENTER THE AMOUNT TO WITHDRAW:"<<endl;
        cin>>amt;
        customer.withdraw(amt);
        break;
    case 3:
        customer.display();    
    default:
        break;
    }
    cout<<"PRESS 1 FOR MORE OPERATION AND 0 TO DISCONTINUE:"<<endl;
    cin>>choice;
    } while (choice);
    
    return 0;
}