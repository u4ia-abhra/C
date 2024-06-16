#include<stdio.h>
void main()
{
    int h,b;
    printf("Enter the height of the triangle: ");
    scanf("%d",&h);
    printf("Enter the base of the triangle: ");
    scanf("%d",&b);
    float area = 0.5 * b * h;
    printf("The area of the triangle is: %f",area);
}