class calculadorDolar {
  constructor(iv,imp1,imp2) {
    this.iva=iv;
    this.pais=imp1;
    this.ganancia=imp2;
  }
}


var valor=document.getElementById('texto'); // traigo el campo
var boton=document.getElementById('btnp'); // traigo el boton
var selec=document.querySelector('select'); // traigo la eleccion
//var rhtml=document.getElementById('resultado'); // traigo el <p></p> parrafo donde pondre el resultado futuro
var rhtml=document.createElement('p');
var p2=document.querySelector('.p2');



var tation= new calculadorDolar(0.21,0.08,0.45);
var storeGoo= new calculadorDolar(0.21,0.30,0.45);

boton.addEventListener('click',calcular);


function calcular(){
  elec=selec.value; // extraigo el valor del objeto selec q antes habia traido desde select
  var resuliva;
  var resultado;
  can=parseFloat(valor.value);
  switch (elec) {
    case 'play':
      resuliva=can+(can*tation.iva);
      resultado=parseInt((resuliva*(tation.pais+tation.ganancia)+resuliva)*dolar);
      rhtml.innerHTML="*** $ "+resultado+" PESOS ***";
      p2.appendChild(rhtml);
      break;
    case 'xbox':
      resuliva=can+(can*tation.iva);
      resultado=parseInt((resuliva*(tation.pais+tation.ganancia)+resuliva)*dolar);
      rhtml.textContent="*** $ "+resultado+" PESOS ***";
      p2.appendChild(rhtml);
      break;
    case 'goo':
      resuliva=can+(can*storeGoo.iva);
      resultado=parseInt((resuliva*(storeGoo.pais+storeGoo.ganancia)+resuliva)*dolar);
      rhtml.innerHTML="*** $ "+resultado+" PESOS ***";
      p2.appendChild(rhtml);
      break;
    default:
      alert("ERROR GRAVE!!! ELIJA UNA OPCION");
  }
}

/*function calcularp() {
  can=parseInt(valorp.value);
  resultado=parseInt((tation.dolar+tation.iva+tation.pais+tation.ganancia)*can);
  rhtml.innerHTML="*** $ "+resultado+" PESOS ***";
}*/
