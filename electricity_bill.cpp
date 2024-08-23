/*ELECTRICITY BILL PROBLEM(SIMILAR PROBLEMS : INCOME TAX OR SLAB BASED PROBLEMS)

INPUT CONSUMER NAME AND UNIT AND GENERATE BILL BASED ON THE FOLLOWING SLABS:
    IF UNIT >100 , 60PAISA/UNIT IS CHARGED
    IF UNIT >=100 AND <300 , 80PAISA/UINT IS CHARGED 
    OTHERWISE 90PAISA/UINT IS CHARGED 
    IF TOTAL >=300     ADDITIONAL 50 RUPEE IS CHARGED AND 15% CHARGE IS ADDED 

*/
#include<iostream>
using namespace std;
int bill(int u){
    float bill=0;
    if(u<100){
        bill=u*0.60;
    }
    else if(u>=100 and u<300){
        bill=100*0.60+(u-100)*0.80;
    }
    else{
        bill=100*0.60+(200)*0.80+(u-300)*0.90+50;
        bill+=bill*0.15;
    }

    return bill;
}
int main(){
    string consumer;
    cout<<"ENTER THE CONSUMER NAME:";
    getline(cin,consumer);
    int unit;
    cout<<"ENTER THE UNITS:";
    cin>>unit;
    cout<<"THE CONSUMER'S NAME IS "<<consumer<<endl<<"THE TOTAL BILL AMOUNT IS:"<<bill(unit);
    return 0;
}
