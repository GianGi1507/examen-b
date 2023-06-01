#include <stdio.h>

int main(){
	int matrizeins[3][3], matrizzwei[3][3], matrizdrei[3][3];
	int i=0, j=0;
	printf("para la primera");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matrizeins[i][j]);
		}
	}
	printf("para el segundo");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matrizzwei[i][j]);
		}
	}


	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matrizdrei[i][j]=matrizeins[i][j]*
			matrizzwei[i][j];
			
		}
	}
	printf("[%d] [%d]", i, j);



	
}




