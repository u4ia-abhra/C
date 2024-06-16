#include<stdio.h>
void main()
{
    int r;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    float a = (float)22/7*r*r;
    printf("The area is: %f",a);
}