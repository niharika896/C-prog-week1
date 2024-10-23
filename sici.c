#include <stdio.h>

int main(){
	float p,r,t;
	printf("enter the principal amount");
	scanf("%f",&p);
	printf("enter the rate");
	scanf("%f",&r);
	printf("enter the time");
	scanf("%f",&t);
	printf("the si is %f\n",p*r*t/100);
	printf("the ci is %f",p*pow(1+r/100,t));
	return 0;
}
