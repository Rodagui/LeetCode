/* 806. Number of Lines To Write String.cpp */

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        
        vector <int> ans(2, 0);
        
        int pos = 0;
        int peso;
        int suma = 0;

        ans[0] = 1;

        for(int i = 0; i < s.size(); i++){

            pos = s[i] - 'a';
            peso = widths[pos];

            if(suma + peso <= 100){
                suma += peso;
            }
            else{
                suma = peso;
                ans[0]++;
            }
        }
        
        ans[1] = suma;

        return ans;
    }
};