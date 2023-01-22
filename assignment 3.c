//calculate the volume and area of a sphere
#include<stdio.h>
int main()
{
     const float PI=3.14;
           float r,volume;

           printf("Enter readious of the sphere\n");
           scanf("%f", &r);

           volume=(4 * PI * r * r * r)/3.0;
           printf("volume of sphere is %f\n",volume);

           return 0;








}
