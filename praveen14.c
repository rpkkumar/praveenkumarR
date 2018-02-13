#include <stdio.h>
int main(){
	int num1,num2,result,i;
	printf("\nEnter the lowest limit :");
	scanf("%d",&num1);
	printf("\nEnter the highest limit :");
	scanf("%d",&num2);
	for(i=num1+1;i<num2;i++){
		result = i % 2;
		if(result != 0)
			printf("%d",i);
		else
			continue;
	}
	
	return 0;
}
