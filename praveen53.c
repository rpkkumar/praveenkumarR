#include <stdio.h>
#include<conio.h>
 int main()
{
   int s, t, sum = 0, remainder;
 
  
   scanf("%d", &s);
 
   t = n;
 
   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }
 
   printf(" %d = %d\n", s, sum);
 
   return 0;
}
