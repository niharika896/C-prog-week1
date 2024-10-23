#include <stdio.h>
#include <math.h>
int main(){
	float u,a,t;
	printf("enter u,a,t");
	scanf("%f,%f,%f",&u,&a,&t);
	printf("s= %f",(u*t + 0.5*a*t*t));
	return 0;
}
