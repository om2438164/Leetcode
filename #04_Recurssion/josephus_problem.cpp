
// josephus problem -- aditya verma playlist

#include<iostream>
#include<vector>
using namespace std;
void solve(int n,int k,int i,vector<int>&temp){
    if(temp.size()==1){
        cout<<temp[0]<<endl;
        return;
    }

    int index=(i+k-1)%temp.size();
    temp.erase(temp.begin()+index);
    solve(n,k,index,temp);

}
int main(){
    
    
    int n=40;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[i]=i+1;
    }
    int k=7;
    int i=0;
    solve(n,k,i,temp);
    return 0;
}