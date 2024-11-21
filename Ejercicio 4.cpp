#include <iostream>
float Temp,Suma=0,Prom;
int n,i,con=0; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Digite la cantidad de muestras: ");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		printf("Digite la temperatura de la muestra: ");
		scanf("%f",&Temp);
		if(Temp>20){
			con++;
			Suma+=Temp;
		}
		i++;
	}
	Prom=Suma/con;
	printf("El promedio de temperaturas mayores a 20° es: %f",Prom);
	return 0;
}
