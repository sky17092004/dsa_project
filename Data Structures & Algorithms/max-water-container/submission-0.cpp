class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int j=heights.size()-1;
        int ans=-1;
        int maxi=0;
        while(i<j){
            if(heights[i]<heights[j]){
                ans=(j-i)*heights[i];
                i++;
            }
            else {
                ans=(j-i)*heights[j];
                j--;
                }
            maxi=max(maxi,ans);
        }
        return maxi;

    }
};
