class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        for(int i=low;i<=high;i++){
            string temp=to_string(i);
            if(temp.size()%2==0){
                int sum1=0,sum2=0;
                for(int j=0;j<temp.size()/2;j++){
                    sum1+=(temp[j]-'0');
                }
                for(int k=(temp.size()/2);k<temp.size();k++){
                    sum2+=(temp[k]-'0');
                }
                if(sum1==sum2) count++;
            }
        }
        return count;
    }
};