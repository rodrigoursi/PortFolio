<?php

$usuario='root';
$contraseña='';

try {
    $db = new PDO('mysql:host=localhost;dbname=padron', $usuario, $contraseña);
    //echo 'ok';

} catch (PDOException $e) {
    print "¡Error!: " . $e->getMessage() . "<br/>";
    die();
}
 ?>
