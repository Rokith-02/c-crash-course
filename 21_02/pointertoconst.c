#include<stdio.h>
int main()
{
        const int a=5,b=10;
        int*p=&a;

        printf("%d\n",*p);
        p=&b;
        printf("%d\n",*p);
        //*p=1;/invalid
        printf("%d\n",*p);
}
