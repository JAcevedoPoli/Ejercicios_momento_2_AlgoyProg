#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int caninos_vendidos, i, id_canino, raza, ano_nacimiento, mes_nacimiento, valor_venta;
float mayor_valor_ventas;
int cantidad_caninos_mayor_valor, edad_canino_mayor, id_canino_mayor;
string nombre_raza_mayor_valor, raza_canino_mayor_edad;

string ObtenerNombreRaza(int raza) {
    switch (raza) {
        case 1: return "Beagle";
        case 2: return "Boxer";
        case 3: return "Labrador";
        case 4: return "Bulldog";
        default: return "Desconocida";
    }
}

void CalcularRazaMayorValor(int caninos_vendidos, float mayor_valor_ventas, string nombre_raza_mayor_valor, int& cantidad_caninos_mayor_valor) {
    cantidad_caninos_mayor_valor = 0;

    for (int i = 1; i <= caninos_vendidos; i++) {
        if (valor_venta == mayor_valor_ventas) {
            cantidad_caninos_mayor_valor++;
        }
    }

    printf("Raza que produce el mayor valor en ventas: %s\n", nombre_raza_mayor_valor.c_str());
    printf("Cantidad de caninos que producen este valor: %d\n", cantidad_caninos_mayor_valor);
}

void MostrarCaninoMayorEdad(int id_canino_mayor, string raza_canino_mayor_edad, int edad_canino_mayor) {
    printf("Identificación del canino de mayor edad: %d, Raza: %s, Edad en meses: %d\n", id_canino_mayor, raza_canino_mayor_edad.c_str(), edad_canino_mayor);
}

int main(int argc, char** argv) {
    i = 1; 
    mayor_valor_ventas = 0; 
    nombre_raza_mayor_valor = "";
    edad_canino_mayor = -1; 
    id_canino_mayor = 0;
    raza_canino_mayor_edad = "";

    printf("Numero de caninos vendidos: ");
    scanf("%d", &caninos_vendidos);

    while (i <= caninos_vendidos) {
        printf("Identificacion del canino: ");
        scanf("%d", &id_canino);
        printf("Raza (1 - Beagle, 2 - Boxer, 3 - Labrador, 4 - Bulldog): ");
        scanf("%d", &raza);
        printf("Ano de nacimiento (aaaa): ");
        scanf("%d", &ano_nacimiento);
        printf("Mes de nacimiento (mm): ");
        scanf("%d", &mes_nacimiento);
        printf("Valor de venta: ");
        scanf("%d", &valor_venta);

        if (valor_venta > mayor_valor_ventas) {
            mayor_valor_ventas = valor_venta;
            nombre_raza_mayor_valor = ObtenerNombreRaza(raza);
        }

        int edad_canino_actual = (2024 - ano_nacimiento) * 12 + (10 - mes_nacimiento); // Suponiendo que el año actual es 2024 y el mes actual es octubre

        if (edad_canino_actual > edad_canino_mayor) {
            edad_canino_mayor = edad_canino_actual;
            id_canino_mayor = id_canino;
            raza_canino_mayor_edad = ObtenerNombreRaza(raza);
        }

        i++;
    }

    CalcularRazaMayorValor(caninos_vendidos, mayor_valor_ventas, nombre_raza_mayor_valor, cantidad_caninos_mayor_valor);
    MostrarCaninoMayorEdad(id_canino_mayor, raza_canino_mayor_edad, edad_canino_mayor);

    return 0;
}

