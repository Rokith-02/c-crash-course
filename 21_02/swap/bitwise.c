#include<stdio.h>
int main()
{
        int a=7,i,pos,po,p;
        for(i=31;i>=0;i--){
        if(a&(1<<i))
        printf("1");
        else
        printf("0");}
        printf("\nenter the set position\n");
        scanf("%d",&pos);
        a=a|(1<<pos);
        for(i=31;i>=0;i--){
        if(a&(1<<i))
        printf("1");
        else
        printf("0");}
        printf("\nenter the clear position\n");
        scanf("%d",&po);
        a=a&~(1<<po);
        for(i=31;i>=0;i--){
        if(a&(1<<i))
        printf("1");
        else
        printf("0");}
        printf("\nenter the toggle position\n");
        scanf("%d",&p);
        a=a^(1<<p);
        for(i=31;i>=0;i--){
        if(a&(1<<i))
        printf("1");
        else
        printf("0");}
}
