#include <stdio.h>
int main ()
{
    int a,b,c,i,j,count,T;
    scanf("%d",&T);
    for(c=1;c<=T;c++)
   {
        scanf("%d",&a);
        for (i=a,count=0;i>0;i=i/2)
        {
            b = i%2;
            if (b==1) {
                count++; }
        }
        j = count%2;
        if (j==1)
            printf("Case %d: odd\n",c);
        else
            printf("Case %d: even\n",c);
   }

}
