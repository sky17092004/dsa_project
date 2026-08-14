class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()) return false;
        vector<int>mp1(26,0);
        vector<int>mp2(26,0);
        for(int i=0;i<s1.size();i++){
            mp1[s1[i]-'a']++;
        }
        int left=0;
        bool ans=false;
        for(int right=0;right<s2.size();right++){
            mp2[s2[right]-'a']++;
            if(right-left+1==s1.size()){
                if(mp1==mp2) ans=true;
                    mp2[s2[left]-'a']--;
                    left++;
                
            }
        }
        return ans;
        
    } 
};
