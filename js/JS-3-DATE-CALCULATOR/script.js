// Declaración de la matriz de eventos
let events = [];

// Obtención de elementos del DOM
const eventName = document.querySelector("#eventName");
const eventDate = document.querySelector("#eventDate");
const buttonAdd = document.querySelector("#bAdd");
const tasksContainer = document.querySelector("#tasksContainer");

// Carga inicial de datos desde el almacenamiento local
const json = load();
try {
  events = JSON.parse(json) || [];
} catch (error) {
  console.error("Error al cargar datos:", error);
}

// Renderiza los eventos iniciales
renderEvents();

// Evita que el formulario se envíe y recargue la página
document.querySelector("form").addEventListener("submit", (e) => {
  e.preventDefault();
});

// Agrega un evento al hacer clic en el botón "Añadir evento"
buttonAdd.addEventListener("click", () => {
  addEvent();
});

// Función para agregar un evento
function addEvent() {
  const eventNameValue = eventName.value.trim();
  const eventDateValue = eventDate.value.trim();

  if (!eventNameValue || !eventDateValue) {
    return;
  }

  const currentDate = new Date();
  const eventDateObj = new Date(eventDateValue);

  if (eventDateObj < currentDate) {
    alert("La fecha del evento debe ser en el futuro.");
    return;
  }

  const newEvent = {
    id: generateUniqueId(),
    name: eventNameValue,
    date: eventDateValue,
  };

  events.unshift(newEvent);
  saveEvents();

  eventName.value = "";
  eventDate.value = "";

  renderEvents();
}

// Función para renderizar los eventos en la página
function renderEvents() {
  const eventsHTML = events.map((event) => {
    const daysRemaining = datediff(event.date);
    return `
      <div class="task">
        <div class="days">
          <span class="days-number">${daysRemaining}</span>
          <span class="days-text">${daysRemaining === 1 ? "día" : "días"}</span>
        </div>
        <div class="event-name">${event.name}</div>
        <div class="event-date">${event.date}</div>
        <div class="actions">
          <button data-id="${event.id}" class="bDelete">Eliminar</button>
        </div>
      </div>`;
  });

  tasksContainer.innerHTML = eventsHTML.join("");

  // Agrega un evento para eliminar al hacer clic en los botones "Eliminar"
  document.querySelectorAll(".bDelete").forEach((button) => {
    button.addEventListener("click", () => {
      const id = button.getAttribute("data-id");
      deleteEvent(id);
    });
  });
}

// Función para calcular la diferencia en días entre dos fechas
function datediff(d) {
  const date1 = new Date(d);
  const date2 = new Date();
  const difference = date1.getTime() - date2.getTime();
  const days = Math.ceil(difference / (1000 * 3600 * 24));
  return days;
}

// Función para generar un ID único
function generateUniqueId() {
  return (Math.random() * 100).toString(36).slice(2);
}

// Función para guardar eventos en el almacenamiento local
function saveEvents() {
  const json = JSON.stringify(events);
  localStorage.setItem("events", json);
}

// Función para cargar datos desde el almacenamiento local
function load() {
  return localStorage.getItem("events") || "[]";
}

// Función para eliminar un evento
function deleteEvent(id) {
  events = events.filter((event) => event.id !== id);
  saveEvents();
  renderEvents();
}
