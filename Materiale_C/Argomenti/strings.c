#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char prima_stringa[] = {'B','u','o','n','g','i','o','r','n','o','\n'};
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
    char saluto[5];
    saluto[0]='c';
    saluto[1]='i';
    saluto[2]='a';
    saluto[3]='o';
    saluto[4]='\0';

    // Per calcolare la lunghezza di una stringa -> usare la funzione  strlen( stringa )  importando la libreria <string.h>
    // Il carattere terminale non è considerato nel calcolo della lunghezza di una stringa  
    // 
    printf("Stampo la stringa saluto: \"%s\"  di lunghezza %d\n", saluto, strlen(saluto));

    char alfabeto[] = "abc"; // dichiarazione di un char[4] inizializzato con 'a','b','c','\0'
    printf("ciao");

    return 0;
}