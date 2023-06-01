#include <stdio.h>
int main(){
	int vector[10] ;
	int i, j, k, z, opcion=1, condicion=0;
	printf("ingresa 10 numeros para tu vector" );
	for(i=0; i<10; i++){
		scanf("%d", &vector[i]);
	}
	
	for(k=0; k<10; k++){
		if(vector[k] %2==0){
			printf("Su vector par: %d\n", vector[k]);
		}else{
			printf("Su vector imppar: %d\n", vector[k]);
		}
	}
			
		
	do{
		printf("Quieres ver tu vector inverso? 1.SI 2.NO");
		scanf("%d", &opcion);
		switch (opcion){
			case 1:
				for(j=9; j>=0; j--){
					printf("%d\n", vector[j]);
				}
			break;
			case 2:
				return 0;
			break;
		}
	}while(opcion=1);
	
	return 0;
}

