#include <iostream>
using namespace std;
int i, j, k, n, m, s = 0;
int *c, *java, *ambos;
char opcion;

/*run this program using the console pauser or add your own getch, system("pause") or input loop */

void InsOrdenado(int vec[], int &n, int val) {
    int i = 0;
    while (i < n && val > vec[i]) {
        i++;
    }
    for (int j = n; j > i; j--) {
        vec[j] = vec[j-1];
    }
    vec[i] = val;
    n++;
}

int main(int argc, char** argv) {
    printf("Digite la cantidad de estudiantes que perdieron C: ");
    scanf("%d", &n);
    c = new int[n + 10]; 
    for(i = 0; i < n; i++) {
        printf("Digite el codigo del estudiante %d: ", i+1);
        scanf("%d", &c[i]);
    }
    printf("Digite la cantidad de estudiantes que perdieron Java: ");
    scanf("%d", &m);
    java = new int[m + 10]; 
    for(j = 0; j < m; j++) {
        printf("Digite el codigo del estudiante %d: ", j+1);
        scanf("%d", &java[j]);
    }
    do {
        printf("\n\nMenu de opciones:");
        printf("\n1. Insertar nuevo estudiante en C");
        printf("\n2. Insertar nuevo estudiante en Java");
        printf("\n3. Mostrar estudiantes que perdieron ambas materias");
        printf("\n4. Salir");
        printf("\nSeleccione una opcion: ");
        scanf("%s",&opcion);
        switch(opcion) {
            case '1': {
                int nuevo_codigo;
                printf("Digite el codigo del nuevo estudiante para C: ");
                scanf("%d", &nuevo_codigo);
                InsOrdenado(c, n, nuevo_codigo);
                printf("Estudiante agregado exitosamente a C");
                break;
            }
            case '2': {
                int nuevo_codigo;
                printf("Digite el codigo del nuevo estudiante para Java: ");
                scanf("%d", &nuevo_codigo);
                InsOrdenado(java, m, nuevo_codigo);
                printf("Estudiante agregado exitosamente a Java");
                break;
            }
            case '3': {
                // Reinicializar el vector ambos y el contador s
                s = 0;
                ambos = new int[n + m];
                for(i = 0; i < n; i++) {
                    for(j = 0; j < m; j++) {
                        if(c[i] == java[j]) {
                            ambos[s] = c[i];
                            s++;
                        }
                    }
                }
                printf("Los estudiantes que perdieron ambos son: ");
                for(k = 0; k < s; k++) {
                    printf("%d ", ambos[k]);
                }
                break;
            }
            case '4':
                printf("\nSaliendo del programa...");
                break;
            default:
                printf("\nOpcion invalida!");
        }
    } while(opcion != '4');
    return 0;
}
