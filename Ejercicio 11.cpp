#include <iostream>
int n,i,dias;
float Total,pasaje,Km,descuento,Prom;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Digite la distancia del viaje: ");
	scanf("%f",&Km);
	printf("Digite los dias de alojamiento: ");
	scanf("%d",&dias);	printf("Digite la cantidad de pasajes: ");
	scanf("%d",&n);
	i=1;
	Total=0;
	//while(i<=n)
	//for(i=1;i<=n;i++)
	do{	
		pasaje=Km*1200;
		Total=Total+pasaje;
		if(Km>1000 && dias>5){
			descuento=pasaje*0.2;
			pasaje=pasaje-descuento;
		}else{
			pasaje=pasaje;
		}
		printf("El valor del pasaje es de: %f\n",pasaje);
		i++;
	}while(i<=n);
	//fin for
	//fin while
	Prom=Total/n;
	printf("El promedio de pasajes es de: %f",Prom);
	return 0;
}
