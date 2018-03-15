#include<stdio.h>
#include<conio.h>
void main()
{
    int g,count=0;
    printf("ENTER G NUMBER\t");
    scanf("%d",&g);
    while(g<=100000000000)
    {
       count++; 
    }
    printf("THE NUMBER OF NUMERIC DIGITS ARE:\t",count);
}
