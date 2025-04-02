class Solution {
public:
    int myAtoi(string s) {
        long long temp = 0;
        int i = 0;
        bool isNegative = false;

        // Step 1: Ignore leading spaces
        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        // Step 2: Check for '+' or '-' sign
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') isNegative = true;
            i++;
        }

        // Step 3: Process digits and ignore leading zeros
        while (i < s.length() && (s[i] >= '0' && s[i] <= '9')) {
            temp = temp * 10 + (s[i] - '0');

            // Step 4: Handle overflow cases
            if (isNegative && -temp <= INT_MIN) return INT_MIN;
            if (!isNegative && temp >= INT_MAX) return INT_MAX;

            i++;
        }

        // Step 5: Apply negative sign if needed
        if (isNegative) temp = -temp;

        // Step 6: Return final integer value
        return (int)temp;
    }
};
