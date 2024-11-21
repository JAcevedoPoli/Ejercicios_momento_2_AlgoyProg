#include <iostream>
int n,cod,i,perdidos=0;
float n1,n2,n3,nf,sumanotas=0,notamay=0,notamen=5.0,promG,porcG;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Digite la cantidad de estudiantes: ");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		printf("Digite el codigo del estudiante:");
		scanf("%d",&cod);
		printf("Digite la nota 1:");
		scanf("%f",&n1);
		printf("Digite la nota 2:");
		scanf("%f",&n2);
		printf("Digite la nota 3:");
		scanf("%f",&n3);
		nf=(n1+n2+n3)/3;
		printf("La nota definitiva del estudiante es: %.2f\n", nf);
		sumanotas+=nf;//sumanotas=sumanota+nf;
		if(nf<3.0){
			perdidos++;
		}
		if(nf>notamay){
			notamay=nf;
		}
		if(nf<notamen){
			notamen=nf;
		}
		i=i+1;//i++;
	}
	promG=sumanotas/n;
	porcG=(n-perdidos)*100/n;
	printf("\nResultados Finales:\n");
	printf("El promedio del grupo es: %.2f\n",promG);
	printf("La cantidad de estudiantes que perdieron la materia es: %d\n",perdidos);
	printf("La nota mayor es: %.2f\n",notamay);
	printf("La nota menor es: %.2f\n",notamen);
	printf("El porcentaje de estudiantes que ganaron fue: %.2f%%\n",porcG);
	return 0;
}
