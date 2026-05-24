#include<stdio.h>
int main(){
	int a,b;
	char ch;
	printf("Author : Risabh Bhattarai\n");
	printf("Enter two number a and b: ");
	scanf("%d%d",&a,&b);
	fflush(stdin);
	printf("Enter your choice + - * /");
	ch = getchar();
	switch(ch){
		case '+':
			printf("%d + %d = %d",a,b,a+b);
			break;
		case '-':
			printf("%d - %d = %d",a,b,a-b);
			break;
		case '*':
			printf("%d * %d = %d",a,b,a*b);
			break;
		case '/':
		printf("%d / %d = %d",a,b,a/b);
			break;
		default:
			printf("Please select among(+ - * /)");
			break;
	}
}