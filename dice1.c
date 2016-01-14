#include <stdio.h>
int die[6];
int target[2];
int min;
int rotate(int startx, int starty, int rotations, int die0, int die1, int die2, int die3, int die4, int die5)
{
	if(startx == target[0] && starty == target[1])
		return rotations;
	if(min!= -1 && rotations > min)
		return -1;
	int temp;
	if(starty < 4)
	{
		temp = rotate(startx, starty+1, rotations+1, die1, die5, die2, die3, die0, die4);
		if(min != -1 && temp < min)
			min = temp;
		else if(min == -1)
			min = temp;
	}
	temp = rotate(startx+1, starty, rotations+1, die2, die1, die5, die0, die4, die3);
	if(min == -1)
		min = temp;
	else if(min != -1 && temp < min)

}
int main()
{
	int t,i,j,start[2];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		min = -1;
		for(j=0;j<6;scanf("%d",&die[j]),j++);
		scanf("%d %d %d %d",start[0],start[1],target[0],target[1]);
		printf("%d\n",play(start[0],start[1],0,die[0],die[1],die[2],die[3],die[4],die[5]));
	}
}