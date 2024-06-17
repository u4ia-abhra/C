#include<stdio.h>
void main()
{
    int h1,m1,s1;
    int h2,m2,s2;
    int h3,m3,s3;
    printf("Enter time1: ");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("Enter time2: ");
    scanf("%d:%d:%d",&h2,&m2,&s2);
    s3=s1+s2;
    m3=m1+m2;
    h3=h1+h2;
    if (s3>=60)
    {
        m3++;
        s3%=60;
    }
    if (m3>=60)
    {
        h3++;
        m3%=60;
    }
    if (h3>=24)
    {
        h3%=24;
    }
    printf("Sum: %d:%d:%d",h3,m3,s3);    
}