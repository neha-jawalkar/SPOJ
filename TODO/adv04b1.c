#include <stdio.h>
#define GI(a) scanf("%d",&a)
#define PI(a) printf("%d\n",(a))
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,N) for(;i<(N);i++)
#define P 1000003
#define EXP 1000001
int memo[1000000];
int inv[1000000];
long long unsigned a,b,c,power,MOD;
long long unsigned modinv(m)
{
	if(inv[m])
		return inv[m];
	power=1;
	c=m;
	MOD=EXP;
	while(MOD > 0)
	{
		if(MOD%2==1)
			power=(power*c)%P;
		c=(c*c)%P;
		MOD = MOD/2;
	}
	inv[m] = power;
	if(power < 1000000)
		inv[power] = m;
	return power;
}
int D(int m)
{
	a = (6*m-3)%P;
	a = (a*memo[m-1])%P;
	b = ((m-1)*memo[m-2])%P;
	return (int)(((a-b)*modinv(m))%P);
}
int main()
{
	int i,t,n;
	GI(t);
	memo[0] = 1;
	memo[1] = 3;
	i=2;
	REP2(i,1000000)
	{
		memo[i] = D(i);
		if(memo[i] < 0)
			memo[i] += P;
	}
	REP(i,t)
	{
		GI(n);
		PI(memo[n-1]);
	}
	return 0;
}