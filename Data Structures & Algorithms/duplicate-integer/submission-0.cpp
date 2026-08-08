class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
       unordered_set<int>st;
       for(int i=0;i<n;i++){
        st.insert(nums[i]);
       }
       int m=st.size();
       return n!=m;
        
    }
};