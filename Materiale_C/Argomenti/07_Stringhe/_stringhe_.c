#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void acquisisciNome(char* nome);

int main(){
    // Le stringhe sono sequenze di caratteri
    // Un valore costante di tipo stringa è una sequenza di caratteri racchiusa tra doppi apici
    // possono esserci: numeri, caratteri (ascii) alfabetici, spazi e simboli
    //     esempio  "bella questa stringa"
    //     esempio  " il 5% di 1000 vale 50!!!"
    //
    // C non ha un tipo specifico per rappresentare le stringhe
    // si usano quindi array di caratteri per rappresentare il tipo di dato
    //
    char prima_stringa[] = {'B','u','o','n','g','i','o','r','n','o','\0'};
    printf("Stampo la prima stringa:  \"%s\" \n", prima_stringa);


    // Un array di caratteri può essere una stringa, ma non sempre!!!
    // Per essere una stringa un array di caratteri deve avere come ultimo carattere quello speciale '\0'
    // Il carattere speciale '\0' è detto null-terminator ed è il delimitatore della stringa, indica la fine della stringa.
    //
    char str1 [] = {'X','a','v','i','e','r',' ','n','1','!'}; // Non è una vera e propria stringa 
    char str2 [] = {'C','o','m','e',' ','s','t','a','i','\0','?'}; // Una parte dell'array è considerata come una stringa 
    char str3 [] = {'B','e','n','e','!','\0'}; // E' una stringa
    char str4 [] = {'O','t','t','i','m','o',' ','\0','s','o','n','o',' ','c','o','n','t','e','n','t','o','.','\0'}; // Solo una parte dell'array è considerata come una stringa 
    
    
    // I caratteri dell'array successivi al carattere Nullo sono scartati, e non considerati parte di essa.
    //
    printf("Stampo la stringa nella variabile \"str1\":  %s\n", str1);
    printf("Stampo la stringa nella variabile \"str2\":  %s\n", str2);
    printf("Stampo la stringa nella variabile \"str3\":  %s\n", str3);
    printf("Stampo la stringa nella variabile \"str4\":  %s\n", str4);

    
    // I valori costanti di tipo stringa ("abcdef12345!_&..") hanno implicitamente come ultimo carattere quello speciale '\0'
    // Per salvare la stringa "ciao" è quindi necessario un array di 5 caratteri
    //
    char saluto[50];
    saluto[0]='c';
    saluto[1]='i';
    saluto[2]='a';
    saluto[3]='o';
    saluto[4]='\0';

    // Per calcolare la lunghezza di una stringa -> usare la funzione  strlen( stringa )  importando la libreria <string.h>
    // Il carattere terminale non è considerato nel calcolo della lunghezza di una stringa  
    // 

    printf("Stampo la stringa saluto: \"%s\"  di lunghezza %d\n", saluto, strlen(saluto));
    printf("\n\nSizeof \"saluto\":  %zu\n", sizeof "saluto");
    char alfabeto[] = "abc"; // dichiarazione di un char[4] inizializzato con 'a','b','c','\0'
    
    // Acquisire una stringa come input utente 
    //
    char nome[30];
    acquisisciNome(nome);
    printf("Ciao %s, e' un piacere conoscerti", nome);

    // Accedere ad i caratteri di una stringa
    // 
    printf("\nIl primo carattere del tuo nome e': %c\n", nome[0]);
    printf("\nOra lo cambio col carattere Z");
    nome[0] = 'Z';
    printf("\nOra il tuo nome e': %s", nome);


    // FUNZIONI UTILI PER OPERARE CON LE STRINGHE
    // ---> Includere la libreria : #include <string.h>
    //
    //      strlen() - calcola la lunghezza di una stringa
    //                 strlen(stringa) => restituisce un intero, che coincide con la lunghezza della stringa senza considerare il carattere nullo
    //      strcpy() - copia una stringa dentro un'altra
    //                 strcpy(stringaDaCopiare, stringaInCuiCopiare) -> restituisce il puntatore alla stringa in cui si copia
    //      strcmp() - compara due stringhe
    //                 strcmp(primaStringa, secondaStringa) -> restituisce un intero
    //                                                          < 0    => il primo carattere della prima stringa diverso è più piccolo
    //                                                          == 0   => il contenuto delle stringhe è uguale
    //                                                          > 0    => il primo carattere della prima stringa diverso è più grande
    //      strcat() - concatena due stringhe
    //                 strcat(primaStringa, secondaStringa) -> il puntatore alla prima stringa a cui è stata aggiunta in coda la seconda

    char animale[] = "Toby";
    printf("\n\nIl mio cane si chiama: %s\n", animale);
    printf("E' un nome di %d caratteri.\n", strlen(animale));
    char ilTuoAnimale[100];
    printf("Inserisci il nome del tuo animale domestico: ");
    scanf("%s", ilTuoAnimale);
    printf("%s e' un nome di %d caratteri.\n", ilTuoAnimale, strlen(ilTuoAnimale));
    printf("Se confrontiamo i due nomi con strcmp risulta: %d", strcmp(animale, ilTuoAnimale));
    printf("\n\nOra concateno i due nomi con un trattino in mezzo.\n");
    char concatenzione[100];
    strcat(concatenzione, animale);
    strcat(concatenzione, "---");
    strcat(concatenzione, ilTuoAnimale);
    printf("\nEcco qui il risultato: %s, composto da %d caratteri.\n", concatenzione, strlen(concatenzione));

    printf("\n");
    return 0;
}

// char[]  ===  char*
void acquisisciNome(char* nome){
    printf("Inserisci il tuo nome: ");
    scanf("%s", nome);  // Prende tutti i caratteri utente fino ad un "null character", gli il aggiunge il null terminator '\0' ,
    // Infine salva tutto dentro l'array
}