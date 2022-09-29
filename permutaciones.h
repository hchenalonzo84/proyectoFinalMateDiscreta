/*
  metodos pora realizar permutaciones segun sea el caso
*/
#include <iostream>

using namespace std;



//metodo para calcular permutaciones sin repeticion
int calcularPermutacionSinRepeticion(int _Nelementos, int _Rtamano){
    int factorialN=0;
    int resta=0;
    int factorialResta=0;
    int resultado=0;
    
    factorialN= getFactorial(_Nelementos);
    resta= _Nelementos-_Rtamano;
    factorialResta = getFactorial(resta);
    
    resultado=factorialN/factorialResta;
    
    return resultado;
}

//metodo para calcular permutaciones con repeticion
int calcularPermutacionConRepeticion(int _Nelementos, int _Rtamano){
    int resultado=0;
    
    resultado = pow(_Nelementos,_Rtamano);
       
    return resultado;
}

// metodo para calcular permutaciones con subconjuntos divididos

int permutacionSubConjuntoDiv(int _Nelementos, int _SubConjunto){
    int resultadoArriba=0;
    int resultadoAbajo=1;
    int arreglo[_SubConjunto];
    int resultado=0;
    int acumulador=0;
    int centinela=0;

    // llamando a funcion factorial
    resultadoArriba = getFactorial(_Nelementos);

    do
    {
       for (int i = 0; i < _SubConjunto; i++)
       {
        cout<<"Ingrese el valor del subconjunto #"<<i+1<<"\t"<<endl;
        cin>>arreglo[i];
        acumulador=acumulador+arreglo[i];
       }
        // validacion para comprobar que (n) es igual a acumulador (sumatoria de los subconjuntos)
       if (_Nelementos==acumulador)
       {
        centinela=1;
       }
       else
       {
        cout<<" la sumatoria de los subconjutnos debe ser igual al total de elementos (n)"<<endl;
        cout<<endl;
        acumulador=0;
        centinela=0;
       }
       
       
    } while (centinela!=1);
    // ciclo for para  realizar la multiplicacion de cada uno de los factoriales de los subconjuntos
    for (int i = 0; i < _SubConjunto; i++)
    {
        resultadoAbajo=resultadoAbajo*getFactorial(arreglo[i]);
    }
    
    resultado= resultadoArriba/resultadoAbajo;
    return resultado;
}

 // metodo para  calculo de permutaciones circulares
 int permutacionesCirculares(int _Nelementos){
    int factorialN=0;
    int resta=0;
    int resultado=0;

    resta= (_Nelementos-1);
    factorialN= getFactorial(resta);
    resultado= factorialN;
    return resultado;
 }