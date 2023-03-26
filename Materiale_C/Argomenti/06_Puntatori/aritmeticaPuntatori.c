#include <stdio.h>

int main(){
    int a [2] = {5, 12};

    // int * b= &a[0]
    int * b = a;
    
    printf("\nindirizzo salvato in b:  %p;  l'indirizzo di a[0]:  %p\n", b, &a[0]);
    printf("Risultato operazione (b+1):  %p,  indirizzo di a[1]:  %p\n", (b+1), &a[1]);
    
    double reali[] = {1.2, 3.2, 4.5, 5.555};
    double *c = & reali[0];

    printf("\nSe si utilizza un puntatore double,\n\t le operazioni aritmetiche dipendono dalla dimensione di un double(8 Byte)\n");
    
    printf("\nIndirizzo nel puntatore c: %p,   c+1:  %p\n", c, (c + 1));

    // Convertiamo il puntatore in un tipo intero e compiamo una semplice somma tra interi
    printf("Indirizzo nel puntatore c: %p,   c+1:  %p\n", c, (  ((int) c) + 1    )); 
    printf("\n\n stampo:  c[2]: %f", c[2]);

    //      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    //
    // -->        c[2]  ===  *(c + 2)
    //
    //      !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//  c[2]   ->   prendo l'indirizzo salvato in c (puntato dal puntatore c),
//             lo incremento di 2 volte la dimensione del tipo di dato puntato (2 * 8)
//             infine prendo il valore in questo indirizzo:  *(nuovoIndirizzo)

    return 0;
}