#include <stdio.h>
#include<conio.h>
int sum(int arr[], int s)
{
    int sum = 0; // initialize sum
    int i;
    for (i = 0; i < s; i++)
    sum += arr[i];
 
    return sum;
}
 
int main()
{
    int arr[] = {12,3,4,15};
    int s= sizeof(arr)/sizeof(arr[0]);
    printf("Sum of given array is %d", sum(arr, s));
    return 0;
}
