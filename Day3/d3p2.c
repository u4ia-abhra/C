#include<stdio.h>
void main()
{
    int c;
    printf("Enter the temperature in Centigrade: ");
    scanf("%d",&c);
    float f = (float)c*9/5+32;
    printf("The Farenheit temperature is: %f",f);
}