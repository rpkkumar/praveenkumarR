#include<stdio.h>
#include<conio.h>
int main()
{
    int s;
    scanf("%d",&s);
    if(s%2==0)
    {
        printf("%d",s);
    }
    else
    {
        printf("%d",(s-1));
    }
    return 0;
}
