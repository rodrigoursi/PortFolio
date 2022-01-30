#include <iostream>
#include <cstdlib> //libreria para funcione rand
#include "funciones.h"

using namespace std;

void lanzarDados(int v[], int cant){

for(int i=0;i<cant;i++){
    v[i]= 1 + rand()%6;
}

}

void mostrarDados(int v[], int cant){
int i;
for(i=0;i<cant;i++){

    cout<<" "<<v[i];
}

}


int calcularMaximoVector(int numeros[], int cant){

int maxDado=0, i;
for(i=0;i<cant;i++){
    if(numeros[i]<maxDado || i==0){
        maxDado=numeros[i];

    }
}
return maxDado;
}




int calcularMinimoVector(int numeros[], int cant){

int menorDado=0, i;
for(i=0;i<cant;i++){
    if(numeros[i]<menorDado || i==0){
        menorDado=numeros[i];

    }
}
return menorDado;
}

int contarRepeticionesEnVector(int dadoFinal, int dados [], int cant){
int i;
int contDados=0;
for(i=0;i<cant;i++){
    if(dadoFinal==dados[i]){
        contDados++;
    }
 }
 return contDados;
}

int sumarVector(int v[], int tam){
int i, suma=0;

for(i=0;i<tam;i++){
    suma+=v[i];
}
return suma;
}

int calcularPuntajeRonda(int v[], int tam){
int puntaje, suma, maximo, minimo;
suma= sumarVector(v,tam);
maximo=calcularMaximoVector(v,tam);
minimo=calcularMinimoVector(v,tam);

return suma*minimo/maximo;
}

int calcularPuntajeFinal(int v[], int tam, int puntajeActual, int dado){
int cantidad, puntajeFinal;
cantidad= contarRepeticionesEnVector(dado,v,tam);
puntajeFinal=puntajeActual*cantidad;

return puntajeFinal;
}
