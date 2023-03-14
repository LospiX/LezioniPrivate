
#include <stdio.h>
#include <string.h>

void stampasizeof(char *s, int size) {
    printf("%s:%d\n", s, size);
}

int main(void) {
    stampasizeof("char", sizeof(char));
    stampasizeof("char*", sizeof(char*));
    stampasizeof("short", sizeof(short));
    stampasizeof("short*", sizeof(short*));
    stampasizeof("int", sizeof(int));
    stampasizeof("int*", sizeof(int*));
    stampasizeof("long", sizeof(long));
    stampasizeof("long*", sizeof(long*));
    stampasizeof("float", sizeof(float));
    stampasizeof("float*", sizeof(float*));
    stampasizeof("double", sizeof(double));
    stampasizeof("double*", sizeof(double*));
    stampasizeof("long double", sizeof(long double));
    stampasizeof("long double*", sizeof(long double*));

    int a = 12; 

    // & è un operatore che data una variabile restituisce il suo indirizzo in memoria
    //
    printf("Indirizzo di a: %p\n", &a);

    // Per dichiarare un puntatore ad un tipo di dato è necessario specificare: 
    //     tipodidato * nomeVarPuntatore
    //     esempio: float* punt_a_float
    // 
    int * ptr = &a;
    
    // Un puntatore è una variabile a cui è possibile assegnare un indirizzo di memoria.
    // Un puntatore è una variabile vera è propria, 
    //     ha un proprio indirizzo in memoria,
    //     ha un valore,
    //     in più ha la funzionalità di poter manipolare un'altra zona di memoria

    printf("Il valore contenuto nella variabile del puntatore ptr e':  %p\n", ptr);
    printf("L'indirizzo di memoria della variabile puntatore ptr e':  %p\n", &ptr);

    // L'operatore asterisco * permette di effettuare un'operazione speciale 
    // quando utilizzato in una espressione e posto prima di una variabile puntatore
    //  * NomePuntatore -> accede alla zona di memoria dell'indirizzo registrato come valore della variabile puntatore  
    //
    printf("Il valore 'puntato' dal puntatore ptr:  %d, il valore di a:  %d \n", *ptr, a);

    *ptr = 15; // Modifico il valore di a attraverso l'utilizzo del puntatore

    printf("Il valore 'puntato' dal puntatore ptr:  %d, il valore di a:  %d \n", *ptr, a);


    // int abc [10]; 
    // abc  === & abc[0]
}