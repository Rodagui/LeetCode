/*1684. Count the Number of Consistent Strings*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        
        set <char> letters; 
        int ans = 0;
        string word;
        int account = 0;
        
        for(int i = 0; i < allowed.size(); i++)
            letters.insert(allowed[i]);

        for(int i = 0; i < words.size(); i++){
            word = words[i];
            account = 0;
            for(int j = 0; j < word.size(); j++ ){
                if( !letters.empty() and letters.count(word[j])){
                    account++;
                }
                else{
                    break;
                }
            }

            if(account == word.size()){
                ans++;
            }
        }
        
        return ans;
    }
};