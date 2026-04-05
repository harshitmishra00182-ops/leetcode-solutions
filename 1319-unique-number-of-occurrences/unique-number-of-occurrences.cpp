class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        vector<int> count;
        int n = arr.size();
        for(int i = 0 ; i < n ; i++){
            int currentCount = 1;
            while( i+1 < n && arr[i] == arr[i+1]){
                currentCount++;
                i++;
            }
               count.push_back(currentCount);
        }
      

            sort(count.begin() , count.end());
            int m = count.size();
            for(int i = 0 ; i < m-1 ; i++){
                if(count[i] == count[i+1]){
                    return false;
                }
            }
        return true;
    }
};