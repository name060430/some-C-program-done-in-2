#include<stdio.h>
int main(){
	int n1,n2,n3,grt;
	printf("Enter the value of N1, N2 and N3: ");
	scanf("%d%d%d",&n1,&n2,&n3);
	grt = (n1>n2&&n1>n3)?n1:((n2>n3)?n2:n3);
	printf("The greatest among three number is %d ",grt);
	return 0;
}