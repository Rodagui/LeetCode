/*599. Minimum Index Sum of Two Lists */
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        vector <string> ans;
        int min = 2000;

        for(int i = 0; i < list1.size(); i++){

            for(int j = 0; j < list2.size(); j++){
                if(list1[i] == list2[j]){
                    if(i + j < min){
                        ans.clear();
                        min = i + j;
                        ans.push_back(list1[i]);
                        continue;
                    }
                    else if( i + j == min){
                        ans.push_back(list1[i]);
                        continue;
                    }
                }
            }
        }

        return ans;
       
    }
};