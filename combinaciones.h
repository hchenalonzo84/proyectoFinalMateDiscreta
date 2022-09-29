#include <iostream>

using namespace std;

// metodo para calcular combinaciones sin repeticion
double combinacionesSinRepeticion(double _Nelementos,double _Rtamano){
    double factorialN=0;
    double factorialR=0;
    double factorialResta=0;
    double resultadoArriba=0;
    double resultadoAbajo=1;
    double resta=0;
    double resultado=0;

    factorialN = getFactorial(_Nelementos);
    factorialR = getFactorial(_Rtamano);
    resta=(_Nelementos-_Rtamano);
    factorialResta= getFactorial(resta);

    resultadoArriba= factorialN;
    resultadoAbajo=factorialResta*factorialR;

    resultado = resultadoArriba/resultadoAbajo;

    return resultado;
}

//metodo pra calcular  coombinacion con repeticion
 double combinacionConRepeticion(double _Nelementos, double _Rtamano){
    double operacion1=0;
    double resultado1=0;
    double resultado=0;
    operacion1=_Nelementos+_Rtamano-1;
    resultado1= operacion1;
    resultado= combinacionesSinRepeticion(resultado1,_Rtamano);
    cout<<"operacion1:"<<resultado<<endl;

    return resultado;
 }