#include <stdio.h>

int abs(int valor){
	int resultado;
	if (valor < 0){

		resultado = (valor)*(-1);
	}
	else{
	resultado = valor;
	}
	return resultado;
}
int main(){

	int a,b,c,maior1,maiort;

	scanf("%d %d %d",&a,&b,&c);

	maior1 = ((a+b) + abs(a-b))/2;
	
	maiort = ((maior1+c) + abs(maior1-c))/2;

	printf("%d eh o maior\n",maiort);

	return 0;
}
