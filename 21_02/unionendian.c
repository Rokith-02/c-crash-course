#include<stdio.h>
union st
{
        int a;
        char b;
}s;
int main()
{
        s.a=300;
        if(s.b==44)
        printf("little endian\n");
        else
        printf("big endian\n");
}
