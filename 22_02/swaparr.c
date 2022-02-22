#include<stdio.h>
#define n 5
enum name{yes=1};
int fun(int*const a,int*const b)
{
        int i,j;
        for(i=0,j=0;(i<n)&&(j<n);i++,j++)
        {
                a[i]=a[i]^b[i]^(b[i]=a[i]);
        }
        if(i==n)
        return yes;
}
int main()
{
        int i;
        int a[5]={1,2,3,4,5};
        int b[5]={5,4,3,2,1};
        printf("before swap\n");
        for(i=0;i<n;i++)
        printf("%d %d \n",a[i],b[i]);
        int (*fp)(int*a,int*b);
        fp=fun;
        int r=fp(a,b);
        printf("after swap\n");
        for(i=0;i<n;i++)
        printf("%d %d \n",a[i],b[i]);
        if(r==1)
        printf("successfully swapped\n");
}
