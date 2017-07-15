#include <stdio.h>
int main()
{
long long int d,n,m,r,test,i;
scanf("%lld",&test);
for(i=0;i<test;i++)
{
scanf("%lld %lld",&n,&m);
d= n/2.0;
r = d * m;
printf("Case %lld: %lld\n",i+1,r);
}
}
