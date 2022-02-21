#include<stdio.h>
int main()
{
        int i,j,n=5,s,k;
        for(i=0;i<n;i++)
        {
                for(s=0;s<n-i-1;s++)
                printf("  ");
                for(j=0,k=65;j<i+1;j++)
                {
                        printf("%c ",k++);//abcdef pattern
                }
                printf("\n");
        }
}

/*  
          *
	 **
	***
       *****/
