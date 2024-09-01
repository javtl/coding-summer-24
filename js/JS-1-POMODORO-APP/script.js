// Declaración de variables globales
const tasks = []; // Almacena las tareas
let time = 0; // Tiempo restante
let timer = null; // Temporizador de tareas
let timerBreak = null; // Temporizador de descanso
let current = null; // Tarea actual
let statusApp = "stop"; // Estado de la aplicación

// Obtener elementos del DOM
const bAdd = document.querySelector("#bAdd"); // Botón "Agregar"
const itTask = document.querySelector("#itTask"); // Campo de entrada de tareas
const form = document.querySelector("#form"); // Formulario

// Renderiza las tareas y el tiempo
renderTasks();
renderTime();

// Evento para agregar tareas cuando se envía el formulario
form.addEventListener("submit", (e) => {
  e.preventDefault();
  if (itTask.value !== "") {
    createTask(itTask.value);
    itTask.value = "";
    renderTasks();
  }
});

// Función para crear una nueva tarea
function createTask(value) {
  const newTask = {
    id: (Math.random() * 100).toString(36).slice(2),
    title: value,
    completed: false,
  };

  tasks.unshift(newTask); // Agrega la nueva tarea al principio del array
}

// Función para renderizar las tareas en el DOM
function renderTasks() {
  const html = tasks.map((task) => {
    return `
        <div class="task">
        <div class="completed">${
          task.completed
            ? "<span class='done'>Done</span>"
            : `<button class="start-button" data-id="${task.id}">Start</button></div>`
        }
            <div class="title">${task.title}</div>
        </div>`;
  });
  const tasksContainer = document.querySelector("#tasks");
  tasksContainer.innerHTML = html.join(""); // Convierte el array en una cadena HTML y lo establece en el contenedor

  const startButtons = document.querySelectorAll(".task .start-button");
  startButtons.forEach((startButton) => {
    startButton.addEventListener("click", () => {
      if (!timer) {
        startButtonHandler(startButton.getAttribute("data-id"));
        startButton.textContent = "In progress...";
      }
    });
  });
}

// Función para manejar el inicio de una tarea
function startButtonHandler(id) {
  time = 50 * 60; // Establece el tiempo inicial para la tarea
  current = id;
  const taskId = tasks.findIndex((task) => task.id === id);
  document.querySelector("#time #taskName").textContent = tasks[taskId].title; // Muestra el nombre de la tarea en el DOM
  timer = setInterval(() => {
    timerHandler(id);
  }, 1000);
}

// Función para manejar el temporizador de la tarea
function timerHandler(id = null) {
  time--;
  renderTime(); // Actualiza el tiempo en el DOM
  if (time === 0) {
    markComplete(id); // Marca la tarea como completada
    clearInterval(timer);
    renderTasks(); // Actualiza la lista de tareas en el DOM
    startBreak(); // Inicia un descanso
  }
}

// Función para marcar una tarea como completada
function markComplete(id) {
  const taskId = tasks.findIndex((task) => task.id === id);
  tasks[taskId].completed = true;
}

// Función para iniciar un descanso
function startBreak() {
  time = 1 * 60; // Establece el tiempo de descanso
  document.querySelector("#time #taskName").textContent = "Break"; // Muestra "Break" en el DOM
  timerBreak = setInterval(timerBreakHandler, 1000);
}

// Función para manejar el temporizador de descanso
function timerBreakHandler() {
  time--;
  renderTime();
  if (time === 0) {
    clearInterval(timerBreak);
    current = null;
    document.querySelector("#time #taskName").textContent = ""; // Limpia el nombre de la tarea en el DOM
    renderTime();
  }
}

// Función para renderizar el tiempo en el DOM
function renderTime() {
  const timeDiv = document.querySelector("#time #value");
  const minutes = parseInt(time / 60);
  const seconds = parseInt(time % 60);
  timeDiv.textContent = `${minutes < 10 ? "0" : ""}${minutes}:${seconds < 10 ? "0" : ""}${seconds}`;
}
