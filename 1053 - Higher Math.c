#include <stdio.h>
int main ()
{
    int a,b,d,i,j,k,f;
    scanf ("%d",&a);
    for (b=1;b<=a;b++)
    {
        scanf("%d %d %d", &i,&j,&k);
        if (i>j && i>k )
            {
                d = i*i;
                f = (j*j) + (k*k);
                if (d==f)
                    printf ("Case %d: yes\n",b);
                else
                printf ("Case %d: no\n",b);

            }
             if (j>i && j>k )
            {
                d = j*j;
                f = (i*i) + (k*k);
                if (d==f)
                    printf ("Case %d: yes\n",b);
                else
                printf ("Case %d: no\n",b);

            }
             if (k>i && k>j )
            {
                d = k*k;
                f = (j*j) + (i*i);
                if (d==f)
                    printf ("Case %d: yes\n",b);
                else
                printf ("Case %d: no\n",b);

            }
    }
}
