#include<stdio.h>
int fact(int);
int main()
{
        int a;
        printf("enter the number\n");
        scanf("%d",&a);
        int b=fact(a);
        printf("%d",b);
}
int fact(int a)
{
        int sum=1;
        while(a!=0)
        {
                sum=sum*a;
                a--;
        }
        return sum;
}
