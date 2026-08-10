class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        unordered_map<char,int>mp;
        int ans=0;
        int maxf=0;
        int n=s.size();
        for(int right=0;right<n;right++){
            mp[s[right]]++;
            maxf=max(maxf,mp[s[right]]);
            while((right-left+1)-maxf>k){
                mp[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
