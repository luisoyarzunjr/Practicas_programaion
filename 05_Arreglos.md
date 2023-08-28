# Estructuras de Datos y Algoritmos Fundamentales (Parte 2)
## Parte I: Arreglos
1. Determine ¿cuál de los siguientes son arreglos válidos?, Si fuera el caso, ¿determine el tipo
de arreglo?
Ej: ['p','e','r','r','o]: No es un arreglo, porque alta una comilla despues del caracrter 'o' para ser considerado un arreglo de caracteres.
   - [[1, 2, 3], [1, 9], [0], []]
   - [1, '2']
   - [(+), (<)]
   - [(+), (-), (*), div]
   - [[1, 2], 2, 3, 4]
   - ["Gato", "Felix"]
   - [(1, 2), (1, 4, 5)]
   - [1, [1]]
   - [12, 13], []]
   - [1.5, 1.6, 1.7, 1.8, 20.1]
   - ['a', False, '1']
   - ["Jorge", "Claudio", "Miguel"]
   - [("Jorge", 19), ("Claudio", 18), ("Miguel", 19)]
   - [fibonaci, factorial, sumaFactorial]
  
## Para las siguientes partes:
NOTA: En todas las funciones debe enviarse el tamaño del arreglo.
Ejemplos de arreglos para las pruebas:
-	`int a[] = {-1, 4, -3, -8, 9, 2, -4, 7, 10};`
-	`char c[] = {'a', 'B', 'c', 'D', '9'};`
-	`int t_int = end(a)-begin(a);`
-	`int t_char = end(c)-begin(c);`
Ejemplo de ejercución:
- `función(a, t_int);`, equivale a: `función([-1, 4, -3, -8, 9, 2, -4, 7, 10], 9);`

## Parte II: Ejercicios utilizando arreglos:
02. Cree la función **duplicarTodos** que reciba un arreglo de enteros y devuelva el doble de los valores. Ej:
    - `duplicarTodos([-1, 4, -3, -8, 9, 2, -4, 7, 10], 9);`
    - Resultado en pantalla: `[-2, 8, -6, -16, 18, 4, -8, 14, 20]`
03. Crear la función **esPar** que determine si los elementos de un arreglo son pares o no. Ej:
    - `esPar([-1, 4, -3, -8, 9, 2, -4, 7, 10], 9);`
    - Resultado en pantalla: `[0, 1 , 0, 1, 0, 1, 1, 0, 1]`
04. Crear la función **duplicarSoloPares** que duplique solo los números pares de un arreglo. Ej:
     - duplicarSoloPares([-1, 4, -3, -8, 9, 2, -4, 7, 10], 9);`
     - Resultado en pantalla: `[-1, 8, -3, -16, 9, 4, -8, 7, 20]`
05. Crear la función **triplicarSoloParesPositivos** que triplique el valor de los números pares positivos de un arreglo. Ej:
     - `triplicarSoloParesPositivos([-1, 4, -3, -8, 9, 2, -4, 7, 10], 9);`
     - Resultado en pantalla: `[-1, 12, -3, -8, 9, 6, -4, 7, 30]`
06. Crear la función **cuadradoSoloImpares** que retorne el cuadrado de los elementos impares de un arreglo. Ej:
     - `cuadradoSoloImpares([-1, 4, -3, -8, 9, 2, -4, 7, 10], 9);`
     - Resultado en pantalla: `[1, 4, 9, -8, 81, 2, -4, 49, 10]`
07. Definir una función **cuadrados** que retorne un arreglo que contenga los valores de _x^2_ donde _x_ pertenece al arreglo y _x_ es par. Ej:
     - `cuadrados([-1, 4, -3, -8, 9, 2, -4, 7, 10], 9);`
     - Resultado en pantalla: `[16, 64, 4, 16, 100]`
08. Crear la función **esLetra** que determine si los elementos de un arreglo son letras. Ej:
    - `esLetra(['a', 'B', 'c', 'D', '9'], 5);`
    - Resultado en pantalla: `[1, 1, 1, 1, 0]`
09. Crear la función **cambiarMayuscula** que recibe un arreglo de letras minúsculas y devuelve sus mayúsculas. Ej:
    - `cambiarMayuscula(['a', 'B', 'c', 'D', '9'], 5);`
    -  Resultado: `[A, B, C, D, 9]`

## Parte III: Aplicación de Funciones pre definidas sobre arreglos:
10. Cree una función llamada **invertir** que reciba un arreglo y devuelva el arreglo invertido. Ej:
    - `invertir([-1, 4, -3, -8, 9, 2, -4, 7, 10], 9);`
    - Resultado en pantalla: `[10, 7, -4, 2, 9, -8, -3, 4, -1]`
11. Cree una función **posPar** que reciba un arreglo y devuelva los elementos que se ubican en la posición par.  Ej:
    - `posPar([-1, 4, -3, -8, 9, 2, -4, 7, 10], 9);`
    - Resultado en pantalla: `[4, -8, 2, 7]`
    - Cree una función o actualice la existente para que funcione con caracteres
12. Cree una función **posImpar** que reciba una lista y devuelva los elementos que se ubican en la posición impar. Ej:
    - `posImpar([-1, 4, -3, -8, 9, 2, -4, 7, 10], 9);`
    - Resultado en pantalla: `[-1, -3, 9, -4, 10]`
    - Cree una función o actualice la existente para que funcione con caracteres
13. Cree una función llamada adjuntarI que inserte un elemento en una posición determinada de la lista. Ej:
    - `adjuntarI(['Z', 2, ['a', 'B', 'c', 'D', '9'], 5);`
    - Resultado en pantalla: `[a, Z, B, c, D, 9]`
    - Cree una función o actualice la existente para que funcione con números
14. Cree una función llamada adjuntarD que inserte un elemento en una posición determinada de la lista. La diferencia con el ejercicio anterior radica en que las posiciones se contaran desde la derecha. Ej:
    - `adjuntarD('Z', 2, ['a', 'B', 'c', 'D', '9'], 5);`
    - Resultado en pantalla: `[a, B, c, Z, D, 9]`
    - Cree una función o actualice la existente para que funcione con números
