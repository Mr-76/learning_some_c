#include <stdio.h>


int main(){
	
	int number;

	scanf("%d",&number);

	for (int i = 1;i<(number+1);i++){
		if (number % i == 0){
			printf("%d\n",i);
		}
		else{
			continue;
		}
	}



	return 0;
}

