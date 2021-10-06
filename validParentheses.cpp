/*20. Valid Parentheses*/

class Solution {
public:
    bool isValid(string s) {
     
        bool ans = true;
        
        vector <char> brackets;
        
        for(int i = 0; i < s.size(); ++i){
            if(s[i] == '(' or s[i] == '{' or s[i] == '['){
                brackets.push_back(s[i]);
            }
            else{
                if(s[i] == ')'){
                    if(brackets.empty()){
                        ans = false;
                        break;
                    }
                    else{
                        if(brackets.back() != '('){
                            ans = false;
                            break;
                        }
                        else{
                            brackets.pop_back();
                        }
                    }
                        
                }
                
                else if(s[i] == ']'){
                    if(brackets.empty()){
                        ans = false;
                        break;
                    }
                    else{
                        if(brackets.back() != '['){
                            ans = false;
                            break;
                        }
                        else{
                            brackets.pop_back();
                        }
                    }
                        
                }
                else{
                    
                    if(brackets.empty()){
                        ans = false;
                        break;
                    }
                    else{
                        if(brackets.back() != '{'){
                            ans = false;
                            break;
                        }
                        else{
                            brackets.pop_back();
                        }
                    }
                    
                }
                
            }
        }
        
        if(brackets.size() > 0)
            ans = false;
        
        return ans;
    }
};

/* Ocupa una pila. Si encuentra signos de abertura los agrega a la pila
Si encuentra un signo de cierre, elimina al que esta en el tope de la pila si es el que le 
corresponde 
si no, inmediatamente sabemos que es falso y estan mal los signos
si la pila al final tiene 1 elemento o mas es falso tambien (signos de abertura de más)*/