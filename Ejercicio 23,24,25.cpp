#include <iostream>
int i, May_dpto = 0, cod, n;
int *dpto, *P1, *Vb, *P2, *P3, *Total, *inscritos, *Tabs;
float *Porc, *Porcabs;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void Resultados() {
    for(i = 0; i < n; i++) {
        Total[i] = P1[i] + Vb[i] + P2[i] + P3[i];
        printf("Total de votos del dpto %d: %d\n", i + 1, Total[i]);
        Porc[i] = (static_cast<float>(Total[i]) / inscritos[i]) * 100;
        printf("Porcentaje de poblacion que voto en el dpto %d: %.2f%%\n", i + 1, Porc[i]);
        Tabs[i] = inscritos[i] - Total[i];
        Porcabs[i] = (static_cast<float>(Tabs[i]) / inscritos[i]) * 100;
        printf("El porcentaje de abstenciones en el dpto %d: %.2f%%\n", i + 1, Porcabs[i]);
        if(Tabs[i] > May_dpto) {
            May_dpto = Tabs[i];
            cod = dpto[i];
        }
    }
    printf("El dpto con mayores abstenciones fue: %d con %d abstenciones\n", cod, May_dpto);
}

int main(int argc, char** argv) {
    printf("Digite la cantidad de dptos escrutados: ");
    scanf("%d", &n);
    dpto = new int[n];
    P1 = new int[n];
    Vb = new int[n];
    P2 = new int[n];
    P3 = new int[n];
    Total = new int[n];
    Porc = new float[n];
    inscritos = new int[n];
    Tabs = new int[n];
    Porcabs = new float[n];
    for(i = 0; i < n; i++) {
        printf("Digite el codigo del dpto: ");
        scanf("%d", &dpto[i]);
        printf("Digite los votos del partido 1: ");
        scanf("%d", &P1[i]);
        printf("Digite los votos del voto en blanco: ");
        scanf("%d", &Vb[i]);
        printf("Digite los votos del partido 2: ");
        scanf("%d", &P2[i]);
        printf("Digite los votos del partido 3: ");
        scanf("%d", &P3[i]);
        printf("Digite los inscritos del dpto %d: ", i + 1);
        scanf("%d", &inscritos[i]);
    }
    Resultados();
    return 0;
}

