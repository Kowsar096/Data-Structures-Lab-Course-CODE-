#include "stdio.h"
void Binary_search(char cha[],char c,int size)
{
    int first,last,middle;
    first = 0;
    last=size-1;
    while(first<=last)
    {
        middle = (first+last)/2;
        if(cha[middle]==c)
        {
            printf("\n%c is found at %d position\n",c,middle+1);
            break;
        }
        else if(cha[middle]<c)
        {
            first = middle+1;
        }
        else if(cha[middle]>c)
        {
            last = middle -1;
        }
    }
    if(first>last)
        printf("%c is not found in the string \n",c);
};
int main()
{
    char c;
    int n;
    printf("How many characters in your string : ");
    scanf("%d",&n);
    char ch[n+1];
    printf("Enter a string with ascending order : ");
    fflush(stdin);
    gets(ch);
    printf("Enter a character what you want to search : ");
    scanf("%c",&c);
    Binary_search(ch,c,n);
    return 0;
}
