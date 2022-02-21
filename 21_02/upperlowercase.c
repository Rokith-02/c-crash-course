#include<stdio.h>
int main()
{
        char a[20]="rokith";
        char b[20]="ROKITH";
        int i;
        for(i=0;a[i];i++)
        {
                if(a[i]>='a'||a[i]<='z')
                a[i]=a[i]-32;
                if(b[i]>='A'||b[i]<='Z')
                b[i]=b[i]+32;
        }
        printf("%s\n",a);
        printf("%s\n",b);
}
