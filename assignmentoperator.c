#include<stdio.h>
int main(){
	int a = 89,b=79;
	printf("\nThe  value of a is %d.",a);
	a%=b; //a=a/b; // 89*79 = 7031
	printf("\nThe updated value of a is %d.",a);
}