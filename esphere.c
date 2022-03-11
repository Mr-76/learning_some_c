#include <stdio.h>


int main(){

	double r,volume;
	double pi = 3.14159;
	int poweroff = 3;
	
	scanf("%lf",&r);

	volume = (4/3.0) * (pi) * (r*r*r);

	printf("VOLUME = %.3lf\n",volume);

	return 0;
}
