/* 69. Sqrt(x) */
#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x, i;
    x = 1;
    

    long long ans;

    for (long long i = 0; i <= x/2; ++i)
        {
    	    if( (i*i) > x){
    		    ans = i - 1;
    		    break;
    	    }
    	    else if(i * i == x){
    		    ans = i;
    		    break; 
    	    }
        }

        if(x == 1)
            ans = 1;
   
    
    return 0;
}

