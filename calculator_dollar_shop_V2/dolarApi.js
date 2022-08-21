/*const url= "https://www.dolarsi.com/api/api.php?type=valoresprincipales";
var usd;
var dolar;

fetch(url).then(response => response.json()).then(usd=>{

  dolar=parseFloat(usd[0].casa.venta.replace(",", "."));
  console.log(dolar);
});
*/ //// COMENTADO PORQ LA API NO ANDA

const url= "https://mercados.ambito.com/dolar/%22+tipo+%22/variacion";
var usd;
var dolar;

fetch(url).then(response => response.json()).then(usd=>{

  dolar=parseFloat(usd.venta.replace(",", "."));
  console.log(dolar);
});
