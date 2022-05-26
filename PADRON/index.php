

<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="icon" type="image/ico" href="favicon.ico"/>
    <title>Padron Consultas</title>
    <link rel="stylesheet" href="style.css">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-0evHe/X+R7YkIZDRvuzKMRqM+OrBnVFBL6DOitfPri4tjfHxaWutUpFmBp4vmVor" crossorigin="anonymous">
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/js/bootstrap.bundle.min.js" integrity="sha384-pprn3073KE6tl6bjs2QrFaJGz5/SUsLqktiwsUTF55Jfv3qYSDhgCecCxMW52nD2" crossorigin="anonymous"></script>
    <script src="https://code.jquery.com/jquery-3.6.0.min.js" integrity="sha256-/xUj+3OJU5yExlq6GSYGSHk7tPXikynS7ogEvDej/m4=" crossorigin="anonymous"></script>
    <script src="sweetalert.min.js"></script>

  </head>
  <body>
    <header>
      <img src="http://vgb.gov.ar/municipalidad/wp-content/uploads/sites/2/2017/07/logo-nuevo-afip-e1539025015980.png" alt="">
    </header>
    <section>
      <div class="contain">
        <form id= "form">
          <div class="input">

              <label for="cuit">INGRESE CUIT</label>
              <input type="text" name="cuit" id="cuit">

          </div>
          <div class="select">
            <select class="select" name="select" id="select">
              <option value="predeterminado">Elija dependencia</option>
              <option value="cap">capital</option>
              <option value="bsas">bsas</option>
            </select>
          </div>
          <button type="button" class= "button-15" name="button" role="button" id="boton">CONSULTAR</button>
        </form>
      </div>
    </section>
    <footer></footer>
    <script src="index.js"></script>
  </body>
</html>
