// Métodos para trabajar con arreglos en JavaScript (Parte 3, 4 y 5).

// Método 21: splice() (Parte 2) - Insertar Elementos en un Arreglo
const frutas = ['manzana', 'kiwi', 'mango', 'pera'];
frutas.splice(1, 0, 'uva', 'naranja');
console.log(frutas);

// Método 22: reduceRight() - Reducir un Arreglo de Derecha a Izquierda
const numeros = [1, 2, 3, 4, 5];
const restaDerechaAIzquierda = numeros.reduceRight((acumulador, numero) => acumulador - numero);
console.log(restaDerechaAIzquierda);

// Método 23: Array.from() - Crear un Arreglo desde un Objeto Similar a un Arreglo
const cadena = 'JavaScript';
const arregloDeCaracteres = Array.from(cadena);
console.log(arregloDeCaracteres);

// Método 24: Array.isArray() - Verificar si un Objeto es un Arreglo
const miArreglo = [1, 2, 3];
const esArreglo = Array.isArray(miArreglo);
console.log(esArreglo);

// Método 25: Array.of() - Crear un Arreglo con Elementos
const miArreglo2 = Array.of(1, 2, 3);
console.log(miArreglo2);

// Estos métodos son fundamentales para manipular, crear y verificar arreglos en JavaScript.
// Con esta serie de explicaciones, tienes una sólida comprensión de cómo trabajar con arreglos en tus aplicaciones web.
