#include <stdio.h>
#include<conio.h>
int main()
{
    int s, i;

    printf("Enter an integer: ");
    scanf("%d",&s);

    for(i=1; i<=10; ++i)
    {
       printf("\s%d",s*i);
    }
}
