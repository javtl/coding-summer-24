// Parametro Rest
//      permite que una función contenga un numero indefinido de argumentos
//      los argumentos extra los convertira en un arreglo

const datos = {
    nombre: 'nombre',
    apellido:'apellido',
    telefono:'11111111',
};

const registrarUsuario = (nombre, apellido, ...otrosDatos) =>{
    console.log(nombre, apellido, otrosDatos);
}
registrarUsuario('nuevo nombre','apellido');
registrarUsuario('nuevo nombre','nuevo apellido',1);