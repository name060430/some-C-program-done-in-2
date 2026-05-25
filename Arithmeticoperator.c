#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d%d",&a,&b);
	printf("\nSum = %d ",a+b);
	printf("\nDifference = %d",a-b);
	printf("\nProduct = %d",a*b);
	printf("\nQuotient = %d",a/b);
	printf("\nRemainder = %d",a%b);
	return 0;
}