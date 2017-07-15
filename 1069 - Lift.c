#include <stdio.h>
int main ()
{
    int i,j,k,h,a,b;
    scanf("%d",&a);
    for (i= 0;i<a;i++)
    {
        scanf("%d %d",&j,&b);
        if (b>j || j==b)
        {
            k = (b-0)*4;
            h = k + 19;
            printf ("Case %d: %d\n",i+1,h);
        }
        if(j>b)
        {
            k = (j-b)*4 + (j*4) +19;
             printf ("Case %d: %d\n",i+1,k);
        }
    }
}
