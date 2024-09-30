/*  FIND MAXIMUM OCCURING CHARACTER IN THE STRING */
#include<iostream>
#include<unordered_map>
#include<climits>

#include<vector>
using namespace std;
char maxOccuring(string input)
{
    unordered_map<char,int> m;
    int n=input.length();

    for(int i=0;i<n;i++)
    {
        if(m.find(input[i])!=m.end())
        {
            m[input[i]]++;
        }
        else{
            m[input[i]]=1;
        }
    }
    int maxFreq=INT_MIN;
    char ans;
    unordered_map<char,int> :: iterator itr;
    for(auto itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second > maxFreq )
        {
            ans=itr->first;
            maxFreq=itr->second;
        }
    }
    return ans;
}
int main()
{
    string input;
    cout<<"ENTER THE STRING : "<<endl;
    getline(cin,input);
    cout<<"CHARACTER WITH MAXIMUM OCCURENCE IS : "<<maxOccuring(input)<<endl;
    cout <<"*********************************************" << endl; 
    cout << "Program Prepared & Executed by: Gurmeet Rana CSE3(A2), Class Roll no: 30" << endl; 
    cout << "*********************************************" << endl; 
    return 0;
}