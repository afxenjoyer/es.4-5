#include <stdio.h>

int main(void)
{
    int numeroProdotti = 0;
    float prezzoTotale = 0.0;
    float prezzoProdotti = 0.0;

    printf("Inserisci il numero di prodotti acquistati\n");
    scanf("%d", &numeroProdotti);

    while (numeroProdotti > 0)
    {
        printf("Inserisci il costo del prodotto acquistato\n");
        scanf("%f", &prezzoProdotti);
        prezzoTotale = prezzoTotale + prezzoProdotti;
        numeroProdotti--;
    }

    printf("Il prezzo totale è %.2f euro\n", prezzoTotale);

    return 0;
}
