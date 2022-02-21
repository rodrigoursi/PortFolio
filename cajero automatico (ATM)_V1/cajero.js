class billete {
  constructor(v,cant) {
    this.valor=v;
    this.cantidad=cant;
  }
}

/*function entregarDinero() {
  for(var i of caja){
    console.log(i);
  }
}*/

var caja=[3];
var entregado=[];

caja[0]=new billete(1000,500);
caja[1]=new billete(500,500);
caja[2]=new billete(100,500);


var dinero;
var resultado=0;
var billepapel=0;
var cash= document.getElementById("resultado");
var b=document.getElementById('btn');
b.addEventListener("click",entregarDinero);


function entregarDinero() {
  var texto=document.getElementById('dinero');
  dinero=parseInt(texto.value);
  for(var i=0;i<3;i++){
    if(dinero>0){
      resultado=parseInt(dinero/caja[i].valor);
      if(resultado>caja[i].cantidad){
        billepapel=caja[i].cantidad;
      }
      else {
        billepapel=resultado;
      }
      entregado[i]=new billete(caja[i].valor,billepapel);
      dinero=dinero-(caja[i].valor*billepapel);
    }
  }
  if(dinero!=0){
    cash.innerHTML= "EN ESTE MOMENTO NO PODEMOS ENTREGAR ESTA SUMA DE DINERO";
  }
  else{
    for(var i=0;i<3;i++){
      if(entregado[i].cantidad>0){
        cash.innerHTML+=entregado[i].cantidad+" BILLETES DE $ "+entregado[i].valor+"<br/>";
      }
    }
  }
}
