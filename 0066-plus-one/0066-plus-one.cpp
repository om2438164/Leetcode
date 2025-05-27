class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // using two pass

        // vector<int>ans;
        // int sum=digits[digits.size()-1]+1;
        // ans.push_back(sum%10);
        // int carry=sum/10;
        // for(int i=digits.size()-2;i>=0;i--){
        //     int sum=carry+digits[i];
        //     ans.push_back(sum%10);
        //     carry=sum/10;
        // }
        // if(carry) ans.push_back(carry);
        // reverse(ans.begin(),ans.end());
        // return ans;

        // single pass
        // Start from the rightmost digit
        int n=digits.size();
        for (int i = n - 1; i >= 0; i--) {
            // If the current digit is not 9, simply increment it by 1 and
            // return
            if (digits[i] != 9) {
                digits[i]++;
                return digits;
            }
            // If the current digit is 9, set it to 0 and continue to the next
            // digit
            digits[i] = 0;
        }

        // If all digits were 9, we need to add an additional digit at the
        // beginning
        digits.insert(digits.begin(), 1);

        return digits;
    }
};