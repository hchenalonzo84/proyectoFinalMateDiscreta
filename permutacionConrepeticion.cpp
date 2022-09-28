#include <iostream>
#include <math.h>
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