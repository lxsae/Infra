/*
 Suma con stride
 Compilar con: gcc -o stride stride.c 
 Ejecutar con: ./stride
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

#define VECTOR_SIZE 100000000
#define STRIDE 16


void sumaConStride(int* v) {
    long long suma = 0;
    clock_t start = clock();
    
    for (int offset = 0; offset < STRIDE; offset++) {
        for (size_t i = offset; i < VECTOR_SIZE; i += STRIDE) {
            suma += v[i];
        }
    }
    
    clock_t end = clock();
    double duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Suma con stride %d: %lld en %f segundos.\n", STRIDE, suma, duration);
}

int main() {
    int* v = (int*)malloc(VECTOR_SIZE * sizeof(int));
    assert(v != NULL); // Validar que la memoria fue asignada correctamente
    
    for (size_t i = 0; i < VECTOR_SIZE; i++) {
        v[i] = i % 100;
    }
    
    sumaConStride(v);
    
    free(v);
return 0;
}

