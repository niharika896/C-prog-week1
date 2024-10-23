#include <stdio.h>

int main(){
	int a,b,c;
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("swapping....\n");
	printf("the first number is %d ",a);
	printf("the second number is %d",b);
	return 0;
}
