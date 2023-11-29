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
	for(i=0;i<3;i++){
		macri[0][i]=macri[0][i]*4;
	}
	for(j=0;j<2;j++){
		macri[j][2]=macri[j][2]*3;
	}
	for(i=0;i<2;i++){
		printf("\nLos valores de la fila %d son: \n", i+1);
		for(j=0;j<3;j++){
			printf("Valor %d: %d \t", j+1, macri[i][j]);
		}
	}
	
	return 0;
}

