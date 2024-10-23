#include <stdio.h>
#include <math.h>
int main(){
	float m,h,v;
	printf("enter m,h,v");
	scanf("%f,%f,%f",&m,&h,&v);
	printf("E= %f",m*9.8*h + 0.5*m*v*v);
	return 0;
}
