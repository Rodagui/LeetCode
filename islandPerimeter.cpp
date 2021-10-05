/*463. Island Perimeter*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int h;
	int w;

	cin >> h >> w;

	vector <vector <int> > grid (h, vector<int> (w));

	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			cin >> grid[i][j];
		}
	}

	int perimeter = 0;
	
	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			if(grid[i][j] == 1){
				
				/*para sumar el contorno cuando lo que tiene a un lado es agua*/
				if( i-1 >= 0 and grid[i-1][j] != 1)
					perimeter++;

				if( i+1 < h and grid[i+1][j] != 1)
					perimeter++;
				
				if( j-1 >= 0 and grid[i][j-1] != 1)
					perimeter++;
				
				if( j+1 < w and grid[i][j+1] != 1)
					perimeter++;

				/*para sumar el contorno cuando mi porcion de tierra esta en la orilla de la matriz*/
				if(i == 0)
					perimeter++;
				if(i == h - 1)
					perimeter++;
				if(j == 0)
					perimeter++;
				if(j == w - 1)
					perimeter++;


			}
		}
	}

	cout << perimeter;

	
	return 0;
}


/* ---------------- CLASS 4 LEETCODE ------------------

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int height = grid.size();
        int width = grid[0].size();
        
        int perimeter = 0;
        
        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                
                if(grid[i][j] == 1){
				
				    if( i-1 >= 0 and grid[i-1][j] != 1)
				    	perimeter++;

			    	if( i+1 < height and grid[i+1][j] != 1)
					    perimeter++;
				
				    if( j-1 >= 0 and grid[i][j-1] != 1)
					    perimeter++;
				
				    if( j+1 < width and grid[i][j+1] != 1)
				    	perimeter++;
					
					(*esto es por si hay uin borde*)
				    if(i == 0)
				    	perimeter++;
				    if(i == height - 1)
					    perimeter++;
				    if(j == 0)
				    	perimeter++;
				    if(j == width - 1)
			    		perimeter++;
              }
            }
        }
        
        return perimeter;
    }
        
};




*/