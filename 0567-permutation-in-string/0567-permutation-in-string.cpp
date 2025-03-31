class Solution {
public:
    bool getsum(string& arr, string& hell, int k) {
        if (k > arr.size()) return false; // Ensure k is valid

        unordered_map<char, int> map, temp;
        
        for (char ch : hell) map[ch]++;
        
        int i = 0, j = 0;
        
        while (j < k) {
            temp[arr[j]]++;
            j++;
        }
        
        if (temp == map) return true; // Check for first window

        while (j < arr.size()) {  
            temp[arr[j]]++;  // Add new character
            temp[arr[i]]--;  // Remove old character

            if (temp[arr[i]] == 0) temp.erase(arr[i]); // Erase zero-frequency char
            
            if (temp == map) return true; // Check current window

            j++;
            i++;
        }
        
        return false;
    }

    bool checkInclusion(string s1, string s2) {
        return getsum(s2, s1, s1.size());
    }
};
