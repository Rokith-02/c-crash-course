#include<stdio.h>
int main()
{
        volatile int a=1;//with volatle cade size is 135 without volatile code size is 130
        int i;
        for(i=0;i<10000;i++,a++)
        printf("%d\n",a);
}
