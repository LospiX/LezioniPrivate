#include <stdio.h>

// Il tipo di dato STRUCT è un tipo composto.
// Permette di aggregare diversi dati sotto un'unica entità.
// Diventa possibile organizzare gruppi di variabili legate dal punto di vista concettuale in un unico tipo di dato.
//
// |----------------------------------------------------------------------------->
// Si pensi ad una gruppo di persone e si immagini di voler acquisire in un programma 
// diverse informazioni (nome, cognome, età, statura, soldiInBanca) di ogni persona.
// 
// Le struct sono di grande supporto per la risoluzione di questo problema: 
//  (1) -> definiamo una struct con identificativo Persona e definiamo tutti i dati che ne faranno parte
//
//  struct Persona {
//      char* nome;
//      char* cognome;
//      int anni;
//      int altezza;
//      float soldiInBanca;
//  };
//  
//  (2) -> Per ogni persona verra creata una variabile con tipo di dato proprio Persona
//
//  struct Persona paolo;  // "struct Persona" -> è il tipo di dato;  "paolo" -> è il nome della variabile
//  struct Persona francesco;
//  struct Persona sabrina;
//
//  (3) -> Per accedere alle variabili che costituiscono una struttura si usa la sintassi:
//         NOME_VARIABILE.NOME_CAMPO 
//  
//  paolo.nome = "Paolo";
//  paolo.anni = 21;
//  paolo.altezza = 176;
//  francesco.anni = 20;
//  francesco.nome = "Francesco";
//  sabrina.altezza = 173;
//  sabrina.cognome = "Poletti";



struct Vet2D {
    int x; 
    int y; 
};

typedef struct {
    int x;
    int y;
    int z;
} Vet3D; 

struct point {
    int x, y;
};

struct rectangle {
    struct point top_left, bottom_right;
};

struct rectangle rettangolo = { {0, 5}, {10, 0} };

// Prototipi delle funzioni
//
void stampaVettore3D(Vet3D); // Usando typedef non è necessaria la keyword struct.
void stampaVettore2D(struct Vet2D); // La classica definizione richiede invece la ripetizione

int main(){
    printf("\n");
    
    // Creo un vettore di due dimensioni
    //
    struct Vet2D a;
    a.x= 1; // assegno al membro x un valore
    a.y= 2; // assegno al membro y un valore
    printf("Stampo il vettore a: \n\t");
    stampaVettore2D(a);


    // Creo un vettore di tre dimensioni
    //
    Vet3D b; 
    b.x= 3;
    b.y= 4;
    b.z= 5;
    printf("Stampo il vettore b: \n\t");
    stampaVettore3D(b);

    printf("\nOra modifico due sue componenti.\n");
    b.y= 10;
    b.z= 20;
    printf("Stampo il vettore b: \n\t");
    stampaVettore3D(b);

    // =================================================
    //
    // ASSEGNAMENTO DI UNA STRUTTURA ad un'altra
    // E' possibile inizializzare una struttura attraverso un'altra
    // L'operazione corrisponde ad assegnare a tutti i membri della prima i valori dei membri della seconda.
    //
    printf("\nEseguo: Vet3D c = b \n");
    Vet3D c = b; 
    printf("Stampo il vettore c: \n\t");
    stampaVettore3D(c);
    
    // Il vettore c ed il vettore b sono due entità separate, la modifica di una non influisce sullo stato dell'altra 
    // 
    printf("\n\nMofifico il vettore c eseguendo:\n\tc.x= 5;\n");
    c.x= 5;
    printf("Stampo il vettore c: \n\t");
    stampaVettore3D(c);
    printf("Stampo il vettore b: \n\t");
    stampaVettore3D(b);


    // if( b==c ){ ... } Errore di compilazione, non è possibile utilizzare gli operatori di confronto tra due struct.

    return 0;
}

void stampaVettore2D(struct Vet2D vet){
    printf ("Il vettore 2D ha coordinate: (%d, %d).\n",  vet.x, vet.y);
}

void stampaVettore3D(Vet3D vet){
    printf ("Il vettore 3D ha coordinate: (%d, %d, %d).\n",  vet.x, vet.y, vet.z);
}
