#include <stdio.h>
#define Pai 2*acos(0.0)
int main ()
{
     double circle_bahu_length,circle_area,squre_area,required_area,r;
     int i,T;
     scanf("%d",&T);
     for(i=0;i<T;i++)
    {
        scanf("%lf",&r);
        circle_bahu_length = r*2;
        circle_area = circle_bahu_length * circle_bahu_length;
        squre_area = Pai*r*r;
        required_area = (circle_area - squre_area);
        printf ("Case %d: %0.2lf\n",i+1,required_area);
    }
    return 0;
}
