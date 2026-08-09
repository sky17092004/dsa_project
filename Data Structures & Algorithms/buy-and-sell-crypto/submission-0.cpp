class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int maxi=0;
        for(int sell:prices){
            if(sell>buy) maxi=max(maxi,sell-buy);
            else buy=sell;
        }
        return maxi;
    }
};
