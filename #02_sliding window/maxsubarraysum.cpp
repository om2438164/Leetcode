#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


// we can optimized this by using kadan's algorithm 
// check notes and template folder to refer kadan's algorithm 


int getsum(vector<int>&arr,int k){
    int i=0,j=0;
    int sum=0,maxi=INT_MIN;
    while(j<k){
        
        sum+=arr[j];
        j++;
    }
    maxi=sum;
    while(j<arr.size()){
        sum=sum-arr[i];
        sum+=arr[j];
        j++;
        i++;
        maxi=max(sum,maxi);
    }
    return maxi;
}

int main(){
    vector<int>arr={2,5,15,8,2,9,1};
    int k=3;

    cout<<getsum(arr,k);

    return 0;

}
