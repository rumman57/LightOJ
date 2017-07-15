#include <stdio.h>
int main ()
{
    int n, t, a, b;
    scanf("%d", &t);
    while(t--) {
    scanf("%d", &n);
    if(n>10)
    a = 10;
    else
    a=n;
    b = n - a;
    printf("%d %d\n", a, b);
    }
    return 0;
}
