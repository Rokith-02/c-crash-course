#include<stdio.h>
void fun(char (*p)[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("%c\n",((*p)[i]));
	}
}
int main()
{
	char a[5]={'a','b','c','d','e'};
	char (*cp)[5];
	cp=&a;
	void (*fp)(char (*p)[5]);
	fp=fun;
	fp(cp);
}
