#include <iostream>
int i,mp,ptos;
char mensaje[50];
float Nc,Nf,Np,Nh,Prom;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//void CAP()
float CAP(float Nc, float Nf,float Np, float Nh){
	return (Nc*3+Nf*3+Np*4+Nh*2)/12;
	//Prom=(Nc*3+Nf*3+Np*4+Nh*2)/12;
}
//void socore()
const char* score(int ptos){
	if(ptos>9){
		return "Excelente";
		//mensaje="Excelente";
	}else if(ptos<=9&&ptos>=8){
		return "Bueno";
		//mensaje="Bueno";
	}else if(ptos<=7&&ptos>=4){
		return "Regular";
		//mensaje="Regular";
	}else{
		return "Deficiente";
		//mensaje="Deficiente";
	}
}
int main(int argc, char** argv) {
	i=1;
	while(i<=3){
		printf("Digite la nota de calculo: ");
		scanf("%f",&Nc);
		printf("Digite la nota de fisica: ");
		scanf("%f",&Nf);
		printf("Digite la nota de programacion: ");
		scanf("%f",&Np);
		printf("Digite la nota de humanidades: ");
		scanf("%f",&Nh);
		Prom=CAP(Nc,Nf,Np,Nh);
		//CAP();
		if(Prom>4.0){
			ptos=ptos+5;
		}else if(Prom>3.2&&Prom<=4.0){
			ptos=ptos+3;
		}else{
			ptos=ptos+1;
		}
		mp=0;
		if(Nc<3.0){
			mp=mp+1;
		}
		if(Nf<3.0){
			mp=mp+1;
		}
		if(Np<3.0){
			mp=mp+1;
		}
		if(Nh<3.0){
			mp=mp+1;
		}
		if(mp=0){
			ptos=ptos+6;
		}else if(mp=1){
			ptos=ptos+3;
		}else if(mp=2){
			ptos=ptos+1;
		}else{
			ptos=ptos+0;
		}
		const char* mensaje=score(ptos);
		printf("El promedio del estudiante es: %f\n",Prom);
		printf("El puntaje del estudiante es: %d\n",ptos);
		printf("El estudiante es %s\n",mensaje);
		//score();
		i=i+1;
	}
	return 0;
}
