#include<iostream>
using namespace std;

void solve(string s,string op,int i){
    if(i>=s.size()){
        cout<<op<<endl;
        return;
    }

    if(op==""){
        solve(s,op+s[i],i+1);
    }else{
        solve(s,op+s[i],i+1);
        solve(s,op+"_"+s[i],i+1);
    }
}
int main(){
    string str="abc";
    string op="";
    int i=0;
    solve(str,op,i);
    return 0;
}