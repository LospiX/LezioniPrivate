#include <stdio.h>

void testSizeOfArray();
void stampaArrayInteri(int arr[], int dimensione);
void testArrayInit();

int main () {
    //    Un array è una sequenza, contigua in memoria, di elementi.
    //
    //    Dichiarazione di un array:
    //         tipoDiDato  identificatore [dimensione];
    //
    int arr[4];  
    //    arr è un array di quattro interi
    //    Questo array è dichiarato ma non inizializzato,
    //    significa quindi che gli elementi al suo interno potrebbero avere qualsiasi valore


    //    Dichiaro un array di 20 elementi interi senza inizializzarli
    //
    int arr_non_inizializzato[20]; 
    printf("Stampo il contenuto di un array di 20 interi che non è stato inizializzato:\n");
    for (size_t i = 0; i < 20; i++) {
        printf("%d ", arr_non_inizializzato[i]);
    }
    
    printf("\nOra stampo un array inizializzato:\n");
    int arr_inizializzato[10]= {5};  // Il primo elemeno è inizializzato con in valore 5 mentre tutti gli elementi dell'array sono inizializzati a 0
    for (size_t i = 0; i < 10; i++) {
        printf("%d ", arr_inizializzato[i]);
    }
    printf("\n");

    // Per accedere ad un elemento contenuto in un array si usa la sintassi:
    //     nomeArray[indice]
    // dove l'indice può essere un'espressione che ha come risultato un valore intero 
    //
    // Il primo elemento dell'array ha indice di posizione ZERO
    //
    arr[0]= 5;
    arr[1]= 10;
    arr[2]= 15;
    arr[3]= 20;
    printf("Primo elemento dell'array: %d\n", arr[0]);
    printf("L'ultimo elemento dell'array: %d\n", arr[3]);


    // Inizializzazione degli elementi di un array iterando
    //
    int numeriPari[5];
    for(int i=0; i<5; i++) {
        numeriPari[i] = i*2;
    }
    printf("\nI numeri pari salvati nell'array: \n\t");
    for(int i=0; i<5; i++) {
        printf("%d ,", numeriPari[i]);
    }


    // Inizializzazione degli elementi di un array
    //
    int numeri_1[3]= {10, 20, 30};
    int numeri_2[]= {7, 14, 21};
    int numeri_3[5]= {10, 20, 30}; // [10, 20, 30, 0, 0]
    int numeri_4[50]= {0}; 

    printf("\n\nElementi dell'array numeri_1:\n\t");
    for(int i=0; i<3; i++) {
        printf("%d ,", numeri_1[i]);
    }
    printf("\nElementi dell'array numeri_2:\n\t");
    for(int i=0; i<3; i++) {
        printf("%d ,", numeri_2[i]);
    }


    // Il nome dell'array funziona come un puntatore al tipo di dato contenuto nell'array
    // Ricordiamo che un puntatore è una variabile che contiene (punta) un indirizzo in memoria
    //
    // Il valore che si ottiene richiamando il nome dell'array è proprio l'indirizzo del primo elemento dell'array
    //     nomeArray  ===  % nomeArray[0]
    // 
    char caratteri[] = {'c','i','a','o'};
    printf("\n\nL'indirizzo del primo elemento dell'array tramite l'espressione \"&caratteri[0]\"\n\t%p", &caratteri[0]);
    printf("\nL'indirizzo del primo elemento dell'array tramite l'espressione \"caratteri\"\n\t%p\n", caratteri);
    printf("\nL'array \"caratteri\" e' un array di char, ogni char occupa in memoria %d byte", sizeof(char));
    printf("\n\nStampo gli elementi dell'array \"caratteri\":");
    for(int i=0; i<4; i++) {
        printf("\n\t%d-esimo elemento dell'array \"caratteri\" ha indirizzo in memoria: %p  e contiene il valore: %c", i, &caratteri[i], caratteri[i]);
    }

    double num[] = {1.12, 2.34, 3.45};
    printf("\n\nL'array \"num\" e' un array di double, ogni double occupa in memoria %d byte", sizeof(double));
    printf("\nStampo gli elementi dell'array \"num\":");
    for(int i=0; i<3; i++) {
        printf("\n\t%d-esimo elemento dell'array \"num\" ha indirizzo in memoria: %p  e contiene il valore: %f", i, &num[i], num[i]);
    }


    // Chiamo una funzione passando un array
    //
    int numeri_3[3]= {11, 22, 33};
    stampaArrayInteri(numeri_3, 3);

            // --------------------------------- //
            //---   ARRAY MULTIDIMENSIONALI   ---//
            // --------------------------------- //

    // Dichiarazione 
    //
    float matrice[3][4];
    for(int i = 0; i< 3; i++){
        for(int j=0; i< 4; j++){
            matrice[i][j] = 5*j*i;
        }
    }
    //   0  1  2  3
    //0 [ ][ ][ ][ ]
    //1 [ ][ ][x][ ]
    //2 [ ][ ][ ][ ]
    // matrice [1][2]
    // matrice [1][2] = nuovoValore

    // float vettore [5]; 
    // [][][][][]
    
    // Inizializzazione
    //
    int multipli_2 [][3] = {{2, 4, 6}, {8, 10, 12}};
    int numeri_primi [2][3] = {1, 2, 3, 5, 7, 9}; // In questo caso è necessario specificare la prima dimensione

    testSizeOfArray();
    
    testArrayInit();
    printf("\n\n");
    return 0;
}

// When an array type is used in a function parameter list, it is transformed to the corresponding pointer type:
//     int f(int a[2]) and int f(int* a) declare the same function. 
// Since the function's actual parameter type is pointer type,
// a function call with an array argument performs array-to-pointer conversion;
// the size of the argument array is not available to the called function and must be passed explicitly.
//
void stampaArrayInteri(int arr[], int dimensione){
    printf("\n\nStampo l'array nella funzione stampaArrayInteri\n\t");
    printf("Sizeof arr %zu \n", sizeof arr);
    for (int i = 0; i < dimensione; i++) {
        printf("%d ", arr[i]);
    }
}

void testSizeOfArray(){
    int dispari[]= {1,3,5,7,9,11};
    printf("\n\nSizeof dispari %zu \n", sizeof dispari);
    printf("Sizeof dispari %zu\n\n", sizeof(dispari));

    // Differenza tra un array ed un puntatore
    // 
    int a[3] = {1,2,3};
    int* p = a;
    printf("\t%zu\n", sizeof a); // Stampa la dimensione dell'array
    printf("\t%zu\n", sizeof p); // Stampa la dimensione del puntatore
}


void testArrayInit(){
    //
    //
    printf("\n");
    int another_array[5] = { [2] = 5, [4] = 9 };
    for (size_t i = 0; i < 5; i++) {
        printf("%d ",another_array[i]);
    }
    
    printf("\n\n");
    int new_array[25] = { [0 ... 5] = 1, [10 ... 20] = 2, 3 };
    for (size_t i = 0; i < 25; i++) {
        printf("%d ",new_array[i]);
    }
    
    printf("\n\n");
    int my_array[] = { 0, 1, 2, [19] = 321 };
    for (size_t i = 0; i < 20; i++) {
        printf("%d ",my_array[i]);
    }
}