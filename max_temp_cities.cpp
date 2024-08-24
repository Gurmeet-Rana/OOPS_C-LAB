/*
THE DAILY MAX TEMP RECORDED IN 5 CITIES DURING THE MONTH OF JAN ( FOR ALL 10 DAYS ) HAVE BEEN TABULATED AS FOLLOWS 
*/
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<climits>
#include<vector>
using namespace std;
int main(){
    vector < vector<int>> matrix={
        {12,13,14,15,12},
        {12,13,14,15,12},
        {12,13,14,15,12},
        {12,13,14,15,12},
        {12,13,14,15,12},
    };
    int min_temp=INT_MAX,max_temp=INT_MIN,min_indx[2],max_indx[2];
    string city[5];
    cout<<"ENTER 5 CITIES :"<<endl;
    for(int i=0;i<5;i++){
        cin>>city[i];
    }
    cout<<setw(15)<<city[0]<<setw(10)<<city[1]<<setw(10)<<city[2]<<setw(10)<<city[3]<<setw(10)<<city[4]<<endl;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(j==0){
                cout<<setw(15)<<matrix[i][j]<<setw(10);
            }
            else{
                cout<<matrix[i][j]<<setw(10);
            }
        }
        cout<<endl;
    }
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]>max_temp){
                max_temp=matrix[i][j];
                max_indx[0]=i;
                max_indx[1]=j;
            }
            else if(matrix[i][j]<min_temp){
                min_temp=matrix[i][j];
                min_indx[0]=i;
                min_indx[1]=j;                
            }
        }
    }
    cout<<"THE MAXIMUM TEMPERATURE RECORDED :"<<max_temp<<" on day "<<max_indx[0]+1<<" in city "<<city[max_indx[1]]<<endl;
    cout<<"THE MINIMUM TEMPERATURE RECORDED :"<<min_temp<<" on day "<<min_indx[0]+1<<" in city "<<city[min_indx[1]]<<endl;
    return 0;
}