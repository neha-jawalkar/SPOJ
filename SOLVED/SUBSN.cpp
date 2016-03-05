#include <iostream>
#include <vector>
#include <map>
using namespace std;
char S[100001];
char T[201];
vector<int> lookup[26];
int t,q,ls,lt;
int binary_search(int index, int find)
{
	int lower_bound = 0;
	int upper_bound = lookup[index].size();
	int mid,found=-2;
	while(lower_bound < upper_bound)
	{
		mid = (lower_bound + upper_bound)/2;
		if(lookup[index][mid] < find) lower_bound = mid+1;
		else if(lookup[index][mid] == find)
		{
			found = find;
			break;
		}
		else
		{
			found = lookup[index][mid];
			upper_bound = mid;
		}
	}
	return found+1;
}

int main()
{
	cin>>t; getchar();
	for(int i=0;i<t;++i)
	{
		int j;
		for(j=0;(S[j]=getchar())!='\n';lookup[S[j] - 'a'].push_back(j),++j);
		S[j] = '\0';
		ls = j;
		cout<<"Case "<<i+1<<":"<<endl;
		cin>>q; getchar();
		for(j=0;j<q;j++)
		{
			int k,l;
			for(k=0;(T[k]=getchar())!='\n';++k);
			T[k] = '\0';
			lt = k;
			for(k=0,l=0;k<lt && (l = binary_search(T[k]-'a',l)) != -1;++k);
			if(k == lt) cout<<"YES"<<endl; else cout<<"NO"<<endl;
		}
		for(j=0;j<26;++j) lookup[j].clear();
	}
}