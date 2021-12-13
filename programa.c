#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("******************************************\n");
	printf("* Bem vindo ao nosso jogo de adivinhacao *\n");	
	printf("******************************************\n");

	int numerosecreto = 42;
	int chute;
	int tentativas = 1;
	int pontos = 2000;

	while(1) {
		printf("voce tem %d pontos\n\n",pontos);
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
		
		pontos -= ((abs(chute - numerosecreto))/2);

		tentativas++;
	}

	printf("Fim de jogo.\n\n");
	printf("Voce acertou em %d tentativas\n\n", tentativas);
	printf("E terminou com %d pontos \n\n",pontos);
}
