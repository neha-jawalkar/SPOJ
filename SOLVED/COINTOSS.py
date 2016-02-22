# #include <stdio.h>
# #include <gmp.h>
# #include <string.h>
# int main()
# {
# 	int t,i,n,m;
# 	mpz_t pow_n,pow_m,ans;
# 	char str_n[1004],str_m[1004];
# 	mpz_init(pow_n);
# 	mpz_init(pow_m);
# 	mpz_init(ans);
# 	for(scanf("%d",&t),i=0;i<t;i++)
# 	{
# 		scanf("%d %d",&n,&m);
# 		memset(str_n,'0',n+2);
# 		memset(str_m,'0',m+2);
# 		str_n[n+2] = 0;
# 		str_m[m+2] = 0;
# 		str_n[0] = '1';
# 		str_m[0] = '1';
# 		mpz_set_str(pow_n,str_n,2);
# 		mpz_set_str(pow_m,str_m,2);
# 		mpz_sub(ans,pow_n,pow_m);
# 		mpz_get_str(str_n,10,ans);
# 		printf("%s.00\n",str_n);
# 	}
# 	return 0;
# }
t = input()
for i in range(0,t):
	n,m = map(int,raw_input().split())
	power_n = 1<<(n+1)
	power_m = 1<<(m+1)
	ans = power_n - power_m
	print str(ans) + '.00'
