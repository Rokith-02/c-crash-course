#include<stdio.h>
void fibo(int,int,int,int);
int main()
{
        int a=0,b=1,c,n;
        printf("enter the element\n");
        scanf("%d",&n);
        fibo(a,b,c,n);
}
void fibo(int a,int b,int c,int n)
{
        int i;
        for(i=0;i<n;i++)
        {
                c=a+b;
                printf("%d\n",a);
                a=b;
                b=c;
        }
}
