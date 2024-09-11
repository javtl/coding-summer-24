// Aquí se explican varios métodos útiles para trabajar con arreglos en JavaScript.

// Método 1: forEach() - Iterar sobre Elementos de un Arreglo
const frutas = ['manzana', 'kiwi', 'mango', 'pera'];
frutas.forEach((fruta, indice) => {
  console.log(`Índice ${indice}: ${fruta}`);
});

// Método 2: map() - Crear un Nuevo Arreglo basado en un Arreglo Existente
const numeros = [1, 2, 3, 4, 5];
const duplicados = numeros.map(numero => numero * 2);
console.log(duplicados);

// Método 3: filter() - Filtrar Elementos de un Arreglo
const mayoresQueTres = numeros.filter(numero => numero > 3);
console.log(mayoresQueTres);

// Método 4: reduce() - Reducir un Arreglo a un Valor Único
const suma = numeros.reduce((acumulador, numero) => acumulador + numero, 0);
console.log(suma);

// Método 5: some() - Verificar si Algunos Elementos Cumplen una Condición
const hayNumerosPares = numeros.some(numero => numero % 2 === 0);
console.log(hayNumerosPares);

// Estos métodos son herramientas poderosas para trabajar con arreglos en JavaScript.
// Permiten realizar tareas como iterar, transformar, filtrar y resumir datos de manera efectiva.
// En la próxima parte, se explicarán más métodos útiles para trabajar con arreglos.
