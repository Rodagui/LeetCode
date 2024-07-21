/*  125. Valid Palindrome */
class Solution {
public:
    bool isPalindrome(string s) {
       
        string aux = "";
        string auxReverse = "";

        for (int i = 0; i < s.size(); ++i)
        {
            if(isalpha(s[i]))
                aux += tolower(s[i]);
            
            if(isdigit(s[i]))
                aux += s[i];
        }

        auxReverse = aux;
        reverse(auxReverse.begin(), auxReverse.end());

        if(auxReverse == aux)
            return true;
        else
            return false;
    }
};