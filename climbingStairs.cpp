/* 70. Climbing Stairs */
#include <bits/stdc++.h>

using namespace std;
double facto( double numero);

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n = 45;

    double ans = 0.0;
    double r = 0.0;
    double combinacion = 0.0;
    
    if( n <= 3)
    	ans = n;
    else{

    	r = 0.0;

    	if(n % 2 == 0){

    		for (double m = n; m >= n/2 ; --m)
    		{
	    		
	    		cout << m << ' ' << r << endl;
	    		combinacion = facto(m) / ( facto(m - r) * facto(r) );
	    		cout << combinacion << endl;
	    		ans += combinacion;
	    		r++;

    		}
    	}
    	else{
    		for (double m = n; m > n/2 ; --m)
    		{
	    		
	    		cout << m << ' ' << r << endl;
	    		ans += ( facto(m) / ( facto(m - r) * facto(r) ) );
	    		r++;

    		}
    	}

    	
    }

    cout << (int)ans << endl;
   
    
    return 0;
}

double facto( double numero){

	double fact = 1;

	for (int i = 1; i <= numero; ++i)
		fact *= i;
	

	return fact;
}