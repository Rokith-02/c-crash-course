//concatenate two string
#include<stdio.h>
int r=10;
int main()
{
        char a[20]="rokith";
        char b[20]="karthick";
        int i,j;
        for(i=0;a[i]!='\0';i++);
        for(j=0;b[j];j++,i++)
        {
                a[i]=b[j];
        }
        a[i]='\0';
        printf("%s",a);
}
