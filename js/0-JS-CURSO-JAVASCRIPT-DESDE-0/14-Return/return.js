const operacion = (tipo,num1,num2) =>{
    if(tipo ==='suma'){
        return num1 + num2;
    } else if (tipo === 'resta'){
        return num1 - num2;
    } 
};

const myVar = operacion('suma', 150, 111);
console.log(miVariable);