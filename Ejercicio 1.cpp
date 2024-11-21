#include <iostream>
int n,i,res;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Digite la cantidad de terminos: ");
	scanf("%d",&n);
	//Inicializacion
	i=1;//Se mantiene en el ciclo do while
	//Condicion
	//for(i=1;i<=n;i++)
	//do
	while(i<=n){
		res=i*5;
		printf("%d * 5 = %d\n", i, res);
		//Incremento o decremento
		i=i+1;//se mantiene en el ciclo do while
	}
	//fin para 
	//while(i<=n);
	return 0;
}
