#include <stdio.h>


int main(){
		
	int numero,horas;
	double salarioh;
	double salariot;
	scanf("%d %d %lf", &numero,&horas,&salarioh);


	salariot = salarioh*horas;

	printf("NUMBER = %d\nSALARY = U$ %.2lf\n",numero,salariot);


	return 0;
}
