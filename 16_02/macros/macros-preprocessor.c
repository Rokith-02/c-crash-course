#include<stdio.h>
/*#define max 100
int main()
{
        printf("%d",max);
}*/
/*#define fun(a,b) a+b
int main(){
        printf("%d",fun(1,2));
}*/
/*#define fun(a,b) a##b  //token pasting
int main(){
        printf("%d",fun(12,23));
}*/
/*#define fun(a) #a  //string literal
int main()
{
        printf("%s",fun(12));
}*/
/*#define print(x)\
        for(int i=0;i<2;i++){\
        printf("%d",x);\
        }
int main()
{
        #ifdef max // second prog
        print(10);
        #endif //second prog
}*/
/*int main()
{
        printf("%s\n",__TIME__);
        printf("%s\n",__DATE__);
        printf("%d\n",__LINE__);
        printf("%s\n",__FILE__);
}*/
/*#define max 12
int main()
{
        printf("%d",max);
#undef max
        int max=10;
        printf("%d",max);
}*/
/*static inline int fun(int x,int y){return x+y;}
int main()
{
        int r=fun(1,2);
        printf("%d",r);
}*/
/*void fun(int,int);
#define fun(a,b) printf("%d",a*b);
int main()
{
        int a=1,b=2;
        fun(a,b);
#undef fun
        fun(a,b);
}
void fun(int a,int b)
{
        printf("%d\n",b-a);
}*/
