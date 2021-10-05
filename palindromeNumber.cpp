class Solution {
public:
    bool isPalindrome(int x) {
        
        bool ans = true;
        int aux = 0;
        
        string num;
        
        num = to_string(x);
        
        int i = 0;
        int j = num.size() - 1;
        
        while(i < j and num[i] == num[j]){
            i++;
            j--;
            aux += 2;
        }
        
        if(num.size() - aux > 1 )
            ans = false;
        
        return ans;
        
    }
};