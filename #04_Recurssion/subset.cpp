

// Subsequence or subset or powerset is same 

#include<iostream>
#include<string>
using namespace std;
void solve(string str,string op){
    if(str.size()==0){
        cout<<op<<endl;
        return;
    }

    string op1=op;
    string op2=op+str[0];
    str.erase(0,1);
    solve(str,op1);
    solve(str,op2);
}

int main(){
    string str="abc";
    string op="";
    solve(str,op);
    return 0;
}