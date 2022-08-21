var tation= {
  usd:112,
  iva:112*0.21,
  pais:112*0.08,
  gan:112*0.35
};

var storeGoo= {
  usd:112,
  iva:112*0.21,
  pais:112*0.30,
  gan:112*0.35
};



var valorp=document.getElementById('play');
var valorg=document.getElementById('goo');
var botonp=document.getElementById('btnp');
var botong=document.getElementById('btngoo');
botonp.addEventListener('click',calculadorp);
botong.addEventListener('click',calculadorg);
var rtexto=document.getElementById('resultado');

function calculadorp() {
  can=parseInt(valorp.value);
  resul=parseInt(tation.usd+tation.iva+tation.pais+tation.gan)*can;
  rtexto.innerHTML="*** $ "+resul+" PESOS ***";

}
function calculadorg() {
  can=parseInt(valorg.value);
  resul=parseInt((storeGoo.usd+storeGoo.iva+storeGoo.pais+storeGoo.gan)*can);
  rtexto.innerHTML="*** $ "+resul+" PESOS ***";

}
