#include<stdio.h>
int main()
{
        int i,j,n=5,k=0,d;
        for(i=1;i<=n;i++)
        {
        k=i;
        d=n-1;
        for(j=1;j<i+1;j++)
        {
                printf("%d  ",k);
                k=k+d;
                d--;
        }
        printf("\n");
        }
}
/*
1
2  6
3  7  10
4  8  11  13
5  9  12  14  15*/
