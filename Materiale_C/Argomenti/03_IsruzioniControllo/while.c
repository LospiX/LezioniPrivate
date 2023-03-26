#include <stdio.h>

int main() {
    printf("\n<-----   INIZIO ESEMPI CICLO WHILE  ----->\n\n");
    

    // La sintassi del ciclo while è: 
    // while ( condizione ) 
    //     [Istruzione] oppure [blocco di istruzioni]
    //
    // La condizione è un espressione che: 
    //     se risulta essere DIVERSA da zero  =>  esegue la/le istruzioni 
    //     se risulta essere UGUALE  a  zero  =>  NON esegue la/le istruzioni
    //
    
    int contatore = 0;
    printf("Inizio l'esecuzione del primo ciclo while\n");
    while (contatore < 5) {
        printf("\tSono dentro il primo ciclo while, contatore vale: %d;\n", contatore);
        contatore= contatore + 1;
    }
    

    int n = 10;
    printf("\nInizio ad iterare:\n");
    while(n-- > 0)
        printf("\t%d-esima iterazione\n", 10-n);

    return 0;
}