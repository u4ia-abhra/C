#include<stdio.h>
void inputArray(int a[],int n);
void reverseArray(int a[],int n);
void printArray(int a[],int n);
void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    inputArray(arr,n);
    reverseArray(arr,n);
    printf("Reversed array is:\n");
    printArray(arr,n);
}
void inputArray(int a[],int n)
{
    printf("Enter the value of %d numbers:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }    
}
void reverseArray(int a[],int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int temp = a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }   
}
void printArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    } 
}