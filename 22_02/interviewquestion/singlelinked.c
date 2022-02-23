#include<stdio.h>
#include<stdlib.h>
typedef struct ST
{
        int roll;
        char name[20];
        struct ST*next;
}st;
void add_end(st**);
void print(st*);
void delete(st**);
void deleteall(st**);
void revlink(st**);
void count(st*);
int main()
{
        st*hptr=0;
        char op;
        do{
                add_end(&hptr);
                printf("do you want to add another node\n");
                scanf(" %c",&op);
        }while((op=='y')||(op=='Y'));
        print(hptr);
        count(hptr);
        revlink(&hptr);
        print(hptr);
        delete(&hptr);
        print(hptr);
        deleteall(&hptr);
        print(hptr);
}
void add_end(st**ptr)
{
        st*temp=(st*)malloc(sizeof(st));
        printf("enter the roll number and name\n");
        scanf("%d\n %s",&temp->roll,temp->name);
        if(*ptr==NULL){
		temp->next=*ptr;
        *ptr=temp;}
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
                printf("%d\n %s\n",ptr->roll,ptr->name);
                ptr=ptr->next;
        }
}
void count(st*ptr)
{
        int count=0;
        while(ptr!=0)
        {
                count++;
                ptr=ptr->next;
        }
        printf("count:%d\n",count);
}
void revlink(st**ptr)
{
        st*q=0;
        st*r;
        while(*ptr!=0)
        {
                r=q;
                q=*ptr;
		*ptr=(*ptr)->next;
                q->next=r;
        }
        *ptr=q;
}
void delete(st**ptr)
{
        int n;
        printf("enter the roll number to delete\n");
        scanf("%d",&n);
        st*temp=*ptr;
        st*prv;
        while(temp!=0)
        {
                if(n==temp->roll)
                {
                        if(*ptr==temp)
                        *ptr=temp->next;
                        else
                        prv->next=temp->next;

                        free(temp);
                        temp=NULL;
                        return;
                }
                else
                {
                        prv=temp;
                        temp=temp->next;
                }
        }
}
void deleteall(st**ptr)
{
        st*temp;
        while(*ptr!=0)
        {
                temp=*ptr;
                *ptr=temp->next;
                free(temp);
        }
}
