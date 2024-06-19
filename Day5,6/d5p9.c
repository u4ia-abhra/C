#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("Input values for a,b and c: ");
    scanf("%d,%d,%d",&a,&b,&c);
    int d=b*b-4*a*c;
    switch (d>=0)
    {
    case 0:
        printf("The Roots are imaginary.\n"); 
        printf("Roots are %f+i%f and %f-i%f\n",(float)-b/(2*a),(float)sqrt(-d)/(2*a),(float)-b/(2*a),(float)sqrt(-d)/(2*a));
        break;
    case 1:
        switch (d==0)
        {
            case 0:
                printf("The Roots are real and unequal.\n");
                float r1=(float)(-b+sqrt(d))/(2*a);
                float r2=(float)(-b-sqrt(d))/(2*a);
                printf("Roots are %f and %f\n",r1,r2);
                break;
            case 1:
                printf("The Roots are real and equal.\n");
                printf("Roots are %f and %f\n",(float)(-b/(2*a)),(float)(-b/(2*a)));
                break;
            default:
                printf("Error code 1\n");
        }
        break;
    default:
        printf("Error code 2\n");        
    }
}