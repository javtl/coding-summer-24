// 1. toFixed()
const numero1 = 3.14159265359;
const numeroFormateado = numero1.toFixed(2);
console.log(numeroFormateado); // Devuelve "3.14"

// 2. parseInt() y parseFloat()
const cadenaEntera = "42";
const cadenaDecimal = "3.14";

const numeroEntero = parseInt(cadenaEntera);
const numeroDecimal = parseFloat(cadenaDecimal);

console.log(numeroEntero); // Devuelve 42
console.log(numeroDecimal); // Devuelve 3.14

// 3. Math.round(), Math.floor() y Math.ceil()
const numero2 = 3.7;

const redondeoCercano = Math.round(numero2); // 4
const redondeoAbajo = Math.floor(numero2); // 3
const redondeoArriba = Math.ceil(numero2); // 4

// 4. Math.max() y Math.min()
const numeros = [5, 2, 9, 1, 7];

const maximo = Math.max(...numeros); // 9
const minimo = Math.min(...numeros); // 1

// 5. Math.random()
const numeroAleatorio = Math.random(); // Número entre 0 y 1 (ejemplo: 0.7854289)

// 6. Number.isNaN()
const valor3 = 5;
const valor4 = "texto";

console.log(Number.isNaN(valor3)); // Devuelve false
console.log(Number.isNaN(valor4)); // Devuelve true

// 7. Number.parseInt() y Number.parseFloat()
const cadenaEntera2 = "42";
const cadenaDecimal2 = "3.14";

const numeroEntero2 = Number.parseInt(cadenaEntera2);
const numeroDecimal2 = Number.parseFloat(cadenaDecimal2);

// 8. Number.isInteger()
const numero5 = 42;
const numero6 = 3.14;

console.log(Number.isInteger(numero5)); // Devuelve true
console.log(Number.isInteger(numero6)); // Devuelve false
