/*3. Longest Substring Without Repeating Characters*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int max = 0;
        int ini = 0;
        
        map <char, int> letters;
        
        for(int i = 0; i < s.size(); i++){
            
            if(letters.count(s[i])){
                
                int index = letters[s[i]];
                
                for(int j = ini; j <= index; j++){
                    letters.erase(s[j]);
                }
                
                ini = index + 1;

                letters[s[i]] = i;
            }
            else{
                letters[s[i]] = i;
            }
            
            if(letters.size() > max){
                max = letters.size();
            }
        }
        
        return max; 
    }
};

/*Va recorriendo la palabra y agregando cada letra y su posicion en un map
Cuando encuentra una letra repetida (que esta en el map), obtiene el indice en donde esta la primera, 
recorre la palabra de un indice que compienza en cero
hasta el de esa letra para ir eliminando las letras que estaban antes y esa misma
el indice se actualiza a una posicion mas que la primer letra que se repite
siempre estamos obtentiendo el tamaño del set

*/