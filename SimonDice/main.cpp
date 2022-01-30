#include <iostream>
#include <cstdlib> //libreria para funcione rand
#include <ctime>  //libreria para funcione rand
#include "funciones.h"


using namespace std;




int main()
{

  /// aca declaramos todas las variables y constantes
    string jugador;
    const int DADOS=5;
    int i, puntaje, puntajeAcumulado=0, numero, puntajeFinal=0;
    int vDados[DADOS];

    srand(time(NULL));

  /// pedir nombre
  cout<<"ingrese nombre del jugador: ";
  cin>>jugador;
  /// comienzan las rondas
  /// repetir 5 rondas
  for(i=1;i<=5;i++){
  ///   lanzar 5 dados
  lanzarDados(vDados, DADOS);

  ///   mostrar dados

  mostrarDados(vDados, DADOS);
  ///   calcular puntaje
  ///       buscar minimo
  ///       buscar maximo
  ///       sumar dados
  ///       puntaje es suma por minimo dividio maximo

  puntaje=calcularPuntajeRonda(vDados, DADOS);
  ///   mostar puntaje calculado

  cout<<endl<<"puntaje: "<<puntaje<<endl;
  ///   acumular el puntaje calculado

  puntajeAcumulado+=puntaje;
  /// fin de repetir
  }
  /// mostramos el puntaje acumulado
  cout<<endl<<"puntaje acumulado: "<<puntajeAcumulado<<endl;
  cout<<"---------- RONDA FINAL -----------"<<endl;
  /// pedir un numero N entre 1 y 6
  cout<<"ingrese un numero entre 1 y 6: ";
  /// TODO: validar que este entre 1 y 6
  cin>>numero;
  /// lanzar dados
  lanzarDados(vDados, DADOS);
  /// mostrar dados
  mostrarDados(vDados, DADOS);
  /// calcular puntaje final
  ///   contar coincidencias de N en dados
  ///   puntaje final es puntaje acumulado por cantidad de coincidencias

puntajeFinal=calcularPuntajeFinal(vDados, DADOS, puntajeAcumulado, numero);

  /// mostar nombre y puntaje final
  cout<<endl<<jugador<<", tu puntaje fue: "<<puntajeFinal;

    system("PAUSE");
    return 0;
}
