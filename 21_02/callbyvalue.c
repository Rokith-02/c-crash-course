#include<stdio.h>
void fun(int a)
{
        a=10;
        printf("%d\n",a);
}
int main()
{
        int a;
        printf("enter the number\n");
        scanf("%d",&a);
        fun(a);
        printf("%d\n",a);
}
