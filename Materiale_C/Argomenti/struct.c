#include <stdio.h>

struct Vet2D {
    int x; 
    int y; 
};

typedef struct {
    int x;
    int y;
    int z;
} Vet3D; 

void stampaVettore3D(Vet3D);
void stampaVettore2D(struct Vet2D);
void modificaVettore(Vet3D);
void modificaConPtr (Vet3D* );
struct Vet2D creaVettoreBisettrice(int);

int main(){
    printf("\n");
    struct Vet2D a;
    a.x= 1;
    a.y= 2;
    
    Vet3D b; 
    b.x= 3;
    b.y= 4;
    b.z= 5;
    printf("Stampo il vettore b: \n\t");
    stampaVettore3D(b);
    modificaVettore(b);
    printf("Stampo il vettore b: \n\t");
    stampaVettore3D(b);

    // Assegnamento di una struttura ad un'altra
    //
    printf("\nEseguo: Vet3D c = b;");
    Vet3D c = b; 
    
    // if( b==c ){ ... } Errore di compilazione, non è possibile utilizzare gli operatori di confronto tra due struct.

    printf("\nEseguo: c.y= 444;\n");
    c.y= 444;
    stampaVettore3D(c);
    

    printf("\nModifico il vettore b attraverso il puntatore.\n->\n");
    printf("Stampo il vettore b: \n\t");
    stampaVettore3D(b);
    modificaConPtr(&b);
    printf("Stampo il vettore b: \n\t");
    stampaVettore3D(b);

    printf("\n\nOra creo un vettore bisettrice.\n");
    struct Vet2D vettore_bisettrice= creaVettoreBisettrice(5);
    printf("Stampo il vettore bisettrice creato: \n\t");
    stampaVettore2D(vettore_bisettrice);
    printf("\n");
    return 0;
}

void stampaVettore3D(Vet3D vet){
    printf ("Il vettore 3D ha coordinate: (%d, %d, %d).\n",  vet.x, vet.y, vet.z);
}

void stampaVettore2D(struct Vet2D vet){
    printf ("Il vettore 2D ha coordinate: (%d, %d).\n",  vet.x, vet.y);
}
// Funzione che prova a modificare un vettore 3d 
void modificaVettore (Vet3D v) {
    v.x = 3;
    v.y = 3;
    v.z = 3;
    printf("Stampo il vettore modificato dentro la funzione \"modificaVettore\": \n\t");
    stampaVettore3D(v);
}

// Funzione che modifica un vettore 3d 
void modificaConPtr ( Vet3D * p) {
    p -> x = 10;
    (*p).x = 20;
    p -> z = 30;
    // p -> x    E' EQUIVALENTE A   (*p).x

    printf("Stampo il vettore dentro la funzione \"modificaConPtr\": \n\t");
    stampaVettore3D(*p);
}

// Costruisce un vettore 2D
struct Vet2D creaVettoreBisettrice(int coordinata){
    struct Vet2D vettore;
    vettore.x = coordinata;
    vettore.y = coordinata;
    return vettore;
}