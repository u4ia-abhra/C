#include<stdio.h>
void inputArray(int a[],int n);
void printArray(int a[],int n);
void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of %d numbers:\n",n);
    inputArray(arr,n);
    printf("The unique elements found in the array are:\n");
    printArray(arr,n);
}
void inputArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }    
}
void printArray(int a[],int n)
{   
    for (int i = 0; i < n; i++)
    {
        /* code */
        int c=0;
        for(int j=0;j<i;j++)
        {
            if (a[i]==a[j])
            {
                /* code */
                c++;
            }            
        }
        if (c==0)
        {
            /* code */
            printf("%d ",a[i]);
        }        
    }
}