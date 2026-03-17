class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxVal = INT_MIN;
        

        for(int i = 0 ; i < accounts.size() ; i++){
            int money = 0;
            for(int j = 0 ; j< accounts[i].size() ; j++){
                 money += accounts[i][j] ; 
                  maxVal = max(maxVal , money);       
              }
           
        }
        
        return maxVal;
        
    }
};