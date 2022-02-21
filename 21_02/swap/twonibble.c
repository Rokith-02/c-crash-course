#include<stdio.h>
int main()
{
        char a=7;
        int i;
        a=(((a&0x0f)<<4)|((a&0xf0)>>4));
        printf("%d\n",a);
        for(i=7;i>=0;i--)
        {
                if(a&(1<<i))
                printf("1");
                else
                printf("0");
        }
}
