#include <stdio.h>
#include<math.h>
int main()
{
    int no,s,i,count=0;
    scanf("%d %d",&no,&s);
    for(i=0;i<=s;i++)
    {
    if(pow(2,i)==no)
    ++count;
    }
    if(count>0)
    printf("yes");
    else
    printf("no");
    return 0;
}
