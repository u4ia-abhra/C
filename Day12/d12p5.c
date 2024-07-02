#include<stdio.h>
void inputArray(int a[],int n);
void subArray(int a[],int n,int s);
void main()
{
    int n,s;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    inputArray(arr,n);
    printf("Enter sum = ");
    scanf("%d",&s);
    subArray(arr,n,s);
}
void inputArray(int a[],int n)
{
    printf("Enter the value of %d numbers:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }    
}
void subArray(int a[],int n,int s)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            /* code */
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                sum+=a[k];
            }
            if (sum==s)
            {
                /* code */
                printf("Sum found between indexes %d and %d\n",i,j);
                return;            
            }            
        }        
    }   
}