#include <stdio.h>
#include <stdlib.h>

int main() {
	int notas[100][3], i, j, m, l, t, nn, c, suma;
	float promedio;
	for(i=0;i<3;i++){
		printf("Notas alumno %d:\n", i+1);
		for(j=0;j<3;j++){
			printf("-Trimestre %d: ", j+1);
			scanf("%d", &notas[i][j]);
		}
	}
	do{
		printf("Desea corregir alguna nota? (1-Si/0-No)");
		scanf("%d", &m);
		if(m==1){
			printf("Ingrese numero de Legajo: ");
			scanf("%d", &l);
			printf("Ingrese trimestre: ");
			scanf("%d", &t);
			printf("Ingrese la nueva nota: ");
			scanf("%d", &nn);
			printf("Desea modificar la nota del alumno de %d a %d (1-Si/0-No):", notas[l-1][t-1], nn);
			scanf("%d", &c);
			if(c==1){
				notas[l-1][t-1]=nn;
			}
			else{
				if(c==0){
					printf("Desea continuar sin modificar la nota? (1-Si/0-No):");
					scanf("%d", &c);
					if(c==1){
						nn=0;
					}
					else{
						notas[l][t]=nn;
					}
				}
			}
		}
	} while(m==1);
	system("cls");
	for(i=0;i<3;i++){
		promedio=0;
		suma=0;
		for(j=0;j<3;j++){
			suma=suma+notas[i][j];
		}
		promedio=suma/3;
		printf("N°Legado \t 1°Trimestre \t 3°Trimestre \t 2°Trimestre \t Promedio \n");
		printf("%d \t \t %d \t \t %d \t \t %d \t \t %.2f \n", i+1, notas[i][0], notas[i][1], notas[i][2], promedio);
	}
	
	return 0;
}

