#include <stdio.h>
void main()
{
    int a,j,sum =0;
    
    printf("Enter a positive integer:");
    scanf("%d",&a);

    for(j=1;j <= a;++j)
    {
        sum += j;   
    }
     printf("Sum = %d",sum);
    
     }
