#include <stdio.h>
int main ()
{
    int a,i,j,d,k;
    scanf("%d",&d);
    for (k =1;k<=d;k++)
    {
        scanf("%d %d",&i,&j);
        printf ("Case %d: %d\n",k,i+j);
    }
}
