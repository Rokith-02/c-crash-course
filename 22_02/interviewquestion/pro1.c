/*//program to swap numbers without using temp variables
#include<stdio.h>
int main()
{
        int a=10,b=20;
        //a=a+b-(b=a);
        //a=a*b/(b=a);
        a=a^b^(b=a);
        printf("%d %d",a,b);
}*/
/*//program to find multiples of 4 without using multiply
#include<stdio.h>
int main()
{
        int n,i;
        printf("enter number to find multiples of 4's with in that\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                if(i%4==0)
                printf("multiples of 4 is %d\n",i);
        }
}*/
/*//Reverse a string
#include<stdio.h>
void fun(char*a)
{
        if(*a)
        {
                fun(a+1);
                printf("%c",*a);
        }
        return;
}
int main()
{
        char a[20]="rokith";
        fun(a);
}*/
/*//Reverse a string
#include<stdio.h>
#include<string.h>
int main()
{
        char a[20]="rokith";
        int s=strlen(a),i,j;
        for(i=0,j=s-1;i<j;i++,j--)
        a[i]=a[i]^a[j]^(a[j]=a[i]);
        printf("%s\n",a);
}*/
//constant pointer and pointer to constant
#include<stdio.h>
int main()
{
        int a=10,b=20;
        const int*p=&a;//pointer to constant here we can't change the value
        p=&b;//but address can change
        //*p=30;//invalid
        printf("%d\n",*p);
        int*const ptr=&a;//constant pointer here we can't change the address
        //ptr=&b;//invalid
        *ptr=40;//but value can change
        printf("%d\n",*ptr);
}
