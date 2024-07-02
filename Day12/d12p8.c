#include<stdio.h>
void inputArray(int a[],int n);
void rotateArray(int a[],int n,int d);
void printArray(int a[],int n);
void main()
{
    int n,d;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of %d numbers:\n",n);
    inputArray(arr,n);
    printf("d = ");
    scanf("%d",&d);
    rotateArray(arr,n,d);
    printf("The Numbers in ascending order are:\n");
    printArray(arr,n);
}
void inputArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }    
}
void rotateArray(int a[],int n,int d)
{
    int b[d];
    for (int i = 0; i < d; i++)
    {
        b[i]=a[i];
    }  
    for (int i = 0; i < n-d; i++)
    {
        a[i]=a[i+d];
    }   
    for (int i = n-d; i < n; i++)
    {
        a[i]=b[i-n+d];
    }
}
void printArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    } 
}