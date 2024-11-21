#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int hurto, reclusos, rango_edad, rango_condena, mayor_edad, i, delito, edad, condena;
float Total_edad, Promedio, Porcentaje;
string Nombre, Nombre_mayoredad;

void MayorEdad(string Nombre, int edad, int condena) {
    if (condena >= 1 && condena <= 5 && edad > mayor_edad) {
        mayor_edad = edad;
        Nombre_mayoredad = Nombre;
    }
}

float Calcular_Promedio(float Total_edad, int hurto) {
    if (hurto > 0) {
        return Total_edad / hurto;
    } else {
        return 0;
    }
}

float Calcular_Porcentaje(int rango_edad, int reclusos) {
    if (reclusos > 0) {
        return (static_cast<float>(rango_edad) / reclusos) * 100;
    } else {
        return 0;
    }
}

int main(int argc, char** argv) {
    i=1; hurto = 0; rango_edad = 0; mayor_edad = 0; Total_edad = 0; Nombre_mayoredad = "";

    printf("Cantidad de reclusos: ");
    scanf("%d", &reclusos);

    while (i <= reclusos) {
        char buffer[50]; // Para leer el nombre
        printf("Nombre del recluso: ");
        scanf("%s", buffer);
        Nombre = buffer;
        printf("Edad del recluso: ");
        scanf("%d", &edad);
        printf("Delito (1.Hurto, 2.Otro): ");
        scanf("%d", &delito);
        printf("Tiempo de condena: ");
        scanf("%d", &condena);
        if (edad >= 18 && edad <= 25) {
            rango_edad++;
        }

        if (delito == 1) { 
            Total_edad += edad;
            hurto++;
        }

        MayorEdad(Nombre, edad, condena);

        i++;
    }
    Promedio = Calcular_Promedio(Total_edad, hurto);
    Porcentaje = Calcular_Porcentaje(rango_edad, reclusos);

    printf("Promedio de edad de reclusos por hurto: %.2f\n", Promedio);
    printf("Porcentaje de reclusos entre 18 y 25 anos: %.2f%%\n", Porcentaje);

    if (Nombre_mayoredad != "") {
        printf("Recluso de mayor edad condenado entre 1 y 5 anos: %s\n", Nombre_mayoredad.c_str());
    } else {
        printf("No hay reclusos con ese rango de condena\n");
    }

    return 0;
}

