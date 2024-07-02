#include<stdio.h>
void inputArray(int a[],int n);
void peak(int a[],int n);
void main()
{
    int n,s;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    inputArray(arr,n);
    peak(arr,n);
}
void inputArray(int a[],int n)
{
    printf("Enter the value of %d numbers:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }    
}
void peak(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int prev,next;
        if (i==0)
        {
            prev=a[n-1];
            next=a[i+1];        
        }
        else if (i==n-1)
        {
            /* code */
            prev=a[i-1];
            next=a[0];
        }
        else
        {
            prev=a[i-1];
            next=a[i+1];
        }
        if (a[i]>prev && a[i]>next)
        {
            /* code */
            printf("The peak element is %d\n",a[i]);
            return;
        }                                
    }   
}