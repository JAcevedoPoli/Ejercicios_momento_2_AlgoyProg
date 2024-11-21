#include <iostream>
float C1,C2,C3,Suma;
int meses=0;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Digite el capital 1: ");
	scanf("%f",&C1);
	printf("Digite el capital 2: ");
	scanf("%f",&C2);
	printf("Digite el capital del negocio: ");
	scanf("%f",&C3);
	Suma=C1+C2;
	while(Suma<C3){
		C1=C1*1.03;
		C2=C2*1.04;
		printf("%f , %f\n",C1,C2);
		meses++;
		Suma=C1+C2;
	}
	printf("La cantidad de meses para el negocio es: %d", meses);
	return 0;
}
