#include <stdlib.h>
#include <stdio.h>
void printElems(int* pt, int num);

int main(){
    int * first_ptr = malloc(10 * sizeof(int)); 
    int * second_ptr= malloc(5 * sizeof(int));
    printf("First ptr address %p, first elem address: %p  -  last elem address: %p\n", &first_ptr, first_ptr, &first_ptr[9]);
    printf("Distance between first and last:: %d\n", ((&first_ptr[9])-first_ptr));
    printf("Second ptr address %p, first elem address: %p  -  last elem address: %p\n", &second_ptr, second_ptr, &second_ptr[4]);
    printf("Distance between first of second and last of first:: %d\n", (second_ptr- (&first_ptr[9])));
    int * third_ptr = first_ptr;
    printf("Third ptr address %p, \n\n", &third_ptr);

    for(int i=0; i<10; i++){
        first_ptr[i] = i+1;
    }
    for(int i=0; i<5; i++){
        second_ptr[i] = i+20;
    }

    //first_ptr+=5;
    printElems(third_ptr, 10);
    printElems(second_ptr, 5);
    free(first_ptr);
    printElems(second_ptr, 5);
    printElems(third_ptr, 10);
    printf("\nSize of third_ptr:: %d", sizeof(third_ptr));
    return 0;
}

void printElems(int* pt, int num){
    for(int i=0; i<num; i++){
        printf("%d ", pt[i]);
    }
    printf("\n");
}