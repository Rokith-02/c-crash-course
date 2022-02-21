#include<stdio.h>
#include<math.h>
int main()
{
        int n,count=0,i;
        printf("enter the number\n");
        scanf("%d",&n);
        int temp=n,sum=0,rem;
        while(n!=0)
        {
                n=n/10;
                count++;
        }
        for(i=0;i<count;i++)
        {
                rem=temp%10;
                sum=sum+pow(rem,count);
                temp=temp/10;
        }
        printf("%d",sum);
}
