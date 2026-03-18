class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>result;
        vector<int>remaining;

        for(int i = 0 ; i < arr2.size() ; i++){
            for(int j = 0 ; j < arr1.size() ; j++){
                if(arr2[i] == arr1[j]){
                    result.push_back(arr2[i]);
                }

            }
        }
        for(int i = 0 ; i < arr1.size() ; i++){
           bool found = false;
        for(int j = 0; j < arr2.size(); j++){
            if(arr1[i] == arr2[j]) found = true;
             }
            if(!found) remaining.push_back(arr1[i]);  
        }   
        sort(remaining.begin(), remaining.end());

        for(int x : remaining){
         result.push_back(x);
        }
        return result;
    }
};