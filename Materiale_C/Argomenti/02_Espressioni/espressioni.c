#include <stdio.h>

int main() {
    printf("\n<-----   INIZIO ESEMPI ESPRESSIONI  ----->\n\n");

    // Assegnamenti 
    // Restituiscono il valore che viene assegnato alla variabile a sinistra
    // 
    int a=0;
    //printf("L'assegnamento \"a = 5\", assegna alla variabile a il valore %d e restituisce il valore %d  %d \n", a, a = 5, a);
    printf("L'assegnamento \"a = 5\", assegna alla variabile a il valore %d e restituisce il valore %d\n", a, a = 5);
    printf("L'assegnamento \"a = 7.3\", assegna alla variabile a il valore %d e restituisce il valore %d\n", a, a = 7.3);

    // Espressioni che utilizzano operatori di confronto.
    //
    printf("L'espressione: \"4 < 3\"  -> restituisce %d\n", 4 < 3 );
    printf("L'espressione: \"4 > 3\"  -> restituisce %d\n", 4 > 3 );
    printf("L'espressione: \"!(4 > 3)\"  -> restituisce %d\n", !(4 > 3) );
    
    return 0;
}