#include<stdio.h>
void inputArray(int a[],int n);
void majority(int a[],int n);
void main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the value of %d numbers:\n",n);
    inputArray(arr,n);
    majority(arr,n);
}
void inputArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }    
}
void majority(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        int c=0;
        for(int j=i;j<n;j++)
        {
            if (a[j]==a[i])
            {
                /* code */
                c++;
            }            
        }
        if (c>n/2)
        {
            /* code */
            printf("The majority element is %d\n",a[i]);
            return;
        }        
    }   
}
