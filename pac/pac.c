#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *file;
	file = fopen("mapa.txt","r");
	
	if(file == 0){
		printf("bye");
		exit(1);
	}
	
	char** mapa = malloc(sizeof(char*) * 5);

	for(int i =0;i < 5; i++){
		mapa[i] = malloc(sizeof(char)*11);
	}
	
	for(int i =0;i<5;i++){
		fscanf(file,"%s",mapa[i]);//ler linha e armazenar
	}
	

	for(int i = 0;i < 5; i++){
		printf("%s\n",mapa[i]);
	}

	

	fclose(file);
	
	for(int i =0;i <5;i++){
		free(mapa[i]);		
	}

	free(mapa);
return 0;
}


