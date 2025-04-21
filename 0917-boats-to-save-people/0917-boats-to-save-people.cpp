class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // sort(people.begin(),people.end());
        // int i=0,j=1;
        // int count=0;
        // while(j<people.size()){
        //     int sum=people[i]+people[j];
        //     if(sum>limit){
        //         count++;
        //         i++,j++;
        //     }else{
        //         count++;
        //         i=i+2;
        //         j=j+2;
        //     }
        // }
        // if(i==people.size()-1) count++;
        // return count;

        // tow pointer
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1;
        int count=0;
        while(i<j){
            int sum=people[i]+people[j];
            
            if(sum<=limit) {
                count++;
                i++,j--;
            }else{
                if(j-i==1){
                    count+=2;
                    break;
                }
                else{
                    j--;
                    count++;
                }
                
            }
            

        }
        if(i==j) count++;
        return count;
    }
};