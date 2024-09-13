const letras = ['a','a','a','b','a','a'];

for (let i=0; i< letras.length; i++){
    if(letras[i][0] !=='a'){
        console.log("letra diferente a 'a'");

        console.log(letras[i] + "no es 'a'");
        break;
    }
    console.log(letras[i]);
}