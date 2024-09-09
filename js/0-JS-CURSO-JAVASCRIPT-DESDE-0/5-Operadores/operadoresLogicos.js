/*
&&  and
||  or
!   not
*/



const edad = 18;
const tieneEntrada = true;
const tienePermiso = true;


// &&
const permitirAccesoY = edad >= 18 && tieneEntrada;
console.log('acceso permitido: ' + permitirAccesoY);

// or
const permitirAccesoOr = (edad >= 18 && TieneEntrada) || (tienePermiso && tieneEntrada);
console.log('acceso permitido:' + permitirAccesoOr);

// !
const variable = false;
console.log(!variable);
