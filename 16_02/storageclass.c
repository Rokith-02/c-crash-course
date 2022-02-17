#include<stdio.h>
/*AUTO
int main()
{
        auto int a=10;
        printf("%d\n",a);//valid
        {
        auto int b=20;
        printf("%d\n",a);//valid
        printf("%d\n",b);//valid
        }
        //printf("%d\n",b);//error
}*/
//register
/*int main()
{
        register int a=10;
        printf("%d",a);//valid
        {
                register int b=1;
                printf("%d",a);//valid
        }
//      printf("%d",b);//invaild
}*/
//static
/*void fun(int a)
{
        printf("%d\n",a);
        a++;
}
int main()
{
        static int a=10;
        fun(a);
        fun(a);
}*/
//extern
//file1:
/*int main()
{
        extern int a;
        printf("%d",a);
}*/
//file2:
//int a=10;
