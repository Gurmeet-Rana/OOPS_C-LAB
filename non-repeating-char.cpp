//DISPLAY NON REPEATING CHARACTERS IN THE STRING 
#include<iostream>
#include<string>
using namespace std;
void nr(string &s){
    int count[26]={0};            //IT IS THE FREQUNCY ARRAY OF THE CHARACTER IN THE STRING
    for(int i=0;i<s.length();i++){
        count[s[i]-97]++;                    // JO ALPHABETS STRING ME PRESENT H UNKI POSITIONS PR UNKA COUNT LIKHDIYA a STARTS FROM 0
    } 
    for(int i=0;i<s.length();i++){
        if(count[i]==1){
            cout<<s[i]<<" ";
        }
    }
    cout<<"THE FREQUENCY OF THE CHARACTERS OF THE STRING IS :  "<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" comes "<<count[s[i]-97]<<" times"<<endl;
    }

}
int main(){
    string s="graphic era hill university";
    cout<<"BEFORE MODIFYING THE STRING IS "<<s<<endl;
    nr(s);
    cout<<"AFTER MODIFICATION THE STRING IS "<<s;    
    return 0;
} 