const colores = [ "rosa", "amarillo", "azul"];

console.log(colores.length);

// Trabajando con arreglos en JavaScript

// Los arreglos son estructuras de datos fundamentales en JavaScript para almacenar y manipular colecciones de elementos.

// Método 1: push() - Agregar Elementos al Final del Arreglo
const frutas = ['manzana', 'banana', 'pera'];
frutas.push('naranja', 'uva');
console.log(frutas);

// Método 2: pop() - Eliminar el Último Elemento del Arreglo
const ultimaFruta = frutas.pop();
console.log(frutas);
console.log(ultimaFruta);

// Método 3: unshift() - Agregar Elementos al Principio del Arreglo
frutas.unshift('naranja', 'uva');
console.log(frutas);

// Método 4: shift() - Eliminar el Primer Elemento del Arreglo
const primeraFruta = frutas.shift();
console.log(frutas);
console.log(primeraFruta);

// Método 5: concat() - Concatenar Arreglos
const numeros1 = [1, 2, 3];
const numeros2 = [4, 5, 6];
const numerosCombinados = numeros1.concat(numeros2);
console.log(numerosCombinados);
console.log(numeros1);
console.log(numeros2);

// Estos son cinco métodos esenciales para trabajar con arreglos en JavaScript.
// Cada uno tiene un propósito específico y puede ser muy útil en diversas situaciones.
// En las siguientes partes, exploraremos más métodos para trabajar con arreglos en JavaScript.
