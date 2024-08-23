/*
CAR SURVEY PROBLEM( 2 - D array and set(w) UISNG )
*/
#include<iostream>
#include<iomanip>
using namespace std;
void surv(int survey[][4]){
    survey[4][4]={0};
    int car_code,city_code,choice;
    do{
        cout<<"****MAIN MENU****"<<endl;
        cout<<"CHOOSE THE CITY:"<<endl;
        cout<<"ENTER 0 FOR DELHI:"<<endl;
        cout<<"ENTER 1 FOR MUMBAI:"<<endl;
        cout<<"ENTER 2 FOR CHENNAI:"<<endl;
        cout<<"ENTER 3 FOR KOLKATTA:"<<endl;
        cin>>city_code;
        cout<<"CHOOSE THE CAR MODEL:"<<endl;  
        cout<<"ENTER 0 FOR K-10"<<endl;
        cout<<"ENTER 1 FOR ZEN"<<endl;
        cout<<"ENTER 2 FOR VITARA"<<endl;
        cout<<"ENTER 3 FOR SWIFT"<<endl;
        cin>>car_code;
        survey[city_code][car_code]++;
        cout<<"PRESS 1 TO CONTINUE OR 0 TO DISCONTINUE";
        cin>>choice;   
    }while(choice);
    
}
int main(){
    int survey[4][4];
    // surv(survey);
    int car_code,city_code,choice;
    do{
        cout<<"****MAIN MENU****"<<endl;
        cout<<"CHOOSE THE CITY:"<<endl;
        cout<<"ENTER 0 FOR DELHI:"<<endl;
        cout<<"ENTER 1 FOR MUMBAI:"<<endl;
        cout<<"ENTER 2 FOR CHENNAI:"<<endl;
        cout<<"ENTER 3 FOR KOLKATTA:"<<endl;
        cin>>city_code;
        cout<<"CHOOSE THE CAR MODEL:"<<endl;  
        cout<<"ENTER 0 FOR K-10"<<endl;
        cout<<"ENTER 1 FOR ZEN"<<endl;
        cout<<"ENTER 2 FOR VITARA"<<endl;
        cout<<"ENTER 3 FOR SWIFT"<<endl;
        cin>>car_code;
        survey[city_code][car_code]++;
        cout<<"PRESS 1 TO CONTINUE OR 0 TO DISCONTINUE";
        cin>>choice;   
    }while(choice);

    cout<<setw(15)<<"DELHI "<<setw(5)<<"MUMBAI "<<setw(5)<<"CHENNAI "<<setw(5)<<"KOLKATTA "<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i==0 and j==0){
                cout<<"k-10 "<<setw(5);
            }
            cout<<survey[i][j]<<setw(5);
            if(i==1 and j==0){
                cout<<"ZEN "<<setw(5);
            }
            if(i==2 and j==0){
                cout<<"VITARA"<<setw(5);
            }
            if(i==3 and j==0){
                cout<<"SWIFT "<<setw(5);
            }
        }
        cout<<endl;
    }
    return 0;
}

