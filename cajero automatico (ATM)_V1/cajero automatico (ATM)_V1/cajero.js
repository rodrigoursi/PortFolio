var img=[];
img["100"]="cien.png"; // aca siempre lo q va dentro del corchete va entre comillas por mas q sea numero
img["50"]="50.png";
img["10"]="10.png";
class billete {             //GENERO CLASE BILLETE
  constructor(v,cant) {
    this.imagen=new Image();
    this.valor=v;
    this.cantidad=cant;
    this.imagen.src=img[this.valor];
  }
}

var caja=[3];  //es el vector que poseee los distintos billetes, como son 3 billetes diferentes, entonces el vector es de 3
var entregado=[3]; //es el vector que muestra, entrega los billetes que da el cajero, como son 3, el vector es de 3

caja[0]=new billete(100,500);  //aca cargo los datos del contructor.
caja[1]=new billete(50,500);
caja[2]=new billete(10,500);


var dinero;  //esta variable es la q tendra lo q tiene la caja de extraccion (texto)
var resultado=0; //esta variable es la q contiene la cantidad de billete por valor de billete despues de realizar el algoritmo.
var billepapel=0; //esta variable contiene la cantidad de billetes
///////////////////////////////////////////////////
var cash= document.getElementById("resultado");
var b=document.getElementById('btn');
b.addEventListener("click",entregarDinero);      // aca me traigo los elementos q necesito del html y ademas llamo al evento
var sacar=document.getElementById('limpiar');
sacar.addEventListener("click",limpiarPagina);
///////////////////////////////////////////////////

function entregarDinero() {             ////////// FUNCION CON EL ALGORITMO DE ENTREGA DE DINERO
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
        cash.appendChild(entregado[i].imagen);
        cash.innerHTML+="</br>--------------------------"+"<br/>";
      }
    }
  }
}

function limpiarPagina()//funcion para vaciar o limpiar la pagina con el boton limpiar
{
cash.innerHTML = "";
entregado.length = 0;
}
