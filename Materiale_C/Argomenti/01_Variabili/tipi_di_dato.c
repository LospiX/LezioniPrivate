#include <stdio.h>
int main() {
    
    printf("Il tipo di dato: char occupa in memoria:  %zu byte.\n", sizeof(char));
    printf("Il tipo di dato: char* occupa in memoria:  %zu byte.\n", sizeof(char*));
    printf("Il tipo di dato: short occupa in memoria:  %zu byte.\n", sizeof(short));
    printf("Il tipo di dato: short* occupa in memoria:  %zu byte.\n", sizeof(short*));
    printf("Il tipo di dato: int occupa in memoria:  %zu byte.\n", sizeof(int));
    printf("Il tipo di dato: int* occupa in memoria:  %zu byte.\n", sizeof(int*));
    printf("Il tipo di dato: long occupa in memoria:  %zu byte.\n", sizeof(long));
    printf("Il tipo di dato: long* occupa in memoria:  %zu byte.\n", sizeof(long*));
    printf("Il tipo di dato: float occupa in memoria:  %zu byte.\n", sizeof(float));
    printf("Il tipo di dato: float* occupa in memoria:  %zu byte.\n", sizeof(float*));
    printf("Il tipo di dato: double occupa in memoria:  %zu byte.\n", sizeof(double));
    printf("Il tipo di dato: double* occupa in memoria:  %zu byte.\n", sizeof(double*));
    printf("Il tipo di dato: long double occupa in memoria:  %zu byte.\n", sizeof(long double));
    printf("Il tipo di dato: long double* occupa in memoria:  %zu byte.\n", sizeof(long double*));
    
    // Si noti come tutti i puntatori hanno la stessa dimensione.
    // Questa dimensione è dipendente dall'architettura del computer per cui è compilato il programma.
    // Per esempio in un computer con processore a 64-bit si avranno indirizzi ad 8 byte
    //             in un computer con processore a 32-bit si avranno indirizzi ad 4 byte
    //
    
    return 0; 
}