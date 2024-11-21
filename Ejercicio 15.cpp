#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int encuestados, total_mujeres_ron, total_cerveza, i, edad, genero, consumo, licor_preferido;
float hombres_aguardiente, edad_total_cerveza, porcentaje_hombres_aguardiente, promedio_edad_cerveza, mayor_edad_mujer;
char nombre_mayor_edad_mujer[50];

void ActualizarTotalMujeresRon(int genero, int licor_preferido) {
    if (licor_preferido == 2 && genero == 2) { // Mujer que consume ron
        total_mujeres_ron++;
    }
}

void ActualizarMayorEdadMujer(int genero, int edad) {
    if (genero == 2 && edad > mayor_edad_mujer) {
        mayor_edad_mujer = edad;
        sprintf(nombre_mayor_edad_mujer, "Mujer de %d", edad);
    }
}

float CalcularPorcentajeHombresAguardiente(float hombres_aguardiente, int total_personas) {
    if (total_personas > 0) {
        return (hombres_aguardiente * 100) / total_personas;
    } else {
        return 0;
    }
}

float CalcularPromedioEdadCerveza(float edad_total_cerveza, int total_cerveza) {
    if (total_cerveza > 0) {
        return edad_total_cerveza / total_cerveza;
    } else {
        return 0;
    }
}

int main(int argc, char** argv) {
    // Inicializaciones
    hombres_aguardiente = 0;
    total_mujeres_ron = 0;
    edad_total_cerveza = 0;
    total_cerveza = 0;
    mayor_edad_mujer = 0;

    printf("Numero de encuestados: ");
    scanf("%d", &encuestados);

    for (i = 1; i <= encuestados; i++) {
        printf("Consume licor (1 - SI, 2 - NO, 3 - Salir Encuestas): ");
        scanf("%d", &consumo);

        if (consumo == 3) {
            printf("Gracias por participar en la encuesta.\n");
            break; // Salir del bucle si el usuario decide salir de las encuestas
        }

        do { 
            if (consumo == 1) { // Si consume licor
                printf("Licor preferido (1 - Aguardiente, 2 - Ron, 3 - Cerveza, 4 - Whisky, 5 - Otro): ");
                scanf("%d", &licor_preferido);
                printf("Edad: ");
                scanf("%d", &edad);
                printf("Género (1 - Hombre, 2 - Mujer): ");
                scanf("%d", &genero);

                if (licor_preferido == 1 && genero == 1) { 
                    hombres_aguardiente++;
                }

                ActualizarTotalMujeresRon(genero, licor_preferido);
                
                if (licor_preferido == 3) { 
                    edad_total_cerveza += edad;
                    total_cerveza++;
                }

                ActualizarMayorEdadMujer(genero, edad);
            }

            printf("¿Desea continuar con el consumo? (1 - Si, 2 - No, 3 - Salir Encuestas): ");
            scanf("%d", &consumo);

            if (consumo == 3) {
                printf("Gracias por participar en la encuesta.\n");
                break; // Salir del bucle si el usuario decide salir de las encuestas
            }
        } while (consumo == 1 || consumo == 2);

        if (consumo == 2) {
            printf("Gracias por su tiempo.\n");
        }
    }


    porcentaje_hombres_aguardiente = CalcularPorcentajeHombresAguardiente(hombres_aguardiente, encuestados);
    promedio_edad_cerveza = CalcularPromedioEdadCerveza(edad_total_cerveza, total_cerveza);

    printf("Porcentaje de hombres que consumen aguardiente: %.2f%%\n", porcentaje_hombres_aguardiente);
    printf("Total de mujeres que consumen ron: %d\n", total_mujeres_ron);
    printf("Promedio de edad para personas que consumen cerveza: %.2f\n", promedio_edad_cerveza);
    if (mayor_edad_mujer > 0) {
        printf("Mayor edad registrada por una mujer: %s\n", nombre_mayor_edad_mujer);
    } else {
        printf("No hay mujeres que hayan consumido licor.\n");
    }

    return 0;
}

