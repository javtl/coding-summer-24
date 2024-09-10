function calcularSuma(a, b) {
    // Variables locales 'a' y 'b' solo son visibles dentro de la función
    const resultado = a + b; // 'resultado' es una variable local
    return resultado;
  }
  
  const suma = calcularSuma(5, 3); // Se llama a la función y se obtiene el resultado
  console.log(suma); // Imprime 8
  console.log(resultado); // Error: 'resultado' no está definido fuera de la función
  