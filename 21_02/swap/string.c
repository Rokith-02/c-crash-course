#include<stdio.h>
void fun(char*a)
{
        if(*a)
        {
                fun(a+1);
                printf("%c",*a);
        }
}
int main()
{
        char a[20]="rokith";
        fun(a);
}
