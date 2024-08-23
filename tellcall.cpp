#include<iostream>
#include"mylib.cpp"
using namespace std;
int main(){
    string name,phno;
    int n;
    cout<<"ENTER THE NAME;";
    cin>>name;
    cout<<"ENTER THE PHNO:";
    cin>>phno;
    cout<<"ENTER THE NO OF CALL MADE:";
    cin>>n;
    Tellcall s1(name,phno,n);
    
    s1.compute();
    s1.display();
    return 0;
}