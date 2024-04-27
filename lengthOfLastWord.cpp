class Solution {
public:
    int lengthOfLastWord(string s) {
       
        bool noMoreSpaces = false;
        int ans = 0;
        for(int i = s.size() - 1; i >= 0; i--){
           if( s[i] != ' '){
                ans++;
                noMoreSpaces = true;
           }

           if (s[i] ==' ' and noMoreSpaces)
            break;
        }

        return ans;
    }
};
