#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int meuabs(int valor){
//funcao para converter em positivo sempre
if (valor < 0){
	valor *= -1;
	return valor;
}
else{
return valor;
}

}

int main(){
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");	
	printf("******************************************\n");

	int seed = time(0);
	srand(seed);

	int numerosecreto = rand() % 100;
	int chute;
	int tentativas = 1;
	double pontos = 2000;

	while(1) {
		printf("debug o numero eh %d ",numerosecreto);
		printf("voce tem %.2lf pontos\n\n",pontos);
		printf("Tentativa %d\n\n", tentativas);
		printf("Qual e o seu chute? ");
		scanf("%d", &chute);

		printf("Seu chute foi %d\n\n", chute);

		if(chute < 0) {
			printf("Voce nao pode chutar numeros negativos\n\n");
			continue;
		}

		int acertou = (chute == numerosecreto);
		int maior = chute > numerosecreto;

 		if(acertou) {
			printf("Parabens! Voce acertou!\n\n");
			printf("Jogue de novo, voce e um bom jogador!!\n\n");

			break;
		}
		
			
		else if(maior) {
				printf("Seu chute foi maior que o numero secreto\n\n");
		}

		else {
			printf("Seu chute foi menor que o numero secreto\n\n");
		}
			//se ele acertar essa parte do codigo nao eh executada entao para economizar linha
		//colocar o retirar de pontos aquie ao envez de no else if e no else
		
		pontos -= ((meuabs(chute - numerosecreto))/2.0);

		tentativas++;
	}

	printf("Fim de jogo.\n\n");
	printf("Voce acertou em %d tentativas\n\n", tentativas);
	printf("E terminou com %.2lf pontos \n\n",pontos);
}
