//convert temperature from farenhite to degree calcius
#include<stdio.h>
int main()
{
    float c,fh;
    printf("enter temperature in farenhite\n");
    scanf("%f", &fh);

    c=(fh-32)*5.0/9.0;
    printf("Temperature inDegree celcius is %f\n",c);


    return 0;
}
