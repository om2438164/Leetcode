#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void solve(string s,string op,int i){
    if(i>=s.size()){
        cout<<op<<endl;
        return;
    }
    char ch=toupper(s[i]);
    solve(s,op+ch,i+1);
    solve(s,op+s[i],i+1);
    
}
int main(){
    string str="ab";
    string op="";
    int i=0;
    solve(str,op,i);
    return 0;
}