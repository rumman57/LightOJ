#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323
int main ()
{
    double R,r,j,k,m;
    int i,T,n;
    scanf("%d",&T);
    for (i=1;i<=T;i++)
    {
       scanf ("%lf %d",&R,&n);
       j = 360.0/(2*n);
       k = R *sin(j*(PI/180));
       m = (1 + sin(j*(PI/180)));
       r = k/m;
       printf("Case %d: %0.10lf\n",i,r);

    }
}
