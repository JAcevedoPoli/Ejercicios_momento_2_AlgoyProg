#include <iostream>
int n,i,m,res;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Digite la cantidad de terminos:");
	scanf("%d",&n);
	printf("Digite el numero de la tabla: ");
	scanf("%d",&m);
	i=1;
	while(i<=n){
		res=i*m;
		printf("%d * %d = %d\n",i,m,res);
		i=i+1;
	}
	return 0;
}
