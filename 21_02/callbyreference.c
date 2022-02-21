#include<stdio.h>
int fun(int*a)
{
        *a=20;
        printf("%d\n",*a);
}
int main()
{
        int a;
        printf("enter the number\n");
        scanf("%d",&a);
        fun(&a);
        printf("%d\n",a);
}
