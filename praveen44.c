#include <stdio.h>
#include<conio.h>
int main()
{
 int d,i,a=0;
 scanf("%d",&d);
 for(i=1;i<=10;i++)
 {
  if(d==i)
   a++;
    }
    if(a==1)
    printf("yes");
      else
   printf("no");
  return 0;
}
