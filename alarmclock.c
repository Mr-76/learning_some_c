#include <stdio.h>
#include <stdbool.h>
int main(){
	int  v1,v2,v3,v4;
	int dia = 0;
	int minutos;
	while(true){
		scanf("%d %d %d %d",&v1, &v2, &v3, &v4);
		
		if(v1 == 0 && v2 == 0 && v3 == 0 && v4 == 0){ 
			break;
		}



		if (v1 == 0){
			v1 = 24;
		}
		if (v3 == 0){
			v3 = 24;
		}
		
		

		v1  = (v1*60 + v2);
		v3 = (v3*60 + v4);


		if(v1>v3){
			dia = 24*60;
			minutos = dia - (v1 - v3);
			printf("%d\n",minutos);
		}
		
		if(v3>v1){
			minutos = (v3 - v1);
			printf("%d\n",minutos);
		}	
		
		
	}
	return 0;
}
