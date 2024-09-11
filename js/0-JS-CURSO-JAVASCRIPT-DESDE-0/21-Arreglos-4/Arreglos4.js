// Métodos para trabajar con arreglos en JavaScript (Parte 3 y Parte 4).

// Método 16: every() - Verificar si Todos los Elementos Cumplen una Condición
const numeros = [2, 4, 6, 8, 10];
const sonPares = numeros.every(numero => numero % 2 === 0);
console.log(sonPares);

// Método 17: find() - Encontrar el Primer Elemento que Cumple una Condición
const frutas = ['manzana', 'kiwi', 'mango', 'pera'];
const frutaBuscada = frutas.find(fruta => fruta.length > 5);
console.log(frutaBuscada);

// Método 18: findIndex() - Encontrar el Índice del Primer Elemento que Cumple una Condición
const indiceFrutaLarga = frutas.findIndex(fruta => fruta.length > 5);
console.log(indiceFrutaLarga);

// Método 19: sort() - Ordenar los Elementos de un Arreglo
const frutasOrdenadas = [...frutas].sort();
console.log(frutasOrdenadas);

const numerosOrdenados = [...numeros].sort((a, b) => a - b);
console.log(numerosOrdenados);

// Método 20: reverse() - Invertir el Orden de los Elementos de un Arreglo
const frutasInvertidas = [...frutas].reverse();
console.log(frutasInvertidas);

// Estos métodos son esenciales para manipular, buscar y organizar datos en arreglos en JavaScript.
// Cada uno tiene su utilidad específica y permite realizar tareas comunes de manera eficiente.
// En la próxima y última parte, se explicarán algunos métodos adicionales para trabajar con arreglos en JavaScript.
