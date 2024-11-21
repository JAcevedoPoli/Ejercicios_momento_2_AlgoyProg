#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int pisos, apartamentos_por_piso, consumo_por_apartamento, i, j, k, genero, edad, hombres, mujeres, total_personas;
float edad_promedio, mayor_consumo = 0;
char nombre_mayor_consumo[50]; 

void CalcularDatosPorPiso(int piso, int num_apartamentos, int consumo_apartamento) {
    // Inicializaciones
    hombres = 0;
    mujeres = 0;
    total_personas = 0;
    float consumo_total = 0;

    // Recorrer cada apartamento
    for (j = 1; j <= num_apartamentos; j++) {
        // Preguntar la cantidad de personas en el apartamento
        int num_personas; // Variable local para el número de personas en este apartamento
        printf("Número de personas en el apartamento %d del piso %d: ", j, piso);
        scanf("%d", &num_personas);

        // Preguntar datos de cada persona
        for (k = 1; k <= num_personas; k++) {
            printf("Persona %d del apartamento %d:\n", k, j);
            printf("Género de la persona (1.Femenino, 2.Masculino): ");
            scanf("%d", &genero);
            printf("Edad de la persona: ");
            scanf("%d", &edad);

            if (genero == 1) {
                mujeres++;
            } else {
                hombres++;
            }
            total_personas++;
        }
    }

    consumo_total = consumo_apartamento * num_apartamentos;
    if (consumo_total > mayor_consumo) {
        mayor_consumo = consumo_total;
        sprintf(nombre_mayor_consumo, "Piso %d", piso);  
    }

    if (total_personas > 0) {
        edad_promedio = (float)edad / total_personas;  // Cambiar la fórmula para calcular la edad promedio
    } else {
        edad_promedio = 0;
    }

    printf("Piso: %d\n", piso);
    printf("Total de Hombres: %d\n", hombres);
    printf("Total de Mujeres: %d\n", mujeres);
    printf("Edad promedio: %.2f\n", edad_promedio);
}

int main(int argc, char** argv) {
    printf("Número de pisos en el edificio: ");
    scanf("%d", &pisos);
    printf("Número de apartamentos por piso: ");
    scanf("%d", &apartamentos_por_piso);
    printf("Consumo en litros de agua por apartamento: ");
    scanf("%d", &consumo_por_apartamento);

    for (i = 1; i <= pisos; i++) {
        CalcularDatosPorPiso(i, apartamentos_por_piso, consumo_por_apartamento);
    }

    printf("Mayor consumo de agua en el edificio: %.2f en %s\n", mayor_consumo, nombre_mayor_consumo);

    return 0;
}

