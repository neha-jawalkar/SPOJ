#include <stdio.h>
#define MAX_HEIGHT
char winners[MAX_HEIGHT];
int k,l,m;
char predict_winner(int n)
{
	if(n == 0)
		return 'B';
	if(winners[n] == 0)
	{
		if(predict_winner(n-2) == 'A')
			winners[n] = 
		winner[1] = predict_winner(n-k, next_player);
		winner[2] = predict_winner(n-l, next_player);
		winners[n] = (winner[0] == winner[1])
	}
}
int main()
{
	scanf("%d %d %d",&k,&l,&m);
	int i,n, winner;
	for(i=0;i<MAX_HEIGHT;i++)
	{
		winners[i] = 0;
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&n);
		printf("%c", predict_winner(n));
	}
	printf("\n");
	return 0;
}