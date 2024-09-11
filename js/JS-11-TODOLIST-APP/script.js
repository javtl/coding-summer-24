// Espera a que el DOM esté completamente cargado antes de ejecutar el código
document.addEventListener('DOMContentLoaded', () => {
    // Arreglo para almacenar elementos de la lista de tareas
    let toDoListArray = [];

    // Obtener referencias a elementos HTML
    const form = document.querySelector(".form");
    const input = form.querySelector(".form-input");
    const ul = document.querySelector(".toDoList");

    // Manejar el envío del formulario
    form.addEventListener('submit', e => {
        e.preventDefault();
        
        // Generar un ID único usando la marca de tiempo
        let itemId = String(Date.now());
        let toDoItem = input.value;

        // Agregar el elemento a la lista y al arreglo
        addItemToDOM(itemId, toDoItem);
        addItemToArray(itemId, toDoItem);

        // Limpiar el campo de entrada
        input.value = '';
    });

    // Manejar los clics en elementos de la lista
    ul.addEventListener('click', e => {
        let id = e.target.getAttribute('data-id');
        if (!id) return;

        // Eliminar el elemento de la lista y del arreglo
        removeItemFromDOM(id);
        removeItemFromArray(id);
    });

    // Agregar un elemento a la lista en el DOM
    function addItemToDOM(itemId, toDoItem) {
        const li = document.createElement('li');
        li.setAttribute("data-id", itemId);
        li.innerText = toDoItem;
        ul.appendChild(li);
    }

    // Agregar un elemento al arreglo
    function addItemToArray(itemId, toDoItem) {
        toDoListArray.push({ itemId, toDoItem });
        console.log(toDoListArray);
    }

    // Eliminar un elemento de la lista en el DOM
    function removeItemFromDOM(id) {
        var li = document.querySelector(`[data-id="${id}"]`);
        ul.removeChild(li);
    }

    // Eliminar un elemento del arreglo
    function removeItemFromArray(id) {
        toDoListArray = toDoListArray.filter((item) => item.itemId !== id);
        console.log(toDoListArray);
    }
});
