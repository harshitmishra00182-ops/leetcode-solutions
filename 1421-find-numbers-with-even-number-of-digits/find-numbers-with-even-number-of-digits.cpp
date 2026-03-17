class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int k = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int count = 0 ;
            int number = nums[i];
            while(number>0){
                number = number/10;
                count++;
            }
            if(count%2 == 0){
            k++;
        }
            
        }
        


       return k; 
    }
};