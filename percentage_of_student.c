#include <stdio.h>

int main(){
	float a,b,c,d,e;
	printf("enter marks of student");
	scanf("%f,%f,%f,%f,%f",&a,&b,&c,&d,&e);
	printf("the precentage of the student is %f %%",(a+b+c+d+e)/5);
	return 0;
}
