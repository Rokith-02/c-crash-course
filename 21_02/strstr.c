//finding sub string using main string
#include<stdio.h>
int main()
{
        char a[20]="embedded";
        char b[20]="bed";
        int i,j;
        for(i=0;a[i];i++)
        {
                if(b[0]==a[i]);
                {
                        for(j=1;b[j];j++)
                        {
                                if(b[j]!=a[i+j])
                                break;
                        }
                                if(b[j]=='\0'){
                                printf("substring is there\n");
                                return 0;}
                }
        }
}
