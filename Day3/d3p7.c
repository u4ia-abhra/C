#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5;
    printf("Enter the number of 1st subject: ");
    scanf("%d",&m1);
    printf("Enter the number of 2nd subject: ");
    scanf("%d",&m2);
    printf("Enter the number of 3rd subject: ");
    scanf("%d",&m3);
    printf("Enter the number of 4th subject: ");
    scanf("%d",&m4);
    printf("Enter the number of 5th subject: ");
    scanf("%d",&m5);
    float avg = (float)(m1+m2+m3+m4+m5)/5;
    float perc = (float)avg/200*100;
    printf("The average is: %f\n",avg);
    printf("The percentage is: %f\n",perc);
}