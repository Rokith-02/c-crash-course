//first occurance of the character
#include<stdio.h>
int main()
{
        char a[20]="embedded";
        char b='d';
        int i,j;
        for(i=0;a[i];i++)
        {
                if(a[i]==b)
                {
                        for(j=i;a[j];j++)
                        printf("%c",a[j]);
                        return 0;
                }
        }
}
