#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include "pac.h"
#include "mapa.h"


//struct mapa mapa1;
MAPA mapa1;

int acabou(){
	return 0;
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

	read_mapa(&mapa1);
	do {
			
		print_mapa(&mapa1);
		char comando;
		scanf(" %c",&comando);
		move(comando);
	}while(!acabou());
	free_mapa(&mapa1);	


return 0;
}


