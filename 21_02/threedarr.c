#include<stdio.h>
void fun(int (*a)[2][2],int n)
{
        int i,j,k;
        for(i=0;i<2;i++)
        {
                for(j=0;j<2;j++)
                {
                        for(k=0;k<2;k++)
                        {
                                //printf("%d",*(*(*(a+i)+j)+k));
                                printf("%d",a[i][j][k]);
                        }
                        if(k==2)
                        printf("\n");
                }
        printf("\n");
        }
}
int main()
{
        int a[2][2][2];
        int i,j,k;
        for(i=0;i<2;i++)
        {
        for(j=0;j<2;j++)
        {
        for(k=0;k<2;k++)
        {
                scanf("%d",&a[i][j][k]);
        }
        }
        }

        for(i=0;i<2;i++)
        {
                for(j=0;j<2;j++)
                {
			for(k=0;k<2;k++)
                        {
                                printf("%d",*(*(*(a+i)+j)+k));
                        }
                        if(k==2)
                        printf("\n");
                }
                printf("\n");
        }
        printf("printing using fun\n");
        fun(a,2);
}
