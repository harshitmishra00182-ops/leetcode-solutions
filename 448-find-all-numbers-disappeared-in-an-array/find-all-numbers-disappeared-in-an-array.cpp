class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int j = 0;
        for(int i = 1; i <= n; i++){
            // skip duplicates of current number
            while(j < n && nums[j] < i) j++;
            
            if(j == n || nums[j] != i)
                result.push_back(i);
        }
        
        return result;
    }
};