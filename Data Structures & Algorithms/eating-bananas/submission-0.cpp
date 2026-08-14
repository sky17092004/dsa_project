class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=*max_element(piles.begin(),piles.end());
        int low=1;
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int totalh=0;
            for(int banana:piles){
                totalh+=ceil(double(banana)/mid);
            }
            if(totalh<=h){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};
