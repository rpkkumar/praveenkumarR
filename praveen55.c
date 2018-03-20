#include<stdio.h>
#include<conio.h>
int main(void) {
	int s,m,prod;
	scanf("%d %d",&s,&m);
	prod=s*m;
	if(prod%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
	return 0;
}
