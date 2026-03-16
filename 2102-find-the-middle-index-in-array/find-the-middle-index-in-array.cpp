class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        int totalSum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            totalSum += nums[i];
        }
        for(int i = 0 ; i < nums.size() ; i++){
            
            rightSum = totalSum - leftSum - nums[i];
            if(leftSum == rightSum) return i;
            leftSum += nums[i];
        }
        
        return -1;
    }
};