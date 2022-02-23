//swap the values of 2 struct elements , find area by passing struct to fn
//use fn pointers , macro fn
#include<stdio.h>
#define swap(x,y)  x=x^y^(y=x)
typedef struct st
{
        int len;
        int brt;
        int area;
}rect;
int fun(int*p,int*q)
{
        return (*p)*(*q);
}
int main()
{
        rect a={10,11};
        swap(a.len,a.brt);
        printf("%d\n%d\n",a.len,a.brt);
        int (*fp)(int*p,int*q);
        fp=fun;
        a.area=fp(&a.len,&a.brt);
        printf("%d\n",a.area);
}
