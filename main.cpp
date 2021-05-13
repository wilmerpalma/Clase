#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

int main(){
    // TRUE | FALSE     0 | 1       OFF | ON
    bool caraMonedaUsuario=0,ganador=0;
    // 0 - ####
    int caraMonedaGanadora=0;
    int numAciertos=0;
    int numPerdidas=0;
    int limite=0;
    srand (time(NULL));
    //Ejecuta al menos una vez siempre


        cout<<"Que cara de la moneda quiere 0. ESCUDO y 1. CARA:";
        cin>>caraMonedaUsuario;
        cout<<"Limite de veces que deseas lanzar la moneda: ";
        cin>>limite;
        //IF ELSE ... IF Ternario
        //ganador= (caraMonedaGanadora == caraMonedaUsuario)? 1 : 0 ;
        caraMonedaGanadora=rand() % 2;
        if(caraMonedaGanadora == caraMonedaUsuario){
            ganador=1; //TRUE;
            numAciertos++;
        }
        else{
            ganador=0; //FALSE;
            numPerdidas++;
        }



    for ( int caraMonedaUsuario; caraMonedaUsuario<=limite; caraMonedaUsuario++ ){

         cout<<"Ganaste!"<<endl;
        cout<<"ACIERTOS: "<<numAciertos<<" PERIDOS: "<<numPerdidas<<endl;
    }
    return 0;
}




