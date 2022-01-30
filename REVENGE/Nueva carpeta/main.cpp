#include <iostream>
#include <ctime>
#include "fun.h"
#include <string>

using namespace std;


int main() {

    int vDados[6];
    int vDados10[0];
    int preguntar=0;
    int adado10, bdado10;

    srand(time(NULL));

    // Variables utilizadas para el MENU //
    int opcionMenu=0;
    string nombreJugador[2];
    string player1,player2;

    // Variables para los DADOS de la PRIMERA RONDA//
    int vParametro1[100], dimensionDados=1, i;
    char opcionJugadorTirar;
    bool preparacionJuego = false;

    // Variable para el guardado de datos sobre los DADOS de la PRIMERA RONDA//
    int dadoJugadorR1[2];
    int primerRonda;

    // Variables para el INICIO de Juego //
    int inicioDeJuego = 0;

    int finEleccion = 1;
    char e;
    int cicloDados;
    int sumaElecciones = 0;

    int puntosJugador[2];
    puntosJugador[0] = 0;
    puntosJugador[1] = 0;

    int tam; // tamanio

    int sumaDePuntos[2];
    sumaDePuntos[0] = 0;
    sumaDePuntos[1] = 0;


    int jugadorDados[2];

    int eleccionDados, eleccionNumero;

    ///////// WHILE MAIN ////////
    bool whileMain = true;

    while (whileMain = true){
                   cout << " REVENGE" << endl << " -----------------------------" << endl << endl << " 1  --->  JUGAR" << endl << " 2  --->  ESTADISTICAS" << endl << " 3  --->  CREDITOS" << endl << endl << " -----------------------------" << endl << " 0  --->  SALIR" << endl;

            cin >> opcionMenu;

        // Luego de pedir la opcion abajo abra un switch para cada caso y asi desplegar el codigo de la cual se haya elegido //

            switch(opcionMenu){
                case 1:
                    opcionMenu = 1;
                    system("cls");
                break;
                case 2:
                    opcionMenu = 2;
                    system("cls");
                break;
                case 3:
                    opcionMenu = 3;
                    system("cls");
                break;
                case 0:
                    system ("exit");
                    system("cls");
                    cout << " ------------------------------" << endl << " Presione ENTER para confirmar" << endl <<  " ------------------------------";
                break;
                }

            bool finDelJuego = false;
            while(opcionMenu == 1 && finDelJuego == false){

                cout << "\t\t\t ____________________________________________________ " << endl;
                cout << "\t\t\t|                                                    |" << endl;
                cout << "\t\t\t|                                                    |" << endl;
                cout << "\t\t\t|                    DOS JUGADORES                   |" << endl;
                cout << "\t\t\t|____________________________________________________|\n\n\n\n" << endl;


                cout <<  "INGRESE NOMBRE JUGADOR 1: ";
                getline(cin, nombreJugador[0]);
                 getline(cin, nombreJugador[0]);

                cout <<  "INGRESE NOMBRE JUGADOR 2: ";
                getline(cin, nombreJugador[1]);

                system("cls");

        // COMIENZO de lo que seria la tirada de dados para saber quien empieza el juego //

                cout << "--------------------------------------------------------------------------------------------------------------------";
                cout << endl << "     A CONTINUACION AMBOS JUGADORES TIRARAN LOS DADOS PARA SABER QUIEN SERA EL PRIMERO EN ARRANCAR EL JUEGO" << endl;
                cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

        // If y switch utilizados para la tirada de dados para los jugadores //

                for (primerRonda = 0; primerRonda < 2; primerRonda++){
                        cout << endl << endl <<  "Jugador " << nombreJugador[primerRonda] << " para tirar los dados a continuacion presione la letra " << "T:  ";
                        cin >>  opcionJugadorTirar;
                        switch(opcionJugadorTirar){
                            case 't':
                            case 'T':
                                dadoJugadorR1[primerRonda] = lanzarDadosR1(vDados, 1, 6);
                                mostrarDados(vDados, 1, 6);
                            break;
                        }
                }

        /// IF para saber cual de los dos tuvo mayor puntaje //
                if(dadoJugadorR1[0] > dadoJugadorR1[1]){
                        inicioDeJuego = 1;
                        cout << endl << endl << " ------------->   El Jugador " << nombreJugador[0] << " obtuvo la mayor cantidad de puntos. Estas listo para empezar? " << endl;
                        player1 = nombreJugador[0];
                        player2 = nombreJugador[1];
                        } else {
                                inicioDeJuego = 2;
                                cout << endl << endl << " ------------->   El Jugador " << nombreJugador[1] << " obtuvo la mayor cantidad de puntos. Estas listo para empezar? " << endl;
                                player1 = nombreJugador[1];
                                player2 = nombreJugador[0];
                                }



        /// COMIENZAN LAS RONDAS...!

            jugadorDados[0] = 6;
            jugadorDados[1] = 6;
            for (int r = 0; r < 5; r++ ){
                    int obj;
                    for ( int cvp = 0; cvp < 2; cvp++ ) {
                        cout << endl<< "////////////////////////////// RONDA "<< r + 1<<" //////////////////////////////" << endl;
                         cout << endl << player1 << " Actualmente tienes una cantidad de  " << jugadorDados[0] << " Dados" << endl;
                         cout << endl << player2 << " Actualmente tienes una cantidad de "<< jugadorDados[1] << " Dados" << endl;

                        lanzarDados(vDados,2, 12);
                        mostrarDados(vDados, 2, 12);

                        obj = sumarV(vDados,2);
                        cout << endl << "La suma OBJETIVO obtenida de este lanzamiento fue: "<< obj;
                        sumaDePuntos[cvp] = obj;

                         int dadosParaFuncionPlayer1 = jugadorDados[0];
                        int dadosParaFuncionPlayer2 = jugadorDados[1];

                        if (cvp == 0){
                            lanzarDados(vDados, dadosParaFuncionPlayer1, 6);
                            mostrarDados(vDados, dadosParaFuncionPlayer1, 6);
                            cout<<endl<<"quieres tirar 1 dado mas? presione 1 para si o presione 0 para no"<<endl;
                            cin>>preguntar;
                            if(preguntar==1){

                               adado10=lanzarDados10(vDados10, 1, 10);
                               cout<<endl<<adado10;

                            }

                        } else {
                                lanzarDados(vDados, dadosParaFuncionPlayer2, 6);
                                mostrarDados(vDados, dadosParaFuncionPlayer2, 6);
                                cout<<endl<<"quieres tirar 1 dado mas? presione 1 para si o presione 0 para no"<<endl;
                                cin>>preguntar;

                            if(preguntar==1){

                               bdado10=lanzarDados10(vDados10, 1, 10);
                               cout<<endl<<bdado10;

                            }
                            }

                        cicloDados = 0;
                        int con=0;
                        sumaElecciones = 0;

                         for (eleccionDados = 0; eleccionDados < jugadorDados[cvp]; eleccionDados++){
                            cout << endl << endl <<  "A continuacion, marque la posicion de los dados que va a elegir para llegar al NUMERO OBJETIVO: ";
                            cin >> eleccionNumero;
                            con++;
                            cout << "/////////////////////////////" << endl;
                            cout <<  "Acaba de elegir el numero: " << vDados[eleccionNumero - 1] << endl;
                            cout << "/////////////////////////////" << endl;
                             sumaElecciones += vDados[eleccionNumero - 1];

                            cout << "Usted junto la cantidad total de: " << sumaElecciones;
                            cout << endl << endl << "[ IMPORTANTE ] --- Si desea continuar eligiendo dados, presione 1, caso contrario para finalizar la eleccion presione un 0. " << endl;
                            cin >> finEleccion;
                            cicloDados++;
                            if (finEleccion == 0){
                                eleccionDados = 100;
                            }
                        }

                        if(cvp==0&&preguntar==1){

                                sumaElecciones= (sumaElecciones-adado10);

                             }else{if(cvp==1&&preguntar==1){

                             sumaElecciones= (sumaElecciones-bdado10);

                             }
                             }

                         if ( obj == sumaElecciones){
                            puntosJugador[cvp] = (con*sumaElecciones);
                            jugadorDados[cvp] = jugadorDados[cvp] - con;
                            cout << endl <<"Enviaremos "<< con << " dados al contrincante"<< endl;
                                if (cvp == 0){
                                    jugadorDados[1] += con;
                                } else {
                                        jugadorDados[0] += con;
                                    }
                        } else{
                                cout << endl << "No logro llegar al objetivo, no sumara puntos";
                                if (cvp == 0){
                                        if ( jugadorDados[1] > 1 ){
                                        jugadorDados[0] ++;
                                        jugadorDados[1] --;
                                        cout << endl << "Tambien recibira un dado mas de los q tiene su adversario";
                                    }
                                } else {
                                        if (jugadorDados[0] > 1){
                                            jugadorDados[1] ++;
                                            jugadorDados[0] --;
                                        }
                                    }

                                    puntosJugador[cvp]=0;
                        }


                        if(preguntar==1){

                            puntosJugador[cvp]= puntosJugador[cvp]*3;
                        }

                        cout << endl << "---------------------------------- SCORE ----------------------------------" << endl;
                        if(cvp == 0){
                            cout << endl << "El puntaje de " << player1 << " : " << puntosJugador[cvp];
                        } else {
                                cout << endl << "El puntaje de " << player2 << " : " << puntosJugador[cvp];
                            }
                        cout << endl << "---------------------------------------------------------------------------" << endl;

                         if ( jugadorDados[cvp] == 0 ) {
                            cout << endl << "Gano la partida porque se quedo sin dados" ;
                        }

                        }

                            if (r == 4){
                                finDelJuego = true;
                            }

                    }

                system("cls");
                cout << "                         || JUEGO TERMINADO ||" << endl << endl << endl << "Los resultados fueron los siguiente: " << endl << player1 << ": " << puntosJugador[0] << "             " << player2 << ": " << puntosJugador[1] << endl;

                system("pause");
                system("cls");
            }

           if(opcionMenu == 2){
            cout << "RANKING DE JUGADORES: " << endl << endl;
                if (puntosJugador[0] > puntosJugador[1]){
                    cout << player1 << ": " << puntosJugador[0] << endl;
                } else {
                        cout << player2 << ": " << puntosJugador[1] << endl;
                    }
                }

           if(opcionMenu == 3){
                cout << "Créditos" << endl;
                cout << "---- Iconos obtenidos de Freepik y logo hecho en Logo Maker." << endl;
                cout << "---- Juego inventado por Angel Simón. Levemente inspirado en el juego Mafia y probablemente en otros juegos que ahora no recuerdo" << endl;
           }

    }

    return 0;
}

