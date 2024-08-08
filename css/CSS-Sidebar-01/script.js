// Obtener una referencia al elemento del cuerpo del documento
const bodyEl = document.body;

// Obtener una referencia al elemento con la clase "hamburger"
const hamburgerEl = document.querySelector('.hamburger');

// Agregar un evento de escucha para el clic en el elemento "hamburger"
hamburgerEl.addEventListener('click', () => {
    // Alternar la clase 'active' en el elemento del cuerpo del documento
    bodyEl.classList.toggle('active');
});
