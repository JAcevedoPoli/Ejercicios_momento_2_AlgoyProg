#include <iostream>
int m,n,i,res;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Digite la base: ");
	scanf("%d",&m);
	printf("Digite el exponente: ");
	scanf("%d",&n);
	i=1; 
	res=1;
	//while(i<=n);
	//for(i=1;i<=n;i++);
	do{
		res=res*m;
		i++;
	}while(i<=n);
	//i++
	//fin para
	printf("%d elevado a %d = %d",m,n,res);
	return 0;
}
