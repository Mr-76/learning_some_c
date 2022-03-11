#include <stdio.h>

int main(){
	
	
	int code1,code2,unit1,unit2;
	double value1,value2,valort;


	scanf("%d %d %lf %d %d %lf",&code1,&unit1,&value1,&code2,&unit2,&value2);
	
	valort = (value1 * unit1) + (value2 * unit2);

	printf("VALOR A PAGAR: R$ %.2lf\n",valort);	

	
	
	
	
	
	return 0;

}
