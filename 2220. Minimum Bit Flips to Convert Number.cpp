/*2220. Minimum Bit Flips to Convert Number*/


class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int ans = 0; 

        vector <int> binaryStart;
        vector <int> binaryGoal;

        while(start){
            binaryStart.push_back(start % 2);
            start /= 2;
        }

        while(goal){
            binaryGoal.push_back(goal % 2);
            goal /= 2;
        }

        int dif = 0;

        if(binaryStart.size() < binaryGoal.size()){

            dif = binaryGoal.size() - binaryStart.size();

            while(dif--){
                binaryStart.push_back(0);
            }
            
        }
        else{
            dif = binaryStart.size() - binaryGoal.size();

            while(dif--){
                binaryGoal.push_back(0);
            }
        }

        for(int i = 0; i < binaryGoal.size(); i++){
                if(binaryGoal[i] != binaryStart[i])
                    ans++;
            }

        return ans;
    }
};