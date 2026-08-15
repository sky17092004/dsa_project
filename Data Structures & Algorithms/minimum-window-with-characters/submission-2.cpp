class Solution {
public:
    string minWindow(string s, string t) {
         unordered_map<char,int>mp;
        int n=s.size();
        for(char c:t){
            mp[c]++;
        }
        int required=t.size();
        int left=0;
        int window=INT_MAX;
        int start_i=0;
        for(int right=0;right<n;right++){
            char ch=s[right];
            if(mp[ch]>0) required--;
            mp[ch]--;
            while(required==0){
                int current=right-left+1;
                if(current<window){
                    window=current;
                    start_i=left;
                }
                mp[s[left]]++;
                if(mp[s[left]]>0) {
                    required++;
                }
                left++;
            }
        }
        if(window==INT_MAX) return "";
        return s.substr(start_i, window);
    }
};
