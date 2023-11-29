#include <stdio.h>
#include <stdlib.h>

int main() {
	int habistats[20][6], i, j, total=0, tp;
	float promedio=0;
	for(i=0;i<20;i++){
		printf("Piso %d \n", i+1);
		for(j=0;j<6;j++){
			printf("Habitantes departamento %d: ", j+1);
			scanf("%d", &habistats[i][j]);
			total=total+habistats[i][j];
		}
	}
	system("cls");
	for(i=0;i<20;i++){
		printf("Promedio del Piso %d: ", i+1);
		tp=0;
		for(j=0;j<6;j++){
			tp=tp+habistats[i][j];
		}
		promedio=tp/6;
		printf("%.2f habitantes \n", promedio);
	}
	printf("El total de habitantes es de: %d", total);
	return 0;
}

