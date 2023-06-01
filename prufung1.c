#include <stdio.h>
int multiplicaEnteros(int a, int b);
int main(){
	int a, b, resu=0;
	printf("INGRESE DOS NUMEROS ENTEROS\n");
	scanf("\n%d", &a);
	scanf("\n%d", &b);
	resu= multiplicaEnteros(a, b);
	printf("Su resultado es: %d", resu);
	
	
	return 0;
}

int multiplicaEnteros(a, b){
	int c, res=0, i;
	printf("ingresa cuantas veces se debe repetir\n");
	scanf("\n%d", &c);
	for(i=0; i<c; i++){
		res+= a*b;
	}
	return res;
	
}
