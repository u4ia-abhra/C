#include<stdio.h>
void inputArray(int a[],int n);
int duplicate(int a[],int n);
void main()
{
    int n;
    printf("Enter array size(N): ");
    scanf("%d",&n);
    int a[n];
    inputArray(a,n);
    printf("Total number of duplicate elements found in the array: %d",duplicate(a,n));
}
void inputArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("Enter number%d: ",i+1);
        scanf("%d",&a[i]);
    }
}
int duplicate(int a[],int n)
{
    int c=0;
    for (int i = 0; i < n; i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            {
                /* code */
                c++;
                break;
            }
        }
    }
    return c;
}