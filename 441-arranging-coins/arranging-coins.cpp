class Solution {
public:
    int arrangeCoins(int n) {
        int st = 0 ; 
        int e = n;
        while(st<=e){
            int mid = st + (e-st)/2;
            long long totCoins = (long long)mid *(mid+1)/2;
            if(totCoins == n){
                return mid;
            }
            if(totCoins> n){
                e = mid-1;;
            }
            else st = mid+1;

        }
        return e;
    }
};