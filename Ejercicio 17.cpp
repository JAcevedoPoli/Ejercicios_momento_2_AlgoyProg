#include <stdio.h>
#include <string.h>

int numero_peliculas, i, ingreso_total;
int ingresos_dia1[100], ingresos_dia2[100];  // Arrays para almacenar los ingresos de cada película
char nombre_pelicula[100][100];  // Almacenará el nombre de cada película
char nombre_pelicula_mas_exitosa_dia1[100], nombre_pelicula_mas_exitosa_dia2[100];
float promedio_ingresos;
int max_ingresos_dia1 = 0, max_ingresos_dia2 = 0;

void ObtenerNombresPeliculas() {
    for (i = 0; i < numero_peliculas; i++) {
        printf("Ingrese el nombre de la pelicula %d: ", i + 1);
        scanf(" %[^\n]", nombre_pelicula[i]);
    }
}

void CalcularIngresosTotales() {
    ingreso_total = 0;
    for (i = 0; i < numero_peliculas; i++) {
        printf("Ingrese los ingresos del primer dia de la pelicula %s: ", nombre_pelicula[i]);
        scanf("%d", &ingresos_dia1[i]);
        printf("Ingrese los ingresos del segundo dia de la pelicula %s: ", nombre_pelicula[i]);
        scanf("%d", &ingresos_dia2[i]);
        
        ingreso_total += ingresos_dia1[i] + ingresos_dia2[i];
        
        if (ingresos_dia1[i] > max_ingresos_dia1) {
            max_ingresos_dia1 = ingresos_dia1[i];
            strcpy(nombre_pelicula_mas_exitosa_dia1, nombre_pelicula[i]);
        }
        if (ingresos_dia2[i] > max_ingresos_dia2) {
            max_ingresos_dia2 = ingresos_dia2[i];
            strcpy(nombre_pelicula_mas_exitosa_dia2, nombre_pelicula[i]);
        }
    }
}

float ObtenerPromedioIngresos() {
    return (float)ingreso_total / (numero_peliculas * 2);
}

void CalcularProbabilidadExito(int ingresos_dia1, int ingresos_dia2, float promedio_ingresos) {
    float probabilidad_exito = ((ingresos_dia1 + ingresos_dia2) / (promedio_ingresos * 2)) * 100;
    printf("La probabilidad de exito de la pelicula es: %.2f%%\n", probabilidad_exito);
}

void MostrarResultados() {
    printf("Total de ingresos: %.2f\n", (float)ingreso_total);
    printf("Promedio de ingresos por pelicula: %.2f\n", promedio_ingresos);
    printf("Pelicula mas exitosa del primer dia: %s\n", nombre_pelicula_mas_exitosa_dia1);
    printf("Pelicula mas exitosa del segundo dia: %s\n", nombre_pelicula_mas_exitosa_dia2);
}

int main(int argc, char** argv) {
    // Inicialización
    ingreso_total = 0;
    max_ingresos_dia1 = 0;
    max_ingresos_dia2 = 0;
    strcpy(nombre_pelicula_mas_exitosa_dia1, "");
    strcpy(nombre_pelicula_mas_exitosa_dia2, "");
    
    printf("Ingrese el numero de peliculas: ");
    scanf("%d", &numero_peliculas);
    
    // Obtener los nombres de todas las películas
    ObtenerNombresPeliculas();
    
    // Calcular ingresos y películas más exitosas
    CalcularIngresosTotales();
    
    // Obtener promedio
    promedio_ingresos = ObtenerPromedioIngresos();
    
    // Calcular y mostrar probabilidad de éxito para cada película
    for (i = 0; i < numero_peliculas; i++) {
        printf("\nCalculando probabilidad de exito para la pelicula %s:\n", nombre_pelicula[i]);
        CalcularProbabilidadExito(ingresos_dia1[i], ingresos_dia2[i], promedio_ingresos);
    }
    
    // Mostrar resultados finales
    MostrarResultados();
    
    return 0;
}

