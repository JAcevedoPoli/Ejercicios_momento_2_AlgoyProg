#include <iostream>
int ventas[12];
int i, Mes_may, Venta_may = 0;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Ordenar_Vec() {
    int j, aux;
    for(i = 0; i < 12 - 1; i++) {
        for(j = 0; j < 12 - 1 - i; j++) {
            if(ventas[j] > ventas[j + 1]) {
                aux = ventas[j];
                ventas[j] = ventas[j + 1];
                ventas[j + 1] = aux;
            }
        }
    }
}

void Mayor_Venta() {
    for(i = 0; i < 12; i++) {
        if(ventas[i] > Venta_may) {
            Venta_may = ventas[i];
            Mes_may = i;
        }
    }
}

int main(int argc, char** argv) {
    for(i = 0; i < 12; i++) {
        printf("Digite las ventas en el mes %d: ", i + 1);
        scanf("%d", &ventas[i]);
    }
    Mayor_Venta();
    Ordenar_Vec();
    printf("\nVentas ordenadas de menor a mayor:\n");
    for(i = 0; i < 12; i++) {
        printf("%d\n", ventas[i]);
    }
    printf("\nEl mes con mayor venta fue: %d con un valor de: %d\n", Mes_may + 1, Venta_may);
    return 0;
}
