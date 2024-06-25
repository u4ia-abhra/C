#include<stdio.h>
void inputArray(int a[],int n);
void searchArray(int a[],int n,int e);
void main()
{
    int n,e;
    printf("Enter array size(N): ");
    scanf("%d",&n);
    int a[n];
    inputArray(a,n);
    printf("Enter the element to be searched: ");
    scanf("%d",&e);
    searchArray(a,n,e);
    
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
void searchArray(int a[],int n,int e)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]==e)
        {
            /* code */
            printf("Number found at location = %d\n",i+1);
            return;
        }        
    }
    printf("Number not found\n");
}