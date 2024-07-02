#include<stdio.h>
void inputArray(int a[],int n);
void sortArray(int a[],int n);
void printArray(int a[],int n);
void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of %d numbers:\n",n);
    inputArray(arr,n);
    sortArray(arr,n);
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
void sortArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        for(int j=i+1;j<=n;j++)
        {
            if (a[j]<a[i])
            {
                /* code */
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }            
        }
    }   
}
void printArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    } 
}