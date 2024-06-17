#include<stdio.h>
void main()
{
    int bp,disc,mp;
    printf("Enter the buying price:");
    scanf("%d",&bp);
    printf("Enter the marker price:");
    scanf("%d",&mp);
    printf("Enter the discount:");
    scanf("%d",&disc);
    float sp=(float)(mp-mp*25/100);
    float profit = (float)(sp-bp)/bp*100;
    sp>=bp?printf("Seller made a profit of %f",profit):printf("Seller made a loss of %f",profit);
}