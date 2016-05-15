#include <stdio.h>
#include <string.h>
#define GI(a) scanf("%d",&a)
#define GLL(a) scanf("%lld",&a)
#define GS(a) scanf("%s",a)
#define PI(a) printf("%d\n",(a))
#define PLL(a) printf("%lld\n",a)
#define PS(s) printf("%s\n",s)
#define REP(i,N) for(i=0;i<(N);i++)
#define REP2(i,S,N) for(i=(S);i<(N);i++)
#define TESTS I t,i;GI(t);REP(i,t)
#define PC(c) printf("%c\n",c)
#define NEWLINE printf("\n")
#define EXIT return 0
#define START I main()
#define SET(M,I) memset(M,I,sizeof M)
#define P 10000007

typedef int I;
typedef long long LL;
typedef char C;

LL min(LL a, LL b) { return a<b?a:b; }

LL power(LL base, LL exponent)
{
	LL result = 1;
	for(;exponent>0;base=(base*base)%P,exponent=exponent>>1) if(exponent%2==1) result = (result*base)%P;
	return result;
}

START
{
	LL k,n,z;
	for(;GLL(n),GLL(k),n!=0;)
	{
		z = (power(n-1,k)+power(n-1,n-1)+power(n-1,k)+power(n,k)+power(n-1,n-1)+power(n,n))%P;
		PLL(z);
	}
	EXIT;
}