#include <stdio.h>
int main ()
{
    int T,N,a,b,d,c;
    scanf("%d",&T);
    for ( c = 1; c<=T;c++ )
    {
        scanf("%d",&N);
        for (a=1,d=0;a<=N;a++)
        {
            scanf("%d",&b);
            if (b>=0)
                d = d + b;
                else
                d = d-0;

        }

         printf("Case %d: %d\n",c,d);
    }
    return 0;
}
