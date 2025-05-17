class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        int j=0;
        while(j<k){
            sum+=cardPoints[j++];
        }
        j--;
        int i=cardPoints.size()-1;
        int count=0;
        int maxi=sum;
        while(count<k){
            sum-=cardPoints[j--];
            sum+=cardPoints[i--];
            count++;
            maxi=max(sum,maxi);
        }
        return maxi;
    }
};