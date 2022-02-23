#include<stdio.h>
#include<stdlib.h>
typedef struct ST
{
        char a;
        struct ST*next;
}st;
void add_end(st**);
void print(st*);
int main()
{
        st*hptr=0;
        char op;
        do{
                add_end(&hptr);
                printf("give (y) if you want to add node else (n)\n");
                scanf(" %c",&op);
        }while((op=='y')||(op=='Y'));
        print(hptr);
}
void add_end(st**ptr)
{
        st*temp=(st*)malloc(sizeof(st));
        scanf(" %c",&temp->a);
        if(*ptr==NULL)
        {
                temp->next=*ptr;
                *ptr=temp;
        }
        else
        {
                st*last=*ptr;
                while(last->next!=0)
                last=last->next;

                temp->next=last->next;
                last->next=temp;
        }
}
void print(st*ptr)
{
        while(ptr!=0)
        {
                printf("%c",ptr->a);
                ptr=ptr->next;
        }
}
