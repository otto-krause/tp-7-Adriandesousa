#include <stdio.h>

int main() {
	int macri[2][3], i, j;
	for(i=0;i<2;i++){
		printf("Ingrese los numeros de la fila %d: \n", i+1);
		for(j=0;j<3;j++){
			printf("Numero %d: ", j+1);
			scanf("%d", &macri[i][j]);
		}
	}
	for(i=0;i<2;i++){
		printf("Los valores de la fila %d son: \n", i+1);
		for(j=0;j<3;j++){
			printf("Valor %d: %d \n", j+1, macri[i][j]);
		};
	}
	
	return 0;
}

