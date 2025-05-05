#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<queue>
using namespace std;


void getsum(vector<int>&arr,int k){
    vector<int>ans;
    queue<int>q;
    int i=0,j=0;
    
    while(j<k){
        
        if(arr[j]<0){
            q.push(arr[j]);
            
        }
        j++;
    }
    
    while(j<arr.size()){
        if(q.empty()){
            ans.push_back(0);
        }else{
            if(arr[i]==q.front()){
                ans.push_back(q.front());
                q.pop();
            }else{
                ans.push_back(q.front());
            }
        }
        if(arr[j]<0) q.push(arr[j]);
        
        j++;
        i++;

    }
    if(q.empty()) ans.push_back(0);
    else ans.push_back(q.front());
    for(auto it:ans) cout<<it<<" ";
}

int main(){
    vector<int>arr={12,-1,-7,8,-16,1,-3,-4,5,-18};
    int k=3;

   getsum(arr,k);

    return 0;

}