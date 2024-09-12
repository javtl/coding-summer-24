// operador Spread
// Permite tomar elementos de un arreglo u objeto y expandirlos en otro sitio

const frutas = ['manzana', 'pera','sandia','melón'];

const comida = ['pizza','hamburgesa', ...frutas];

console.log(comida);

const datos = {
    nombre: 'nombre',
    apellido:'apellido',
    telefono:'11111111',
};

const contacto ={
    ...datos,
    nombre:'nuevo nombre',
    numero: '2',
};

console.log(contacto);



