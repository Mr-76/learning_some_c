#include<stdio.h>


int main(){

	double media;
	double nota1;
	double nota2;
	double nota3;

	scanf("%lf %lf %lf",&nota1, &nota2, &nota3);

	media = (nota1/10*2) + (nota2/10 * 3) + (nota3/10 * 5);

	printf("MEDIA = %.1lf\n",media);

	return 0;
}
