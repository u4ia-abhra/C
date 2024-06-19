#include<stdio.h>
void main()
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    if (c>='a'&&c<='z' || c>='A'&&c<='Z')
    {
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            printf("The entered character %c is a vowel\n",c);
        }
        else
        {
            printf("The entered character %c is a consonant\n",c);
        }        
    }
    else
    {
        printf("The entered character %c is not an alphabet\n",c);
    }
    
}