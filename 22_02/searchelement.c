#include<stdio.h>
#define max 5
enum day{yes=1,no};
int fun(int*const p,int ch)
{
        int i;
        for(i=0;i<max;i++)
        {
                if(ch==*(p+i))
                {
                        return yes;
                }
        }
        if(i==max)
        return no;
}
int main()
{
        int a[5]={1,2,3,4,5};
        int ch;
        int (*fp)(int*,int);
        fp=fun;
        printf("enter the search element\n");
        scanf("%d",&ch);
        int i=fp(a,ch);
        if(i==1)
        printf("element found\n");
        else
        printf("not found\n");
}
