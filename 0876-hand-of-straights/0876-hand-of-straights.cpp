class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0) return false;
        map<int,int>map;
        for(auto it:hand) map[it]++;

        while(!map.empty()){
            int first=0;
            for(auto it:map){
                first=it.first;
                break;
            }
            

            int count=0;
            while(count<groupSize){
                if(map.count(first)){
                    map[first]--;
                    if(map[first]==0) map.erase(first);
                    first=first+1;
                    count++;
                }else{
                    return false;
                }
            }
        }
        return true;
        
    }
};