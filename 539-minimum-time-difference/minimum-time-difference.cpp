class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for(string t : timePoints){
            int h = stoi(t.substr(0, 2));  // extract hours
            int m = stoi(t.substr(3, 2));  // extract minutes
            minutes.push_back(h * 60 + m);
        }

        // sort the minutes
        sort(minutes.begin(), minutes.end());

        int minDiff = INT_MAX;

        for(int i = 1; i < minutes.size(); i++){
            minDiff = min(minDiff, minutes[i] - minutes[i-1]);
        }

        int circular = 1440 - minutes.back() + minutes[0];
        minDiff = min(minDiff, circular);

        return minDiff;
    }
};
