#include <stdio.h>

int main(){
	float km;
	printf("enter the distance in kilometer");
	scanf("%f",&km);
	printf("the distance in meter is %f\n",km*1000);
	printf("the distance in centimeter is %f\n",km*100000);
	printf("the distance in millimeter is %f\n",km*1000000);
	return 0;
}
