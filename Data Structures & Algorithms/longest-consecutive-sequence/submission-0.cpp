class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int current=0;
        int longest=0;
        unordered_set<int>st;
        st.insert(nums.begin(),nums.end());
        for(int x:nums){
            if(st.find(x-1)==st.end()) {
                current=0;
                while(st.find(x+current)!=st.end()){
                  current++;
                }

            }
            longest=max(longest,current);
           
            
        }
        return longest;
    }
};
