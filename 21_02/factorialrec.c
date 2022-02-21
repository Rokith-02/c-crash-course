#include<stdio.h>
int fun(int n,int sum)
{
        if(n!=0)
        {
                sum=sum*n;
                n--;
                fun(n,sum);
        }
        else
        return sum;
}
int main()
{
        int n,sum=1;
        printf("enter the number\n");
        scanf("%d",&n);
        int r=fun(n,sum);
        printf("%d\n",r);
}
