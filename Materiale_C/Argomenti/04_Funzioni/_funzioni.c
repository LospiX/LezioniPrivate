    #include <stdio.h>
    
    // =========================================================
    // 
    // File creato il 26/03/2023 da Xavier Perani
    // 
    // =========================================================

    int somma(int a, int b) {
        return a+b;
    }
    int somma(char a) {
        printf("hi");
    }
    
    // =============================================================
    // Non è possibile definire un'altra funzione con lo stesso nome:
    // 
    //      int somma(int a, int b, int c) {
    //          return a+b+c;
    //      }
    //
    // Causa errore eseguire questa definizione
    // =============================================================
    int main(){
        printf("\n\n|----------->\n");
        printf("|===>\tFILE: _funzioni.c\n");
        printf("|----------->\n\n");
        printf("\t ~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\tINIZIO ESECUZIONE PROGRAMMA");
        printf("\n\t ~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    
        
    
        printf("\n\n\t  ~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("\t FINE ESECUZIONE PROGRAMMA");
        printf("\n\t  ~~~~~~~~~~~~~~~~~~~~~~~\n\n");
        return 0;
    }