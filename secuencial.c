/*
 Suma con Secuencial
 Compilar con: gcc -o secuencial secuencial.c 


*/


#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

#define VECTOR_SIZE 100000000


void sumaSecuencial(int* v) {
    long long suma = 0;
    clock_t start = clock();
    
    for (size_t i = 0; i < VECTOR_SIZE; i++) {
        suma += v[i];
    }
clock_t end = clock();
    double duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Suma secuencial: %lld en %f segundos.\n", suma, duration);
}
int main() {
    int* v = (int*)malloc(VECTOR_SIZE * sizeof(int));
    assert(v != NULL); // Validar que la memoria fue asignada correctamente
    
    for (size_t i = 0; i < VECTOR_SIZE; i++) {
        v[i] = i % 100;
    }
    
    sumaSecuencial(v);
  
    
    free(v);
return 0;
}