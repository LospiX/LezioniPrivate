#include <stdio.h>
#include <string.h>

// =========================================================
// 
// File creato il 26/03/2023 da Xavier Perani
// 
// =========================================================


int main(){
    printf("\n\n|----------->\n");
    printf("|===>\tFILE: test.c\n");
    printf("|----------->\n\n");
    printf("\t ~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\tINIZIO ESECUZIONE PROGRAMMA");
    printf("\n\t ~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");

    struct ss {
        char nome[35];
        int a;
        double b;
        double c;
    } pollo;

    
    strcpy(pollo.nome, "Paolo");
    printf("Dentro la struct pollo il membro nome ha valore %s\n", pollo.nome);
    printf("%d %f %f", pollo.a, pollo.b, pollo.c);
    
    struct ss gatto;
    strcpy(gatto.nome, "Zapp");
    printf("Dentro la struct gatto il membro nome ha valore %s\n", gatto.nome);
    printf("%d %f %f", gatto.a, gatto.b, gatto.c);
    

    // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    // ==============================
    //         ESEMPIO <<< Prova di test >>>
    // :::DESCRIZIONE:::
    // sdkajkasjdk
    // ==============================
    printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("==== INIZIO ESEMPIO <%s> ====\n\n", "Prova di test");
    
    printf("Hi");
    
    printf("\n\n====  FINE ESEMPIO <%s> ====\n", "Prova di test");
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    // ..............................   
    


    
    printf("\n\n\t  ~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t FINE ESECUZIONE PROGRAMMA");
    printf("\n\t  ~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    return 0;
}