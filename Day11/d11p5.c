#include<stdio.h>
void inputArray(int a[],int n);
void insertInArray(int a[],int n,int c,int l);
void printArray(int a[],int n);
void main()
{
    int n,c,l;
    printf("Enter array size(N): ");
    scanf("%d",&n);
    int a[n];
    inputArray(a,n);
    printf("Enter the element to be inserted: ");
    scanf("%d",&c);
    printf("Enter the location: ");
    scanf("%d",&l);
    insertInArray(a,n,c,l);
    printArray(a,n);
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
void printArray(int a[],int n)
{
    printf("Array contents are:\n");
    for (int i = 0; i < n+1; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }
}
void insertInArray(int a[],int n,int c,int l)
{
    for (int i = n; i>=l; i--)
    {
        a[i]=a[i-1];
    }
    a[l-1]=c;
}