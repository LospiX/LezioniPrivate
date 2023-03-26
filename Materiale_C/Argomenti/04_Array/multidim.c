#include <stdio.h>
void printMat_puntatore(int* mat, int n, int c);
void printMat(int mat[][4], int n, int c);
// void printMat2(int n, int c, int mat[][c]);  ONLY c99 compatibile

int main(){
    int matrice[3][4];

    for(int i = 0; i< 3; i++){
        for(int j=0; j< 4; j++){
            matrice[i][j] = 5*j*i;
        }
    }

    printMat_puntatore(matrice, 3, 4);

    // for(int i = 0; i< 3; i++){
    //     for(int j=0; j< 4; j++){
    //         printf("%f ", matrice[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}
void printMat_puntatore(int* mat, int n, int c) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j<c; j++) {
            printf("%d ", *(mat + j + c*i));
        }
        printf("\n");
    }
    
}
void printMat(int mat[][4], int n, int c){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j<c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}