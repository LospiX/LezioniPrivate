#include <stdio.h>


// =========================================================
// 
// File creato il 26/03/2023
// 
// =========================================================

typedef struct {
    int x;
    int y;
    int z;
} Vet3D; 

void stampaVettore3D(Vet3D);
void modificaVettore(Vet3D);
void modificaConPtr (Vet3D* );
struct Vet2D creaVettoreBisettrice(int);

int main(){
    
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