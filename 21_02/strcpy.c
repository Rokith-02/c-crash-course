//copy of string
#include<stdio.h>
int main()
{
        char a[20]="embedded";
        char b[20];
        int i,j;
        for(i=0;a[i];i++)
        {
                b[i]=a[i];
        }
        b[i]='\0';
        printf("%s",b);
}
