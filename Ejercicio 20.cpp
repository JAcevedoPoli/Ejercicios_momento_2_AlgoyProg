#include <iostream>
using namespace std;
int n, sum = 0, i, Cimp = 0;
int *vec;
float Prom;

/*run this program using the console pauser or add your own getch, system("pause") or input loop */

void eliminar(int vec[], int &n, int val) {
    int i = 0;
    while (i < n && val != vec[i]) {
        i++;
    }
    
    if (i < n) {
        for (int j = i; j < n - 1; j++) {
            vec[j] = vec[j + 1];
        }
        n = n - 1;
    } else {
        printf("El valor %d no esta en el vector\n", val);
    }
}

int main(int argc, char** argv) {
    printf("Digite la cantidad de elementos: ");
    scanf("%d", &n);
    vec = new int[n];
    for(i = 0; i < n; i++) {
        printf("Ingresa un numero en la posicion %d: ", i+1);
        scanf("%d", &vec[i]);
    }
    for(i = 0; i < n; i++) {
        if(vec[i] % 2 != 0) {
            Cimp++;
            sum += vec[i];
        }
    }
    Prom = (float)sum/Cimp;
    printf("La sumatoria de los impares es: %d\n", sum);
    printf("El promedio de los impares es: %.1f\n", Prom);
    int valor_a_eliminar;
    printf("\nIngrese el valor que desea eliminar: ");
    scanf("%d", &valor_a_eliminar);
    eliminar(vec, n, valor_a_eliminar);
    printf("\nVector despues de eliminar:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", vec[i]);
    }
    return 0;
}
