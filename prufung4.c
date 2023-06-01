#include <stdio.h>
#include <stdlib.h>

int promediomatriz();

int main(){
	int sumafinal=0;
	
	sumafinal= promediomatriz();
	printf("La SUMA DE SUS NUMEROS ALEATORIOS ES: %d", sumafinal);
	return 0;
}

int promediomatriz(){
	int storage[12];
	int res=0, i, suma;
	
	for(i=0; i<12; i++){
		storage[i] = 1 + rand() % (6 - 1);
		
	}for(i=0; i<12; i++){
		printf("%d\n", storage[i]);
	}
	for(i=0; i<12; i++){
		suma += storage[i];
	}
	 
	return suma;
}

