#include <stdio.h>

int main() {
    enum animals {dog, cat, hamster= 123, rabbit};   

    enum animals myPet = hamster;
    printf("Il mio animale domestico: %d", myPet);


    return 0;
}