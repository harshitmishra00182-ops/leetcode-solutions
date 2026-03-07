class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        int i = 0, n = s.length() ;
        
        while(i<n){
             
            while(i<n && s[i] == ' ') i++;

            string word = "";
            while(i<n && s[i] != ' '){
            word+=s[i];
            i++;
            
        }
        if(word.length()>0){
            words.push_back(word);

        }
           
        }
         
        

        string ans = "";

       for(int i = words.size()-1; i >= 0; i--){
        ans += words[i];
        if(i != 0) ans += " ";
        }
        return ans;
        
    }
};