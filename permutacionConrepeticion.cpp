#include <iostream>
#include <math.h>


using namespace std;


int calcularPermutacionConnRepeticion(int _Nelementos, int _Rtamano);

int main(int argc, char const *argv[])
{
    int _Nelementos=0;
    int _Rtamano=0; 
    int resultado=0;
    cout<<"introduce n";
    cin>>_Nelementos;
    cout<<"introduce r";
    cin>>_Rtamano;
    resultado = calcularPermutacionConnRepeticion(_Nelementos,_Rtamano);
    cout<<"el resutlado es: "<<resultado<<endl;
    return 0;
}

int calcularPermutacionConnRepeticion(int _Nelementos, int _Rtamano){
    int resultado=0;
    
    resultado = pow(_Nelementos,_Rtamano);
       
    return resultado;
}


   int suma=0;  // suma de (_Nelementos + _Rtamano);
    int restaArriba=0; // resta de (suma -1);
    int restaAbajo=0;  // resta de (_Nelementos -1)
    int resultadoArriba=0; // guarda a el factorialA
    int factorialR=0;       //(_Rtamano)!
    int factorialRA=0;     //(restaArriba)!
    int factorialB=0;       //(restaAbajo)!
    int resultadoAbajo=1;  // (factorialR * factorialB)
    int resultado=0;        

    //operacciones de arriba
    suma= (_Nelementos + _Rtamano);
    cout<<suma<<"\n\n";
    restaArriba=suma - 1;
    cout<<restaArriba<<"\n\n";
    factorialRA= getFactorial2(restaArriba);
    cout<<factorialRA<<"\n\n";
    resultadoArriba= factorialRA;
    cout<<resultadoArriba<<"\n\n";

    //operaciones de abajo
    factorialR= getFactorial2(_Rtamano);
    restaAbajo=_Nelementos-1;
    factorialB= getFactorial2(restaAbajo);
    resultadoAbajo=factorialR*factorialB;
    // resultado de operacion
    resultado= resultadoArriba/resultadoAbajo;