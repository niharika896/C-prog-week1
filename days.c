#include <stdio.h>

int main(){
	int d;
	printf("enter the number of days");
	scanf("%d",&d);
	int y=(int)(d/365);
	printf("it is %d years ",y);
	printf("and %d days",d-y*365);
	return 0;
}
