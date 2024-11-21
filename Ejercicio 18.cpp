#include <iostream>
int n,may=0,pos,c10=0,i,sum=0;
int *vec;
float prom;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Busquedas(){
	for (i=0;i<n;i++) {
		if (vec[i]>may){
			may=vec[i];
			pos=i;
		}
		sum+=vec[i];
		if (vec[i]==10){
			c10++;
		}
	}
	prom=static_cast<float>(sum)/n;
}

int main(int argc, char** argv) {
	printf("Digite el tamano del vector: ");
	scanf("%d",&n);
	vec = new int[n];
	for(i=0;i<n;i++){
		printf("Digite el elemento en la posicion %d: ",i+1);
		scanf("%d",&vec[i]);
	}
	Busquedas();
	printf("Valor mayor es: %d\n",may,"en la posicion: %d",pos);
	printf("El promedio es: %f\n",prom);
	printf("El 10 se repite: %d\n",c10,"veces");
	return 0;
}
