#include <stdio.h>
#include <stdlib.h>
int main()
{
	long n,i,j = 0;
	int is_match = 0;
	char* needle;
	char haystack;
	int* partial_match_table;
	while((scanf("%ld",&n)==1))
	{
		needle = (char*)malloc((n+1)*sizeof(char));
		scanf("%s",needle);
		partial_match_table = (int*)malloc(n*sizeof(int));
		partial_match_table[0] = 0;
		for(i=1;i<n;i++)
		{
			is_match = (needle[i] == needle[j]);
			if(is_match)
			{
				partial_match_table[i] = partial_match_table[i-1] + 1;
				j++;
			}
			else
			{
				j = 0;
				is_match = (needle[i] == needle[j]);
				if(is_match)
				{
					partial_match_table[i] = 1;
					j = 1;
				}
				else partial_match_table[i] = 0;
			}
		}
		i=0;
		j=0;
		getchar();
		haystack = getchar();
		while(haystack != '\n' && i < n)
		{
			if(needle[i] == haystack)
			{
				i++;
				j++;
				haystack = getchar();
			}
			if(i == n)
			{
				printf("%ld\n",j-n);
				i = partial_match_table[i-1];
			}
			else if(needle[i] != haystack)
			{
				if(i > 0)
					i = partial_match_table[i-1];
				else
				{
					haystack = getchar();
					j++;
				} 
			} 
		}
		printf("\n");
	}
	return 0;
}