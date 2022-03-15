struct mapa{	
	char** matriz;
	int linhas;
	int colunas;
};

typedef struct mapa MAPA;//apelido para struct mapa


void free_mapa(MAPA* m);	
void aloc_mapa(MAPA* m);
void read_mapa(MAPA* m);
void print_mapa(MAPA* m);	
