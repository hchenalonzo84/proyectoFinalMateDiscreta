#include <iostream>

using namespace std;


int combinacionesSinRepeticion(int _Nelementos,int _Rtamano){
    int factorialN=0;
    int factorialR=0;
    int factorialResta=0;
    int resultadoArriba=0;
    int resultadoAbajo=1;
    int resta=0;
    int resultado=0;

    factorialN = getFactorial(_Nelementos);
    factorialR = getFactorial(_Rtamano);
    resta=(_Nelementos-_Rtamano);
    factorialResta= getFactorial(resta);

    resultadoArriba= factorialN;
    resultadoAbajo=factorialResta*factorialR;

    resultado = resultadoArriba/resultadoAbajo;

    return resultado;
}