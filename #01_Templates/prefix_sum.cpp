vector<int> fn(vector<int>& arr) {
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    return prefix;
}


// to find the cummulitive sum 
// this is formula:  

if (left == 0) return prefix[right];
return prefix[right] - prefix[left-1]; // it will return the sum in that given range (left to right)