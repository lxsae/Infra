# Ejercicio: Comparación de Accesos Contiguos vs. Accesos con Stride en un Vector

Dentro de los archivos se implementa una idea con un stride de 16 y el vector de tamaño 100,000,000.
Para:
  - Medir Rendimiento y Cache Misses:
  - Mide el tiempo de ejecución de cada programa.
  - Compila el programa y ejecútalo con Valgrind Cachegrind para obtener las métricas de
   caché (como I1 misses, LLi miss rate y LL refs).
Luego,
Analizar Resultados:
  - Compara las estadísticas de cache misses entre ambos programas.
  - Se vé alguna diferencia de la manera cómo el acceso contiguo (stride 1) aprovecha la localidad espacial,
    reduciendo los misses, mientras que el acceso con un stride mayor provoca saltos entre
    líneas de caché, aumentando los misses?


# Integrantes :

- Sebastian Marulanda Cardenas - 2410241
- Venus Paipilla -   
- Nicolas Garces Larrahondo - 2180066
- Ivan Alexis Noriega - 2126012

# Instruciones de ejecucion:

- Debes tener instalado Ubuntu, valgrind
- En la terminal ejecutamos `gcc -o stride stride.c ` o  `gcc -o secuencial secuencial.c `
- Ejecutas el comando `valgrind --tool=cachegrind --cache-sim=yes --branch-sim=yes ./stride `
- `valgrind --tool=cachegrind --cache-sim=yes --branch-sim=yes ./secuencial `
