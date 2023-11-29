#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int matriz[3][12]={{0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0,0,0}}, i, j, Lineas=0, total=0, a, b;
	while(a>=1){
		printf("Ingrese linea: ");
		scanf("%d", &a);
		if(a<=0){
			break;
		}
		printf("Ingrese coche: ");
		scanf("%d", &b);
		printf("Ingrese lo Recaudado: ");
		scanf("%d", &matriz[a-1][b-1]);
	}
	system("cls");
	for(i=0;i<3;i++){
		for(j=0;j<12;j++){
			Lineas=Lineas+matriz[i][j];
		}
		printf("La Linea %d \nRecaudo: %d\n", i+1, Lineas);
		Lineas=0;
	}
	for(i=0;i<3;i++){
		printf("Linea %d \n", i+1);
		for(j=0;j<12;j++){
			printf("Coche %d Recaudo: %d \n", j+1, matriz[i][j]);
			total=total+matriz[i][j];
		}
	}
	printf("La recaudacion total fue de: %d", total);
	return 0;
}

