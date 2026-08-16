class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        int left=0;
        deque<int>dq;
        for(int right=0;right<n;right++){
            while(!dq.empty() && nums[right]>=nums[dq.back()]) 
            dq.pop_back();
            dq.push_back(right);
            if(dq.front() < left) dq.pop_front();
            if(right-left+1==k){
                left++;
                ans.push_back(nums[dq.front()]);
            }

        }
        return ans;


    }
};
