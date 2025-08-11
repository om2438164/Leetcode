#include<iostream>
#include<vector>
using namespace std;

// void bubble(vector<int>&arr){
//     int n=arr.size();
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
//         }
//     }
// }

// void selection(vector<int>&arr){
//     int n=arr.size();
//     for(int i=0;i<n-1;i++){
//         int minIndex=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]<arr[minIndex]) minIndex=j;
//         }
//         swap(arr[minIndex],arr[i]);
//     }
// }

// void insertion(vector<int>&arr){
//     int n=arr.size();
//     for(int i=1;i<n;i++){
//         int key=arr[i];
//         int j=i-1;
//         while(arr[j]>key && j>=0){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }
// }

void merge(vector<int>&arr){

}

void print(vector<int>&arr){
    for(auto& it:arr){
        cout<<it<<" ";
    }
}
int main(){
    vector<int>arr={5,2,6,3,11};
    // bubble(arr);
    // selection(arr);
    // insertion(arr);
    merge(arr);
    print(arr);
    return 0;
}