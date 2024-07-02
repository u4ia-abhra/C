#include<stdio.h>
void inputArray(int a[],int n);
void printArray(int a[],int n);
void main()
{
    int n;
    printf("Input the number off elements to be stored in the array: ");
    scanf("%d",&n);
    int a[n];
    inputArray(a,n);
    printArray(a,n);
}
void inputArray(int a[],int n)
{
    printf("Enter %d elements in the array:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }    
}
void printArray(int a[],int n)
{
    printf("Even numbers in the array are: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2==0)
        {
            /* code */
            printf("%d ",a[i]);
        }        
    } 
    printf("\nOdd numbers in the array are: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i]%2!=0)
        {
            /* code */
            printf("%d ",a[i]);
        }        
    }
}