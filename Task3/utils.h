#include <stdio.h>
#include "array_utils.h"

void print_array(int* array, int size){
    for (int i = 0; i != size; i++){
        printf(array[i], ", ");
    }
}