#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int infracciones, total_infractores, mayor_edad, i, edad, genero, uso_grua, tipo_infraccion;
float infracciones_femeninas, porcentaje_femeninas;
string nombre_infractor, nombre_mayor_edad;

void MayorEdad(string nombre, int edad, int uso_grua) {
    if (uso_grua == 1 && edad > mayor_edad) {
        mayor_edad = edad;
        nombre_mayor_edad = nombre;
    }
}

float CalcularPorcentaje(float infracciones_femeninas, int infracciones) {
    if (infracciones > 0) {
        return (infracciones_femeninas / infracciones) * 100;
    } else {
        return 0;
    }
}

int main(int argc, char** argv) {
    i = 1; 
    total_infractores = 0; 
    infracciones_femeninas = 0; 
    mayor_edad = 0; 
    nombre_mayor_edad = "";

    printf("Cantidad de infracciones: ");
    scanf("%d", &infracciones);

    while (i <= infracciones) {
        char buffer[50]; // Para leer el nombre
        printf("Nombre del infractor: ");
        scanf("%s", buffer);
        nombre_infractor = buffer;
        printf("Edad del infractor: ");
        scanf("%d", &edad);
        printf("Genero (1.Femenino, 2.Masculino): ");
        scanf("%d", &genero);
        printf("¿Uso servicio de grua? (1.Si, 0.No): ");
        scanf("%d", &uso_grua);
        printf("Tipo de infraccion (1.Exceso de velocidad, 2.Otro): ");
        scanf("%d", &tipo_infraccion);


        if (tipo_infraccion == 1) {
            total_infractores++;
        }

        if (genero == 1) {
            infracciones_femeninas++;
        }

        MayorEdad(nombre_infractor, edad, uso_grua);

        i++;
    }
    porcentaje_femeninas = CalcularPorcentaje(infracciones_femeninas, total_infractores);
    
    printf("Porcentaje de infracciones por exceso de velocidad de genero femenino: %.2f%%\n", porcentaje_femeninas);
    if (!nombre_mayor_edad.empty()) {
        printf("Infractor de mayor edad que uso servicio de grua: %s\n", nombre_mayor_edad.c_str());
    } else {
        printf("No hay infractores que usaron servicio de grua\n");
    }

    return 0;
}

