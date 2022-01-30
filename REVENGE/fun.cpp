#include <iostream>
#include <cstdlib>
#include "fun.h"
using namespace std;


/////////// PARA PRIMER RONDA //////////

int lanzarDadosR1(int v[], int cant, int tam){
    int resultadoLanzarDadosR1;
    for(int i=0;i<cant;i++){
        v[i]=1+rand()%tam;
        resultadoLanzarDadosR1 = v[i];
    }
    return resultadoLanzarDadosR1;
}
////////////////////////////////////////////////////////////


void lanzarDados(int v[], int cant, int tam){
    for ( int i = 0; i < cant; i++ ){
        v[i]=1+rand()%tam;
    }
}

void mostrarDados(int v[], int cant, int tam){
    for ( int i = 0; i < cant; i++){
            if(tam == 12){
                 cout<<endl<<endl  <<  "DADO GRANDE " << i + 1 << ":  " << "[" << v[i] << "]"<<endl;
            } else {
                cout <<endl<<"DADO MENOR " << i + 1 << ":  " << "[" << v[i] << "]";
            }
    }
}


int sumarV(int v[], int cant){
    int res=0;
    for(int i=0;i<cant;i++){
        res+=v[i];
    }
return res;
}

int guardarDados(int v[], int cant, int tam){
int d;
for(int i=0;1<cant;i++){

    return d=v[i];
}
}

int lanzarDados10(int v[], int cant,int tam){
int resultado;
for ( int i = 0; i < cant; i++ ){
        v[i]=1+rand()%tam;
        resultado=v[i];
        return resultado;
}

}
