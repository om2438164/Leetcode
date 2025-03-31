#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

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