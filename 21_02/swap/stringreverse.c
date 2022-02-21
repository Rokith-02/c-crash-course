#include<stdio.h>
int main()
{
        char a[20]="rokith",temp;
        int i,count=0,j;
        for(i=0;a[i];i++)
        count++;
        printf("%d\n",count);
        for(i=0,j=count-1;i<j;i++,j--)
        {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
        }
        printf("%s\n",a);
}
