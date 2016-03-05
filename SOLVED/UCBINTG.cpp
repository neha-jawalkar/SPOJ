#include <iostream>
using namespace std;
char input_grid[10][11];
char output_grid[10][11];
int r,c,s[2],e[2],x;
int main()
{
	cin>>r>>c;
	s[0] = r;
	s[1] = c;
	e[0] = -1;
	e[1] = -1;
	for(int i=0;i<r;scanf("%s",input_grid[i]),++i);
	for(int i=0;i<r;++i) 
	{
		for(int j=0;j<c;++j)
		{
			if(input_grid[i][j] == 'X')
			{
				x=0;
				if(i-1 < 0 || input_grid[i-1][j] == '.') x++;
				if(j+1 >= c || input_grid[i][j+1] == '.') x++;
				if(i+1 >= r || input_grid[i+1][j] == '.') x++;
				if(j-1 < 0 || input_grid[i][j-1] == '.') x++;
				if(x>=3) output_grid[i][j] = '.';
				else
				{
					output_grid[i][j] = 'X';
					if(s[0] > i) s[0] = i;
					if(s[1] > j) s[1] = j;
					if(e[0] < i) e[0] = i;
					if(e[1] < j) e[1] = j;
				}
			}
			else output_grid[i][j] = '.';
		}
		output_grid[i][c] = 0;
	}
	for(int i=s[0];i<=e[0];++i) 
	{
		for(int j=s[1];j<=e[1];++j) printf("%c",output_grid[i][j]);
		printf("\n");
	}
}