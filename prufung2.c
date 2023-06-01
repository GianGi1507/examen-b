#include <stdio.h>
int buscarlemento(char letra);

int main(){
	char letra;
	int cantidad=0;
	printf("Ingrese la letra y la buscaremos");
	scanf("%c", &letra);
	cantidad= buscarelemento(letra);
	printf("la cantidaad de elementos encontrados son: %d", cantidad);
}

int buscarelemento (char letra){
	int j, i, numelemento=0;
	char matriz[5] [6]= {
							{'A','B','C','D','A','A'},
							{'B','B','C','C','A','A'},
							{'G','H','J','A','G','T'},
							{'B','C','C','D','A','U'},
							{'I','O','O','P','C','A'},
						};
		for(i=0; i<5; i++){
			for(j=0; j<6; j++){
				if(matriz[i][j]==letra){
					numelemento++;
				}
			}
		}
		return numelemento;

}


