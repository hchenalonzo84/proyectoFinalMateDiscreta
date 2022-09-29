/*
  metodos pora realizar permutaciones segun sea el caso
*/
#include <iostream>

using namespace std;



//metodo para calcular permutaciones sin repeticion
double calcularPermutacionSinRepeticion(double _Nelementos, double _Rtamano){
    double factorialN=0;
    double resta=0;
    double factorialResta=0;
    double resultado=0;
    
    factorialN= getFactorial(_Nelementos);
    resta= _Nelementos-_Rtamano;
    factorialResta = getFactorial(resta);
    
    resultado=factorialN/factorialResta;
    
    return resultado;
}

//metodo para calcular permutaciones con repeticion
double calcularPermutacionConRepeticion(double _Nelementos, double _Rtamano){
    double resultado=0;
    
    resultado = pow(_Nelementos,_Rtamano);
       
    return resultado;
}

// metodo para calcular permutaciones con subconjuntos divididos

double permutacionSubConjuntoDiv(double _Nelementos, int _SubConjunto){
    double resultadoArriba=0;
    double resultadoAbajo=1;
    int arreglo[_SubConjunto];
    double resultado=0;
    double acumulador=0;
    double centinela=0;

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
 double permutacionesCirculares(double _Nelementos){
    double factorialN=0;
    double resta=0;
    double resultado=0;

    resta= (_Nelementos-1);
    factorialN= getFactorial(resta);
    resultado= factorialN;
    return resultado;
 }