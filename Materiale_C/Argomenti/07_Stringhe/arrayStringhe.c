#include <stdio.h>

int main(){
    char animali[20][11]; // 20 stringhe da massimo 10 caratteri, L'ultimo carattere è riservato per il null-terminator!!!!
    
    // [X][][][][][][][][][][]  l'elemento X ha indici -> (0, 0);   l'indirizzo dell'elemento è: &animali[0][0] 
    // [Y][][][][][][][][][][]  l'elemento Y ha indici -> (1, 0);   l'indirizzo dell'elemento è: &animali[1][0]
    // [Z][][][][][][][][][][]  l'elemento Z ha indici -> (2, 0);   l'indirizzo dell'elemento è: &animali[2][0]
    // [K][][][][][][][][][][]  l'elemento K ha indici -> (3, 0);   l'indirizzo dell'elemento è: &animali[3][0]
    // [][][][][][][][][][][]    
    // [][][][][][][][][][][]   
    //  ...  x 13 volte
    // [][][][][][][][][][][]   

    int numAnimali;
    printf("\nDimmi quanti animali vuoi inserire(massimo 20): ");
    scanf("%d", &numAnimali);
    
    for (int i = 0; i < numAnimali; i++) {
        printf("Inserisci un animale (massimo 10 caratteri): ");
        scanf("%s", &animali[i][0]); // Passo l'indirizzo del primo carattere dell'i-esima Riga
    }

    printf("\nSono stati inseriti %d animali:\n\t", numAnimali);
    for (int i = 0; i < numAnimali; i++) {
        printf("%s  -  ", &animali[i][0]);
    }
    
    // INPUT CHE CAUSA ERRORE: 
    // Numero animali: 3
    //      cane 
    //      alidipollonaturama
    //      gatto
    //
    // |===> Dopo l'input: cane
    // l'array "animali" è in questo stato:
    //
    //      ['c']['a']['n']['e']['\0'][][][][][][]
    //      [][][][][][][][][][]    
    //      [][][][][][][][][][]  
    //      ... x 16 volte 
    //      [][][][][][][][][][]   
    // --------------------------------------------
    //
    // |===> Dopo l'input: alidipollonaturama
    // l'array "animali" è in questo stato:
    //
    //      ['c']['a']['n']['e']['\0'][][][][][][]
    //      [a][l][i][d][i][p][o][l][l][o][n]    
    //      [a][t][u][r][a][m][a]['\0'][][]   
    //      ... x 16 volte 
    //      [][][][][][][][][][]   
    // --------------------------------------------

    // |===> Dopo l'input: gatto
    // l'array "animali" è in questo stato:
    //
    //      ['c']['a']['n']['e']['\0'][][][][][][]
    //      [a][l][i][d][i][p][o][l][l][o][n]    
    //      [g][a][t][t][o]['\0'][a]['\0'][][]   
    //      ... x 16 volte 
    //      [][][][][][][][][][]   
    // --------------------------------------------
    
    // Per stampare il carattere rimasto nell'array dentro la riga gatto:
    // printf("\n\nCARATTERE SPORCIZIA: %c", animali[2][6]);

    printf("\n");
    return 0;
}