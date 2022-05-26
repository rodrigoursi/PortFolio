
/*var form= new FormData(document.getElementById('form'));
console.log(form)
console.log(form.get("cuit"))*/



document.getElementById('boton').addEventListener("click",() => {
  //swal("Oops!", "Campo Teléfono Obligatorio", "error");
  var form= new FormData(document.getElementById('form'));
  console.log(form);
  console.log(form.get("select"));

  fetch('conex.php', {
    method: 'POST',
    body: form

  })
  .then(res => res.json())
  .then(data => {
    validacion = data;
    if(data=="errordep") {swal("Oops!", "No elegiste dependencia", "error");}
    if(data=="") {swal("Oops!", "Cuit no encontrado", "error");}
      console.log(validacion)
      console.log(data[0]["RazSoc"]);
      var alicuota=data[0][0];
      var razsoc=data[0][1];
      swal(alicuota, razsoc,"success");
  })

})
