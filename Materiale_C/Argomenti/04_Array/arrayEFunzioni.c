#include <stdio.h>

int * prodottoDue(int [4]);

int main() {
    int numeri [4] = {11, 22, 33, 44};
    int num2 [4]= numeri;
    //int * res = prodottoDue(numeri);
    for (int i = 0; i < 4; i++) {
        printf("%d ", num2[i]);
    }
    
    return 0;
}

int * prodottoDue(int arr [4]){
    int res [4];
    for (int i = 0; i < 4; i++) {
        res[i] = arr[i];
    }
    return res;
}