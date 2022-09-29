#include <iostream>

using namespace std;

int combinacionesSinRepeticion(int _Nelementos,int _Rtamano);
int getFactorial(int numero);

int main(int argc, char const *argv[])
{
    int resultado=0;
    int _Nelementos=0;
    int _Rtamano=0;
    cout<<"ingrese n\t"<<endl;
    cin>>_Nelementos;
    cout<<"ingrese r\t"<<endl;
    cin>>_Rtamano;
    resultado= combinacionesSinRepeticion(_Nelementos,_Rtamano);
    cout<<"La posibles combinaciones son:"<<resultado<<endl;

    return 0;
}

int getFactorial(int numero) {
    int i=numero;
    int factorial=1;
    int acumulado=1;
    
    while(i>=1) {
        factorial = acumulado*i;           
        acumulado=factorial;
       i--;  
    }
    
    return factorial;
    
}

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