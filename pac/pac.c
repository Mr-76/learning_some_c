#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "pac.h"

struct mapa mapa1;

int acabou(){
	return 0;
}

void free_mapa(){	
	for(int i =0;i <mapa1.linhas;i++){
		free(mapa1.matriz[i]);		
	}
	free(mapa1.matriz);
	}
void aloc_mapa(){
	mapa1.matriz = malloc(sizeof(char*) * mapa1.linhas);
	for(int i =0;i < mapa1.linhas; i++){
		mapa1.matriz[i] = malloc(sizeof(char)*mapa1.colunas);
	}
}

void read_mapa(){


	mapa1.linhas = 5;
	mapa1.colunas = 11;
	char mapa[mapa1.linhas][mapa1.colunas];
	mapa1.matriz = mapa;
		

	FILE *file;
	file = fopen("mapa.txt","r");
	
	if(file == 0){
		printf("bye");
		exit(1);
	}
	
	aloc_mapa();


	for(int i =0;i<mapa1.linhas;i++){
		fscanf(file,"%s",mapa1.matriz[i]);//ler linha e armazenar
	}
	
	fclose(file);
}
void print_mapa(){	
	for(int i = 0;i < mapa1.linhas; i++){
		printf("%s\n",mapa1.matriz[i]);
	}
}

void move(char direcao){
	int x;
	int y;
	for(int i =0;i < mapa1.linhas;i++){
		for(int j =0;j<mapa1.colunas;j++){
			if((mapa1.matriz[i][j]) == '@'){
				x = i;
				y = j;
				break;
			}
		}
	}
	
	switch(direcao){

		
		case 'a':

			if((mapa1.matriz[x][y-1] == '|') || (mapa1.matriz[x][y-1]== '-')){
				break;
			}
			
			mapa1.matriz[x][y] = '.';	
			mapa1.matriz[x][y-1] = '@';
			
			break;
		case 'w':

			if((mapa1.matriz[x-1][y] == '|') || (mapa1.matriz[x-1][y]== '-')){
				break;
			}
			
			mapa1.matriz[x][y] = '.';	
			mapa1.matriz[x-1][y] = '@';
			break;

		case 's':

			if((mapa1.matriz[x+1][y] == '|') || (mapa1.matriz[x+1][y]== '-')){
				break;
			}

			mapa1.matriz[x][y] = '.';
			mapa1.matriz[x+1][y] = '@';
			break;

		case 'd':
			if((mapa1.matriz[x][y+1] == '|') || (mapa1.matriz[x][y+1]== '-')){
				break;
			}

			mapa1.matriz[x][y] = '.';
			mapa1.matriz[x][y+1] = '@';
	
	}			
}


int main(){

	read_mapa();
	do {
			
		print_mapa();
		char comando;
		scanf(" %c",&comando);
		move(comando);
	}while(!acabou());
	free_mapa();	


return 0;
}


