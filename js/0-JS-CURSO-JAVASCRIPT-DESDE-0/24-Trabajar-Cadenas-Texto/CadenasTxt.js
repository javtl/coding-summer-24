// 1. length
const texto1 = "Hola, mundo";
console.log(texto1.length); // Devuelve 11 (espacios incluidos)

// 2. charAt()
const texto2 = "Hola";
console.log(texto2.charAt(1)); // Devuelve "o"

// 3. substring()
const texto3 = "Hola, mundo";
console.log(texto3.substring(0, 4)); // Devuelve "Hola"

// 4. slice()
const texto4 = "Hola, mundo";
console.log(texto4.slice(-5)); // Devuelve "mundo"

// 5. toUpperCase() y toLowerCase()
const texto5 = "JavaScript";
console.log(texto5.toUpperCase()); // Devuelve "JAVASCRIPT"
console.log(texto5.toLowerCase()); // Devuelve "javascript"

// 6. trim()
const texto6 = "  Hola, mundo  ";
console.log(texto6.trim()); // Devuelve "Hola, mundo"

// 7. concat()
const saludo = "Hola";
const nombre = "Juan";
console.log(saludo.concat(", ", nombre)); // Devuelve "Hola, Juan"

// 8. split()
const texto7 = "manzana,banana,cereza";
const frutas = texto7.split(",");
console.log(frutas); // Devuelve ["manzana", "banana", "cereza"]

// 9. indexOf() y lastIndexOf()
const texto8 = "Hola, mundo";
console.log(texto8.indexOf("mundo")); // Devuelve 6
console.log(texto8.lastIndexOf("o")); // Devuelve 7

// 10. replace()
const texto9 = "Hola, mundo";
const nuevoTexto = texto9.replace("mundo", "JavaScript");
console.log(nuevoTexto); // Devuelve "Hola, JavaScript"
