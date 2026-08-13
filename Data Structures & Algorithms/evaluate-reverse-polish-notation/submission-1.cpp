class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string c:tokens){
            if(c!="+" && c!="-" && c!="*" && c!="/"){
            st.push(stoi(c));
            }
            
            else if(c=="+"){
                int digit=st.top();
                st.pop();
                int digit2=st.top();
                st.pop();
                int ans=digit+digit2;
                st.push(ans);
            }
            else if(c=="-"){
                int digit=st.top();
                st.pop();
                int digit2=st.top();
                st.pop();
                int ans=digit2-digit;
                st.push(ans);
            }
            else if(c=="*"){
                int digit=st.top();
                st.pop();
                int digit2=st.top();
                st.pop();
                int ans=digit*digit2;
                st.push(ans);
            }
            else if(c=="/"){
                 int digit=st.top();
                st.pop();
                int digit2=st.top();
                st.pop();
                int ans=digit2/digit;
                st.push(ans);
            }
        }
    
        return st.top();
    }
};
