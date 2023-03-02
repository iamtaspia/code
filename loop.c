#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int Area;
    scanf("%lf%lf%lf",a,b,c);
    Area = (a + b + c)/2;
    if(a+b>c && b+c>a && c+a>b)
    {
        printf("Area of triangle\n");
    }
    else
    {
        printf("No triangle is possible\n");
    }
    return 0;
}
