#include <stdio.h>
#include <string.h>
char a[101];
char n[101];
char k[101];
char d[101];
int main()
{
	int i,j,lena,lenk;
	char c = '0';
	for(i=0;i<10;i++)
	{
		scanf("%d %s",&a,&k);
		lena = strlen(a);
		lenk = strlen(k);
		d[lena] = '\0';
		for(j=1;j<=lenk;j++)
		{
			d[lena-j] = a[lena-j] - k[lenk-j] + '0';
		}
	}
}