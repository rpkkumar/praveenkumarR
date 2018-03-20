#include<stdio.h>
#include<conio.h>
int main()
{
    int s,i;
    int a=1,b=1,c;
    scanf("%d",&s);
    printf("%d  %d  ",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    }
    return 0;
}
