#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "soma.h"
#include "elemento.h"

struct elemento Fe;

int main() {

	Fe.tipo_toxico = malloc(sizeof(char*)*2);
	Fe.tipo_toxico[0] = malloc((sizeof(char)) * 15);
	Fe.tipo_toxico[1] = malloc((sizeof(char)) * 7);



	strcpy(Fe.tipo_toxico[0],"nao toxico");
	strcpy(Fe.tipo_toxico[1],"metal");

	strcpy(Fe.nome,"Ferro");
	Fe.eletroneg = 1.83;
	Fe.numero_atom = 26;
	strcpy(Fe.estado,"Solido");

	int a = 0;
	soma(&a);
	printf("Hello, world!\n");
	printf("%d\n",a);
	printf("%s\n",Fe.nome);
	printf("%s\n",Fe.estado);
	printf("%d\n",Fe.numero_atom);
	printf("%.2f\n",Fe.eletroneg);
	
	printf("%s\n",Fe.tipo_toxico[0]);
	printf("%s\n",Fe.tipo_toxico[1]);

	return 0;
}
