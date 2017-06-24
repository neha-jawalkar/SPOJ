#include <stdio.h>
#include <string.h>

int a[100000], m[1000001];

int main()
{
	int t, i, j, n, max;
	scanf("%d", &n);
	max = 1;
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		if(m[a[i] - 1] + 1 > m[a[i]])
		{
			m[a[i]] = m[a[i] - 1] + 1;
			if(m[a[i]] > max) max = m[a[i]];
		}

	}
	printf("%d\n", max);
}