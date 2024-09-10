const saludo = (nombre) => {
    console.log('Hola ${nombre}');
}
saludo('Juan');
saludo('Alex');

// multiples parametros

const operacion = (tipo,num1,num2) =>{
    if(tipo ==='suma'){
        console.log(num1+num2);
    } else if (tipo === 'resta'){
console.log(num1 - num2);
    } 
};

operacion('suma',100,100);
operacion('resta',250,50);