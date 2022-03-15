#include <stdio.h>
#include <string.h>
#include "soma.h"
#include "elemento.h"

struct elemento Fe;

int main() {
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
	return 0;
}
