class Solution {
public:
    bool isPalindrome(int x) {
        int digit,ans=0;
        int orig=x;
        if(x<0){
            return 0;
        }
        while(x!= 0){
            digit = x%10;
            if((ans>= INT_MAX/10) || (ans <=INT_MIN/10)){
                return 0;
            }
            ans = ans*10+digit;
            x = x/10;
        }
        if(orig == ans){
            return 1;
        }
        return 0;
    }
};