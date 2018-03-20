#include <stdio.h>
#include<conio.h>
int main()
{
   int s,y;
   scanf("%d %d",&s,&y);
   if(a!=0)
   {
       s=s^y;
      y=y^s;
      s=s^y;
   }
   printf("%d %d",s,y);
    return 0;
}
