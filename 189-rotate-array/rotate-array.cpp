class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    reverse(nums.begin(), nums.end());        // reverse all
    reverse(nums.begin(), nums.begin() + k);  // reverse first k
    reverse(nums.begin() + k, nums.end());    // reverse rest
}
};
