class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>res(n,0);
        stack<int>st;
        st.push(0);
        for(int i=1;i<n;i++){
            while(!st.empty() && temperatures[i]>temperatures[st.top()] ){
                int pre=st.top();
                st.pop();
                res[pre]=i-pre;
            }
            st.push(i);
        }
        return res;
    }
};
