#include<stdio.h>
int main()
{
        int i,j,n=6,k=1;
        for(i=0;i<n;i++)
        {
        for(j=0;j<i+1;j++)
        {
                if(i%2==0){
                printf("%d ",k);k=k+2;}
                else
                printf("%d ",(1+j)*2);
        }
        printf("\n");
        }
}
/*
1
2 4
3 5  7
2 4  6  8
9 11 13 15 17
2 4  6  8  10 12*/
