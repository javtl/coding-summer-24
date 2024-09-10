// Varibales declaradas fuera de una funcion
// se puede acceder desde cualquier parte del codigo

var nombre = "Juan";

function saludar() {
  // Accediendo a la variable global desde una función
  console.log(`Hola, ${nombre}!`);
}

saludar(); // Imprime "Hola, Juan!" ya que 'nombre' es una variable global
