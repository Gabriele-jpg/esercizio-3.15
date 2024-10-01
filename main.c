#include <stdio.h>

int main() {
    float costo_biglietto, importo_da_pagare;
    char condizione;

    printf("Inserisci il costo del biglietto: ");
    scanf("%f", &costo_biglietto);

    printf("Inserisci la condizione dell'utente (p per pensionato, s per studente, d per disoccupato): ");
    scanf(" %c", &condizione);

    if (condizione == 'p') {
        importo_da_pagare = costo_biglietto * 0.90; // Sconto del 10%
    } else if (condizione == 's') {
        importo_da_pagare = costo_biglietto * 0.85; // Sconto del 15%
    } else if (condizione == 'd') {
        importo_da_pagare = costo_biglietto * 0.75; // Sconto del 25%
    } else {
        importo_da_pagare = costo_biglietto; // Nessuno sconto
    }

    printf("L'importo da pagare è: %.2f\n", importo_da_pagare);

    return 0;
}
