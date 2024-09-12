// Destrución de Objetos
//      Permite obtener elementos o propiedades de un arreglo u objetos
//      guardandolos en una variable
const nombres = ['nombre1','nombre2','nombre3'];

const [primerNombre,segundoNombre, tercerNombre] = amigos;
console.log(segundoAmigo);

const persona = {
    nombre: 'nombre',
    edad: 1,
};

const {nombre, edad} = persona;
console.log(nombre, edad);

const mostrarEdad = ({nombre, edad}) => {
    console.log(`${nombre} tiene ${edad} años`);
};
mostrarEdad(persona);