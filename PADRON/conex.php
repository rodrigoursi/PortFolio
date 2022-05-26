
<?php
$cuit= $_POST['cuit'];
$dep= $_POST['select'];


$cuil='34999032089';


if(!$cuit==""){
  switch($dep){
    case 'cap':
      require 'conexiones.php';
      $gsent = $db->prepare("SELECT AlicuotaRet, RazSoc FROM padron_cap where cuit=$cuit");
      $gsent->execute();

      $fin= $gsent ->fetchall();

      echo json_encode($fin);
      break;

    case 'bsas':
      require 'conexiones.php';
      $gsent = $db->prepare("SELECT alicuota, nroCUIT FROM padron_prov where nroCUIT=$cuit");
      $gsent->execute();

      $fin= $gsent ->fetchall();

      echo json_encode($fin);
      break;

    default:
      echo json_encode('errordep');
  }

}else echo json_encode('error');
 ?>
