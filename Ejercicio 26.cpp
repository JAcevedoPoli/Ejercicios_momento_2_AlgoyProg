#include <iostream>
int edad,genero,i,n;
float salario_bruto,cuotas,credito,admin,aportes,seguro,v_total;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float Calcular_cuotas(float credito){
	if(credito==1000000){
		return 170000;
	}else if(credito==2000000){
		return 340000;
	}else{
		return 0;
	}
}

void Calcular_admin(){
	float suma;
	suma=seguro+aportes+cuotas;
	if(suma<100000){
		admin=10000;
	}else{
		admin=20000;
	}
}

int main(int argc, char** argv) {
	printf("Digite la cantidad de Asociados: ");
	scanf("%d",&n);
	i=1;
	while(i<=n){
		printf("Digite la edad: ");
		scanf("%d",&edad);
		printf("Digite el genero (1-Masculino, 2-Femenino): ");
		scanf("%d",&genero);
		printf("Digite el salario bruto: ");
		scanf("%f",&salario_bruto);
		printf("Digite el valor del crédito: ");
		scanf("%f",&credito);
		switch(genero){
			case 1: 
				seguro=(salario_bruto*0.02)+(edad*10);
				break;
			case 2: 
				seguro=(salario_bruto*0.01)+(edad*9);
				break;
			default: 
				printf("Valor inválido");
				break;
		}
		if(salario_bruto>=2000000&&salario_bruto<=4000000&&edad<50){
			aportes=salario_bruto*0.02;
		}else if(salario_bruto>4000000&&edad<50){
			aportes=salario_bruto*0.035;
		}else{
			aportes=salario_bruto*0.1;
		}
		cuotas=Calcular_cuotas(credito);
		Calcular_admin();
		v_total=seguro+cuotas+admin+aportes;
		printf("El valor total de la deduccion de la nomina es: $%f\n",v_total);
		i++;
	}
	return 0;
}
