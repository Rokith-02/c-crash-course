#include<stdio.h>
void fibo(int a,int b,int c,int n)
{
        if(n!=0)
        {
                c=a+b;
                printf("%d\n",a);
                a=b;
                b=c;
                n--;
                fibo(a,b,c,n);
        }
        return;
}
int main()
{
        int a=0,b=1,c,n;
        printf("enter the number\n");
        scanf("%d",&n);
        fibo(a,b,c,n);
}
