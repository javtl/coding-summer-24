// pertenece las variables a declaraciones con const o  let dentro de un bloque

if (true) {
    let x = 10; // Variable de bloque
    console.log(x); // Imprime 10
  }
  
  console.log(x); // Error: 'x' no está definido fuera del bloque