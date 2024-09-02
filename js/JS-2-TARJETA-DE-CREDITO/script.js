// Obtener referencias a los elementos de entrada
const inputCard = document.querySelector("#inputCard");
const inputDate = document.querySelector("#inputDate");
const inputCVV = document.querySelector("#inputCVV");

// Definir máscaras para los campos de entrada
const maskNumber = "####-####-####-####";
const maskDate = "##/##";
const maskCVV = "###";

// Variables para rastrear el estado actual de entrada
let current = "";
let cardNumber = [];
let dateNumber = [];
let cvvNumber = [];

// Escuchar el evento keydown en el campo de tarjeta
inputCard.addEventListener("keydown", (e) => {
  if (e.key === "Tab") {
    return; // Evitar el comportamiento predeterminado en la tecla Tab
  }
  e.preventDefault(); // Evitar que se ingresen caracteres en bruto
  handleInput(maskNumber, e.key, cardNumber); // Procesar la entrada
  inputCard.value = cardNumber.join(""); // Actualizar el valor del campo
});

// Escuchar el evento keydown en el campo de fecha
inputDate.addEventListener("keydown", (e) => {
  if (e.key === "Tab") {
    return; // Evitar el comportamiento predeterminado en la tecla Tab
  }
  e.preventDefault(); // Evitar que se ingresen caracteres en bruto
  handleInput(maskDate, e.key, dateNumber); // Procesar la entrada
  inputDate.value = dateNumber.join(""); // Actualizar el valor del campo
});

// Escuchar el evento keydown en el campo CVV
inputCVV.addEventListener("keydown", (e) => {
  if (e.key === "Tab") {
    return; // Evitar el comportamiento predeterminado en la tecla Tab
  }
  e.preventDefault(); // Evitar que se ingresen caracteres en bruto
  handleInput(maskCVV, e.key, cvvNumber); // Procesar la entrada
  inputCVV.value = cvvNumber.join(""); // Actualizar el valor del campo
});

// Función para procesar la entrada según la máscara
function handleInput(mask, key, arr) {
  let numbers = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"];

  // Manejar la tecla de retroceso (Backspace)
  if (key === "Backspace" && arr.length > 0) {
    arr.pop(); // Eliminar el último carácter
    return;
  }

  // Verificar si la tecla es un número y si no se excede la longitud de la máscara
  if (numbers.includes(key) && arr.length + 1 <= mask.length) {
    if (mask[arr.length] === "-" || mask[arr.length] === "/") {
      arr.push(mask[arr.length], key); // Agregar el separador y el número
    } else {
      arr.push(key); // Agregar el número directamente
    }
  }
}
