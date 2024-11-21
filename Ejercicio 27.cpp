#include <iostream>
int n,i,j,fil,col;
//int vec[20];
int *vec;
int mat[10][10];

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//vector
	printf("Digite la cantidad de elementos del vector: ");
	scanf("%d",&n);
	int *vec = new int[n];
	for(i=0;i<n;i++){
		printf("Valor posicion %d:",i+1);
		scanf("%d",&vec[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\t\n",vec[i]);
	}
	//matriz
	printf("Digite la cantidad de filas ");
	scanf("%d",&fil);
	printf("Digite la cantidad de columnas ");
	scanf("%d",&col);
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("Valor posicion %d,%d: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	return 0;
}
