#include <stdio.h>
#include <string.h>
int main ()
{
    int i,a,j,k,n,m,p,q,r,s,t,temp,b,c,T,e,arr[103],arr2[103];
    char str[10];
    scanf("%d",&T);
    for (e=1;e<=T;e++)
  {
       scanf("%d %d",&n,&m);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (j=0;j<m;j++)
    {


            scanf("%s",str);
            if (str[0] == 'S')
             {
                  scanf("%d",&p);
                  for (i=0;i<n;i++)
                   {
                     arr2[i] = arr[i] + p;
                   }
             }
            else  if (str[0] == 'M')
             {
                  scanf("%d",&q);
                  for (i=0;i<n;i++)
                   {
                     arr2[i] = arr[i]*q;
                   }
             }
            else  if (str[0] == 'D')
             {
                  scanf("%d",&r);
                  for (i=0;i<n;i++)
                   {
                     arr2[i] = arr[i]/r;
                   }
             }

            else if (str[0] == 'R')
             {
                  for (b=0,c=n-1;b<n,c>=0;b++,c--)
                     arr2[c]  = arr[b];
             }
            else  if (str[0] == 'P')
             {
                  scanf("%d %d",&s ,&t);
                  temp = arr[s];
                  arr[s] = arr[t];
                  arr[t] = temp;
             }

           if (str[0]!= 'P')
             {
                  for (a=0;a<n;a++)
                  arr[a]= arr2[a];

             }
    }
    printf("Case %d:\n",e);
    for (i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("%d",arr[n-1]);
    printf("\n");

  }


}
