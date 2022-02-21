#include<stdio.h>
int main()
{
//can't change the value
        int a=5,b=10;
        int const*p=&a;
        printf("%d\n",*p);
        p=&b;//valid
        printf("%d\n",*p);
        //*p=10;//invalid
        //printf("%d\n",*p);
//can't change the address
        int c=20,d=30;
        int *const ptr=&c;
        printf("%d\n",*ptr);
        //ptr=&d;//invalid
        //*ptr=40;//valid
        (*ptr)++;//valid
        printf("%d\n",*ptr);
//can't change the address and value
        int e=60,f=70;
        int const*const pt=&e;
        printf("%d\n",*pt);
        //*pt=10;//invalid
        //pt=&f;//invalid
}
