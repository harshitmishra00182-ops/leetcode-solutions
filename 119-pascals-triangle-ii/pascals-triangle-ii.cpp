class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int> row = {1};  
    for(int i = 0; i < rowIndex; i++){
    vector<int> newRow(row.size()+1, 1); 
    
    for(int j = 1; j < row.size(); j++){
        newRow[j] = row[j-1] + row[j];  
        }
    row = newRow;
     }
    return row;
    }
};