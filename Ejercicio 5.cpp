#include <iostream>
float h,quinta;
int rebotes=0;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	printf("Digite la altura inicial: ");
	scanf("%f",&h);
	quinta=h/5;
	while(h>=quinta){
		rebotes++;
		h=h*0.9;
	}
	printf("La pelota no alcanzo la quinta parte de la altura en el rebote: %d",rebotes);
	return 0;
}
