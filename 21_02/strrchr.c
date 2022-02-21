//finding first occurance of char in reverse
#include<stdio.h>
#include<string.h>
int main()
{
        char a[20]="embedded";
        char b='m';
        int i,j;
        int c=strlen(a);
        for(i=c-1;i>=0;i--)
        {
                if(a[i]==b)
                {
                        for(j=i;a[j];j++)
                        printf("%c",a[j]);
                }
        }
}
