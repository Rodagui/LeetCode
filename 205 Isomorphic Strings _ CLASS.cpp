/*205. Isomorphic Strings*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        map< char , char> characters;
        set< char> unicos;

        for(int i = 0; i < s.size(); i++){

            if(unicos.empty()){
                characters[s[i]] = t[i];
                unicos.insert(t[i]);
            }
            else{
                if(!unicos.count(t[i])){
                    characters[s[i]] = t[i];
                    unicos.insert(t[i]);
                }
            }
        }

        string ans="";

        for(int i = 0; i < s.size(); i++){
            ans += characters[s[i]];
        }

        if(ans != t)
            return false;
        
        return true; 
    }
};