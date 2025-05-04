class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {

        // int count=0;
        // for(int i=0;i<dominoes.size()-1;i++){
        //     int a=dominoes[i][0];
        //     int b=dominoes[i][1];
        //     for(int j=i+1;j<dominoes.size();j++){
        //         int c=dominoes[j][0];
        //         int d=dominoes[j][1];
        //         if((a==c && b==d) || (a==d && b==c)){
        //             count++;
        //         }
        //     }
        // }
        // return count;

                unordered_map<int, int> freq;
                int count = 0;

                for (auto& d : dominoes) {
                    // Normalize the domino: smaller number first
                    int a = min(d[0], d[1]);
                    int b = max(d[0], d[1]);
                    int key =
                        a * 10 + b;

                    count += freq[key]; 
                                        
                    freq[key]++;       
                }

                return count;
            }
        };