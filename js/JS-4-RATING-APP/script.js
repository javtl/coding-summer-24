// Seleccionar el contenedor de calificación
const ratingContainer = document.querySelector(".rating");

// Inicializar el valor de calificación actual y el límite de calificación
let currentValue = 0;
const limit = 5;

// Crear un array de elementos HTML representando las estrellas
const html = Array.from(Array(limit)).map((item, i) => {
  return `<div class="item item-${i}" data-pos="${i}"></div>`;
});

// Insertar los elementos HTML en el contenedor de calificación
ratingContainer.innerHTML = html.join("");

// Agregar event listeners a cada elemento de calificación
document.querySelectorAll(".item").forEach((item) => {
  // Evento cuando el cursor pasa sobre una estrella
  item.addEventListener("mouseover", (e) => {
    const pos = item.getAttribute("data-pos");

    // Evitar cambios innecesarios si la calificación es la misma
    if (currentValue === parseInt(pos) + 1) {
      return;
    }

    // Restablecer el estado de todas las estrellas
    document.querySelectorAll(".item").forEach((item) => {
      if (item.classList.contains("item-full")) {
        item.classList.remove("item-full");
      }
    });

    // Establecer el estado de las estrellas hasta la posición actual
    for (let i = 0; i <= pos; i++) {
      const item = document.querySelector(`.item-${i}`);
      if (!item.classList.contains("item-full")) {
        item.classList.add("item-full");
      }
    }

    // Actualizar el valor de calificación actual
    currentValue = parseInt(pos) + 1;
  });

  // Evento cuando se hace clic en una estrella
  item.addEventListener("click", (e) => {
    const pos = item.getAttribute("data-pos");

    // Actualizar el valor de calificación actual
    currentValue = parseInt(pos) + 1;
    console.log(currentValue); // Mostrar el valor de calificación actual en la consola
  });
});





