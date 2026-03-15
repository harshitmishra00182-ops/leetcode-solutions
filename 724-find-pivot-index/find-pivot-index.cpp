class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int totalSum = 0;
        int sumLeft = 0;
        
        for(int i = 0; i < nums.size(); i++)
            totalSum += nums[i];
        
        for(int i = 0; i < nums.size(); i++){
            if(sumLeft == totalSum - sumLeft - nums[i])
                return i;
            sumLeft += nums[i];
        }
        
        return -1;
    }
};