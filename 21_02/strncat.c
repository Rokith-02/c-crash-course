#include<stdio.h>
int main()
{
        char a[20]="rokith";
        char b[20]="karthick";
        int n=0,i=0,j=0;
        for(i=0;a[i]!='\0';i++);
        for(j=0,n=0;(n<5)&&(b[j]);j++,n++,i++)
        a[i]=b[j];
        a[i]='\0';
        printf("%s",a);
}
