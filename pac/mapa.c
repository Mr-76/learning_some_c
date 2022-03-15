#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"
void free_mapa(MAPA* mapa1){// usasr (*mapa1) //---> mapa1 eh um ponteiro *mapa1 pegar o valor	
	for(int i =0;i <(*mapa1).linhas;i++){
		free((*mapa1).matriz[i]);		
	}
	free((*mapa1).matriz);
	}

void aloc_mapa(MAPA* mapa1){
	(*mapa1).matriz = malloc(sizeof(char*) * (*mapa1).linhas);
	for(int i =0;i < (*mapa1).linhas; i++){
		(*mapa1).matriz[i] = malloc(sizeof(char)*(*mapa1).colunas);
	}
}

void read_mapa(MAPA* mapa1){
	(*mapa1).linhas = 5;
	(*mapa1).colunas = 11;
	char mapa[(*mapa1).linhas][(*mapa1).colunas];
	(*mapa1).matriz = mapa;
		

	FILE *file;
	file = fopen("mapa.txt","r");
	
	if(file == 0){
		printf("bye");
		exit(1);
	}
	
	aloc_mapa(mapa1);//so mapa1 pois mapa1 ja eh o ponteiro que read mapa recebe


	for(int i =0;i<(*mapa1).linhas;i++){
		fscanf(file,"%s",(*mapa1).matriz[i]);//ler linha e armazenar
	}
	
	fclose(file);
}
void print_mapa(MAPA* mapa1){	
	for(int i = 0;i < (*mapa1).linhas; i++){
		printf("%s\n",(*mapa1).matriz[i]);
	}
}

