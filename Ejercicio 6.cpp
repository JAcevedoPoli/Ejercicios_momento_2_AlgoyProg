#include <iostream>
#include <cstdlib>
#include <ctime>    
int num, vidas = 5;

int main(int argc, char** argv) {
    srand(time(0));
    int Pc = rand() % 10;
    printf("ˇBienvenido! Trata de adivinar el numero entre 0 y 10.\n");
    while (num != Pc && vidas > 0) {
        printf("Introduce un numero: ");
        scanf("%d", &num);
        if (num < Pc) {
            printf("El numero es mayor.\n");
            vidas--;
        } else if (num > Pc) {
            printf("El numero es menor.\n");
            vidas--;
        }
        if (vidas > 0 && num != Pc) {
            printf("Te quedan %d vidas.\n", vidas);
        }
    }
    if (num == Pc) {
        printf("ˇFelicidades! Has adivinado el numero. Te quedaban %d vidas.\n", vidas);
    } else {
        printf("ˇCasi lo logras! Te has quedado sin vidas. El numero era: %d\n", Pc);
    }
    return 0;
}
