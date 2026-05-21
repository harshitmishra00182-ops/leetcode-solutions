class Solution {
public:
    int bitwiseComplement(int n) {
        int bit,ans = 0;
        if(n == 0){
            return 1; 
        }
        int i = 0;
       while(n != 0){
        
            int bit = n&1;
           
            bit = bit^1;
            ans += bit * (1<<i);
             n = n>>1;
             i++;
        }
        return ans;
        

    }
};