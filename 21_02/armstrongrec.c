#include<stdio.h>
#include<math.h>
int arm(int count,int n,int sum)
{
        int rem;
        if(n!=0)
        {
                rem=n%10;
                sum=sum+pow(rem,count);
                n/=10;
                arm(count,n,sum);
        }
        else
        return sum;
}
int main()
{
        int n,count=0,sum=0;
        printf("enter the number\n");
        scanf("%d",&n);
        int temp=n;
        int temp1=n;
        while(temp!=0)
        {
                temp/=10;
                count++;
        }
//      printf("%d",count);
        int a=arm(count,n,sum);
        if(temp1==a)
        printf("it is armstrong number\n");
        else
        printf("it is not a arm strong number\n");
}
