#include <stdio.h>

int main(){
	float a,b;
	printf("enter the first floating number");
	scanf("%f",&a);
	printf("enter the second floating number");
	scanf("%f",&b);
	printf("the product in floating point is %f\n",(a*b));
	int c=a*b;
	printf("the product in integer is %d",c);
	return 0;
}


