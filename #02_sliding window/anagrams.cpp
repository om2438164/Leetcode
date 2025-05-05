#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int getsum(string& arr,string&hell, int k) {
    unordered_map<char, int> map;
    unordered_map<char, int> temp;
    for (auto it : hell) map[it]++;
    
    int i = 0, j = 0, count = 0;
    
    while (j < k) {
        temp[arr[j]]++;
        j++;
    }
    
    while (j <= arr.size()) {  
        if (temp == map) {
            count++;
        }
        temp[arr[j]]++;
        temp[arr[i]]--;
        if (temp[arr[i]] <= 0) {
            temp.erase(arr[i]);
        }
        
        j++;
        i++;
    }
    
    return count;
}

int main() {
    string arr = "forxxorfxdofrrof";
    string hell="for";
    int k = hell.size();
    cout << getsum(arr,hell, k);  // Output should be 4
    // because there are 4 anagrams in this arr 
    return 0;
}