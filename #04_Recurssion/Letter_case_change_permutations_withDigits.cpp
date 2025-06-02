#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void solve(string s,string op,int i){
    if(i>=s.size()){
        cout<<op<<endl;
        return;
    }
    if(isdigit(s[i])){
        solve(s,op+s[i],i+1);
    }else{
        char ch1=toupper(s[i]);
        char ch2=tolower(s[i]);
        solve(s,op+ch1,i+1);
        solve(s,op+ch2,i+1);
    }
    
    
}
int main(){
    string str="a1B2";
    string op="";
    int i=0;
    solve(str,op,i);
    return 0;
}