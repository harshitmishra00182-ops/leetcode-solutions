class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxVal = INT_MIN;
        vector<bool>result;
         for(int i = 0 ; i < candies.size() ; i++){
              maxVal = max(maxVal, candies[i]);
        }
        for(int i = 0 ; i < candies.size() ; i++){
           
            if(candies[i]+extraCandies >= maxVal){
                result.push_back(true);
            }
            else {result.push_back(false);
            }
        }
        return result;
    }
};