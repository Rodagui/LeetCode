/*7. Reverse Integer*/

#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie();

	/* -2147483648 al 2147483647 */

	long long aux = 0ll;
	long long mult = 1;
	string num;
	string rev;
	int tam;
	bool negative = false;
	int ans = 0;
	int x;


	cin >> x;

	if(x < 0){
		negative = true;
		x = abs(x);
	}

	num = to_string(x);
	rev = num;

	tam = num.size();
    
    int j = tam - 1;

    for (int i = 0; i < tam ; ++i)     /*en vez de esto un reverse   reverse(num.begin(), num.end())*/
    {
    	rev[i] = num[j];
    	j--;
    }    

    cout << rev << endl;

   	j = 0;

   	while(rev[j] == '0'){
   		j++;
   	}
   	
   	cout << j<< endl;



   	for (int i = tam - 1; i >= j ; --i)  /*en vez de esto de puede usar la funcion stoll*/
   	{														/*string a long long */
   		aux += (mult * (long long)(rev[i] - '0'));
   		mult *= 10ll;
   	}

   	if(aux >= -2147483648 and aux <= 2147483647){
	    ans = (int)aux;

	    if(negative)
	    	ans *= (-1);
	}
        

    cout << ans;   

	return 0;
}



/*--------------- class 4 leetcode ----------------


class Solution {
public:
    int reverse(int x) {
        
        bool negative = false; 
        long long mult = 1ll;
        long long aux = 0ll;
        int ans = 0;
        string num;
        string rev;
        int tam;  
                
        if(x < 0){
		    negative = true;
		    x = abs(x);
	    }

	    num = to_string(x);
	    rev = num;

	    tam = num.size();
    
        int j = tam - 1;

        for (int i = 0; i < tam ; ++i)
        {
    	    rev[i] = num[j];
    	    j--;
        }

   	    j = 0;

   	    while(rev[j] == '0'){
   		    j++;
   	    }
   	
   	   	for (int i = tam - 1; i >= j ; --i)
   	    {
   		    aux += (mult * (long long)(rev[i] - '0'));
   		    mult *= 10ll;
   	    }

   	    if(aux >= -2147483648 and aux <= 2147483647){
	        ans = (int)aux;

	        if(negative)
	    	    ans *= (-1);
	    }
        
        return ans;
        
    }
};


*/