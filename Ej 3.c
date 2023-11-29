#include <stdio.h>

int main() {
	int macri[2][3], i, j, menor, suma=0;
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
		for(j=0;j<3;j++){
			if(i==0 && j==0){
				menor=macri[i][j];
			}
			if(macri[i][j]<=menor){
				menor=macri[i][j];
			}
			suma=suma+macri[i][j];
		}
	}
	for(i=0;i<2;i++){
		printf("Los valores de la fila %d son: \n", i+1);
		for(j=0;j<3;j++){
			printf("Valor %d: %d \t", j+1, macri[i][j]);
		}
		printf("\n");
	}
	printf("El menor elemento de la matriz es: %d\n", menor);
	printf("La suma de los elementos de la matriz es: %d\n", suma);
	
	return 0;
}

