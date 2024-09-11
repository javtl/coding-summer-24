// Métodos para trabajar con arreglos en JavaScript

// 1. slice() - Copiar Parte de un Arreglo
const frutas = ['manzana', 'banana', 'pera', 'naranja', 'uva'];
const copiaFrutas = frutas.slice(1, 4); // Copia elementos desde el índice 1 hasta el 3

// 2. splice() - Modificar un Arreglo Eliminando, Reemplazando o Agregando Elementos
frutas.splice(1, 1); // Elimina 'banana' (índice 1, 1 elemento)
frutas.splice(1, 0, 'uva', 'naranja'); // Agrega 'uva' y 'naranja' (índice 1, no se eliminan elementos)
frutas.splice(1, 2, 'kiwi', 'mango'); // Reemplaza 'uva' y 'naranja' con 'kiwi' y 'mango'

// 3. join() - Convertir un Arreglo en una Cadena de Texto
const cadenaDeFrutas = frutas.join(', '); // Convierte el arreglo en una cadena

// 4. indexOf() y lastIndexOf() - Encontrar el Índice de un Elemento
const indiceKiwi = frutas.indexOf('kiwi'); // Devuelve 1 (primer índice de 'kiwi')
const ultimoIndiceKiwi = frutas.lastIndexOf('kiwi'); // Devuelve 4 (último índice de 'kiwi')
const indicePlatano = frutas.indexOf('plátano'); // Devuelve -1 (no se encuentra 'plátano')

// 5. includes() - Comprobar si un Elemento Existe en el Arreglo
const tieneKiwi = frutas.includes('kiwi'); // Devuelve true
const tienePlatano = frutas.includes('plátano'); // Devuelve false
