/*442. Find All Duplicates in an Array*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
        int sizeNums = nums.size();
        vector <int> ans;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < sizeNums - 1; ++i){
            if(nums[i] == nums[i + 1]){
                if(ans.empty()){
                    ans.push_back(nums[i]);
                }
                else{
                    if(nums[i] != ans.back()){
                        ans.push_back(nums[i]);
                    }
                }
            }
        }
        
    return ans;
        
    }
};


/*ordena el arreglo y compara cada elemento con el de delante.
Si son iguales, lo compara con el que agregué a mi vector de respuesta y si
son diferentes lo agrega como respuesta, si no, no. Asi evita agregar muchas veces el mismo
numero.

en la primera inserción verifica que no esté vacío mi vector de respuesta*/