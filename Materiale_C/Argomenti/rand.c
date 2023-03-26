#include <stdio.h>
#include <stdlib.h>

double myRand() {
    return (double)rand() / (double)RAND_MAX ;
}

double myRandomInRange(double min, double max);

int main(){
    for (size_t i = 0; i < 100; i++) {
        printf("%f \n", myRandomInRange(-7.0, 7.0));
    }
    return 0; 
}

double myRandomInRange(double min, double max) {
    if (min > max){
        printf("Errore");
        return;
    }

    double result = 0.0; // tra min e max
    double estrazione = myRand();  // Estrazione di un numero casuale tra 0.0 ed 1.0 
    //
    // (max - min) * estrazione  -> corrisponde ad un valore che spazia nell'intervallo [0; (max-min)]
    // (max - min) * estrazione + min  -> corrisponde ad un valore che spazia nell'intervallo [min; (max-min) + min]
    //                                     che quindi è nell'intervallo [min; max]
    //
    return (max - min) * estrazione + min;
}