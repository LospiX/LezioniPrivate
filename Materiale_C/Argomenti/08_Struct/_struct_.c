#include <stdio.h>

// Il tipo di dato STRUCT è un tipo composto.
// Permette di aggregare diversi dati sotto un'unica entità.
// Diventa possibile organizzare gruppi di variabili legate dal punto di vista concettuale in un unico tipo di dato.
// Dentro una struttura gli elementi che ne fanno parte sono ordinati (in ordine di dichiarazione) e contigui in memoria.
// 
// --------------------------
// --->     SINTASSI     <---
//
//      struct NOME_STRUTTURA {
//          ELENCO_MEMBRI
//      }; 
//
// (-) Il NOME_STRUTTURA scelto diventa l'identificativo di una nuova tipologia di dato, preceduto dalla keyword "struct"
//  |--->  è possibile creare una variabile: 
//  |           struct NOME_STRUTTURA NOME_VARIABILE; 
//  |
// (-) L'elenco dei membri non ha limitazioni, possono essere di qualsiasi tipo
//  |---> quando si crea una nuova struttura i membri vengono inizializzati con tutti i bit a 0
// --------------------------
//
//
// |----------------------------------------------------------------------------->
// Perchè è utile avere a disposizione questo nuovo dato??
//
// Si pensi ad una gruppo di persone e si immagini di voler acquisire in un programma 
// diverse informazioni (nome, cognome, età, statura, soldiInBanca) di ogni persona.
// 
// Le struct sono di grande supporto per la risoluzione di questo problema: 
//  (1) -> definiamo una struct con identificativo Persona e definiamo tutti i dati che ne fanno parte
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


// Dichiarazione di strutture per la rappresentazione di vettori geometrici nel piano e nello spazio
//
struct Vet2D {
    int x; 
    int y; 
};

typedef struct {
    int x;
    int y;
    int z;
} Vet3D; 

// Funzioni che saranno utili per mostrare in output i valori contenuti nelle strutture
//
void stampaVettore2D(struct Vet2D vet){
    printf ("Il vettore 2D ha coordinate: (%d, %d).\n",  vet.x, vet.y);
}

void stampaVettore3D(Vet3D vet){
    printf ("Il vettore 3D ha coordinate: (%d, %d, %d).\n",  vet.x, vet.y, vet.z);
}

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


    // L'operatore di confronto ' == ' non è valido tra due struttore
    // if( b==c ){ ... } Errore di compilazione, non è possibile utilizzare gli operatori di confronto tra due struct.
    //

    //---------------------------------------------------------------------------------
    // ===================================================================
    //                 INIZIALIZZAZIONE DI UNA STRUTTURA
    // ===================================================================
    //
    printf("\n\n===> ESEMPI DI INIZIALIZZAZIONE DI STRUTTURE\n\n");
    
    // ----------------------------------
    // Assegnazione dei valori ad ogni membro
    //
    struct moto {
        char* modello; 
        int peso; // Kg
        int capienzaSerbatoio; // l
        int kmPerLitro; // Km/l
    };
    printf("E' possibile inizializzare una struttura assegnando ad ogni membro il valore desiderato.\n");
    struct moto primaMoto;
    primaMoto.modello= "Yamaha";
    primaMoto.peso= 200;
    primaMoto.capienzaSerbatoio= 40;
    primaMoto.kmPerLitro= 15;
    printf("\tLa tua prima moto e' una %s di peso %d Kg.", primaMoto.modello, primaMoto.peso);
    printf("\n\tHa un serbatoio di capienza %d litri, ed e' in grado di percorrere %d kilometri con un litro\n\n", primaMoto.capienzaSerbatoio, primaMoto.kmPerLitro);
    
    // ----------------------------------
    // Inizializzazione con Parentesi Graffe
    //
    struct punto {double x,y,z;} p1 = {2.12, 3.5, -2.3}; // p.x= 2.12, p.y= 3.5, p.z= -2.3
    printf("Il primo punto nel piano ha coordinate (%f, %f, %f)\n", p1.x, p1.y, p1.z);

    // I valore all'interno delle graffe sono assegnati in maniera ordinata ai membri della struttura
    // 
    struct punto p2 = {1.2, 1.3}; // p.x= 1.2, p.y= 1.3, p.z= 0.0
    printf("Il secondo punto nel piano ha coordinate (%f, %f, %f)\n", p2.x, p2.y, p2.z);
    
    // Notazione per indicare nelle graffe il preciso membro a cui assegnare il valore
    //
    struct punto p3 = {.z= 4.3, .x= 8.93}; // p.x=8.93, p.y=0.0, p.z=4.3
    printf("Il terzo punto nel piano ha coordinate (%f, %f, %f)\n\n", p3.x, p3.y, p3.z);
    
    // ----------------------------------
    // Inizializzazione 
    //
    struct animale {
        char* nome;
        int numeroZampe;
    };
    struct animale cane= {"Toby", 4};
    printf("\n----------\n");
    printf("Il mio animale si chiama %s ed ha %d anni.\n", cane.nome, cane.numeroZampe);

    struct animale animaliDomestici []= {{"Rosita", 2}, cane, {"Aragog", 8}};
    printf("I miei animali domestici:\n");
    for(int i=0; i<3; i++){
        printf("\tAnimale numero %d:  nome= %s; numero zampe: %d.\n", i+1, animaliDomestici[i].nome, animaliDomestici[i].numeroZampe);
    }
    
    // Come detto una struttura è un dato composto,
    // una struttura al suo interno può contenere altre strutture come componenti di essa.
    //
    struct point {
        int x, y;
    };
    struct rectangle {
        struct point top_right, top_left, bottom_left, bottom_right;
    };

    // Inizializzo un rettangolo fatto in questa maniera:
    //    (0,5) +-----------+  (10,5)
    //          |           |
    //    (0,0) +-----------+  (10,0)
    //
    struct rectangle rettangolo = {{10, 5}, {0, 5}, {0, 0}, {10, 0}};
    printf("\n----------\n");
    printf("Coordinate del rettangolo:\n");
    printf("\t(%d, %d) +----------+ (%d, %d)\n", rettangolo.top_left.x, rettangolo.top_left.y, rettangolo.top_right.x, rettangolo.top_left.y);
    printf("\t       |          |\n");
    printf("\t(%d, %d) +----------+ (%d, %d)\n", rettangolo.bottom_left.x, rettangolo.bottom_left.y, rettangolo.bottom_right.x, rettangolo.bottom_right.y);

    // Array come membri di strutture
    //
    struct Dado {
        int possibiliValori[6];
        int numeriEstratti[300]; // Tiene traccia dello storico dei numeri estratti
        int indiceUltimoNumero;
    };
    struct Dado dado = {{1,2,3,4,5,6}, {4,3,2,5,1,6,6,4,3,2,4,1,2}, 13};
    printf("\n----------\n");
    printf("Il dado creato ha 6 possibili valori, ecco gli ultimi valori estratti:\n\t");
    for(int i=0; i<dado.indiceUltimoNumero; i++){
        printf("%d ", dado.numeriEstratti[i]);
    }
    // FINGIAMO che sia stato estratto un nuovo valore pari a 5, e lo aggiungiamo.
    dado.numeriEstratti[dado.indiceUltimoNumero]= 5; 
    dado.indiceUltimoNumero= dado.indiceUltimoNumero + 1; // Aggiorniamo l'indice dell'ultimo numero
    printf("\n\nIl dado aggiornato con l'estrazione del numero 5:\n\t");
    for(int i=0; i<dado.indiceUltimoNumero; i++){
        printf("%d ", dado.numeriEstratti[i]);
    }
    
    printf("\n\n");
    return 0;
}

