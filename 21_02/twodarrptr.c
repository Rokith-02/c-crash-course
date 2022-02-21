#include<stdio.h>
int main()
{
        int a[2][2];
        int i,j;
        printf("enter the elements\n");
        for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        scanf("%d",&a[i][j]);
        for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        printf("%d ",a[i][j]);
        printf("\n");
        int (*p)[2];
        p=a;
        for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        printf("%d ",*(*(p+i)+j));
        printf("\n");

}
