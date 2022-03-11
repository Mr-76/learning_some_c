#include <stdio.h>

int main(){
	int diast,dias,anos,meses;
	int resto;
	scanf("%d",&diast);

	anos = diast / (int) 365;

	resto = (diast) - (anos * 365);
	
	meses = resto / 30;
	resto = (resto) - (meses*30);

	dias = resto;


	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anos,meses,dias);


	return 0;
}



