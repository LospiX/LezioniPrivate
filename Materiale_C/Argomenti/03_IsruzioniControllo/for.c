#include <stdio.h>

int main (){
    printf("\n");
    // ======================================================
    //              <<<- SINTASSI ->>>
    //
    //      for (espressione_1; espressione_2; espressione_3)
    //            CORPO_DEL_CICLO
    //
    //  espressione_1 ->  viene eseguita UNA SOLA volta, PRIMA di tutto;
    //                    generalmente viene utilizzata per inizializzare o dichiarare variabili che
    //                    verranno utilizzate all'interno del ciclo
    //
    //  espressione_2 ->  viene eseguita dopo la prima espressione e dopo ogni esecuzione del CORPO del for;
    //                    DEVE contenere un'espressione che restutuisce un intero;
    //                    se il risultato è UGUALE a  0, allora il corpo del for NON verrà eseguito
    //                    e l'esecuzione del codice continuerà oltre,
    //                    se il risultato è DIVERSO da 0, allora sarà eseguito il CORPO_DEL_CICLO subito dopo.
    //
    //  espressione_3 ->  viene eseguita DOPO OGNi esecuzione del CORPO del ciclo for;
    //                    DEVE contenere un'espressione che restutuisce un intero;
    //                    se il risultato è pari a  0  allora il corpo del for NON verrà eseguito
    //                    e l'esecuzione del codice continuerà oltre.
    //
    //  CORPO_DEL_CICLO -> può essere una sola istruzione <ISTRUZIONE> oppure <BLOCCO> di istruzioni,
    //                     quindi una o più istruzioni delimitate da parentesi graffe.
    // ======================================================


    // -------------------------------------------------------
    // ESEMPI
    // -------------------------------------------------------
    printf("Primo ciclo for:\n");
    for (int i= 0; i<3; i++) {
        printf("\tSono dentro il ciclo for, i vale: %d\n", i);
    }
    
    // -------------------------------------------------------
    printf("\nSecondo ciclo for:\n");
    for (int i= 0; i<4;) {
        printf("\tSono dentro il ciclo for, i vale: %d\n", i);
        i++;
    }

    // -------------------------------------------------------
    printf("\nTerzo ciclo for:\n");
    int j= 0;
    for (; j<2; j++) {
        printf("\tSono dentro il ciclo for, j vale: %d\n", j);
    }

    // -------------------------------------------------------
    printf("\nQuarto ciclo for:\n");
    int z= 5;
    for(; z--;) {
        printf("\tSono dentro il ciclo for, z vale: %d\n", z);
    }
    printf("\n");
    return 0;
}