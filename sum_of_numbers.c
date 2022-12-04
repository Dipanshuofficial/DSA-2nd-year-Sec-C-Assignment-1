#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b;
    double x,y;
    int s,d;
    double p,m;
    scanf("%d %d", &a,&b);
    scanf("%lf %lf", &x,&y);
    s=a+b;
    d=a-b;
    printf("%d %d\n", s,d);
    p=x+y;
    m=x-y;
    printf("%.1lf %.1lf", p,m);
    
    return 0;
}
