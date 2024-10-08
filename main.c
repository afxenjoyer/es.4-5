#include <stdio.h>

int main(void)
{
    int numeroProdotti;
    float prezzoTotale = 0.0;
    float prezzoProdotti = 0.0;

    printf("Inserisci il numero di prodotti acquistati\n");
    scanf("%d", &numeroProdotti);

    while (numeroProdotti > 0)
    {
        printf("Inserisci il costo del prodotto acquistato\n");
        scanf("%f", prezzoProdotti);
        numeroProdotti--;
    }

    prezzoTotale = prezzoTotale + prezzoProdotti;
    printf("Il prezzo totale è %f\n", prezzoTotale);

    return 0;
}
