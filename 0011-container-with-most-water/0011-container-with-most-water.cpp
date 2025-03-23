class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size()-1;
        int start=0,end=n;
        int lower;
        int maxi=INT_MIN;
        while(start<end){
            if(height[start]<height[end]){
                lower=height[start];
                maxi=max(maxi,lower*(end-start));
                start++;
            }else{
                lower=height[end];
                maxi=max(maxi,lower*(end-start));
                end--;
            }
         
           cout<<maxi<<endl;

        }
        return maxi;
    }
};