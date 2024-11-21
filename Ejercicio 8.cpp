#include <iostream>
int Partido,golesL,golesV,TotalL=0,TotalV=0,PtosL=0,PtosV=0;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	for(Partido=1;Partido<=10;Partido++)//while(Partido<=10)//do{
		printf("Partido %d\n",Partido);
		printf("Digite los goles del local:");
		scanf("%d",&golesL);
		printf("Digite los goles del visitante:");
		scanf("%d",&golesV);
		TotalL=TotalL+golesL;
		TotalV=TotalV+golesV;
		if(golesL>golesV){
			printf("El ganador es el local\n");
			PtosL=PtosL+3;
		}else if(golesL==golesV){
			printf("Empate\n");
			PtosL++;
			PtosV++;
		}else{
			printf("El ganador es el visitante\n");
			PtosV=PtosV+3;
		}
	}//i++//while(Partido<=10)
	printf("El total de goles de los locales fue: %d\n",TotalL);
	printf("El total de goles de los visitantes fue: %d\n",TotalV);
	printf("El total de puntos de los locales fue: %d\n",PtosL);
	printf("El total de puntos de los visitantes fue: %d",PtosV);
	return 0;
}
