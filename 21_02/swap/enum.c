#include<stdio.h>
enum day{mon,yue,wed,thu,fri=8,sat,sun};
enum name{rokith,karthick,selva};
int fun()
{
        return selva;
}
int main()
{
        //enum day{mon,yue,wed,thu,fri,sat,sun};//valid same time local and global but it is taking local
        enum day d=thu;
        printf("%d ",d);
        (fun()==wed)?printf("both are equal\n"):printf("not equal\n");

}
