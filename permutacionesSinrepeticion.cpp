
#include <iostream>

using namespace std;

int getFactorial(int numero);
int getPermutacion(int n, int r);

int main(int argc, char const *argv[])
{
    int n=0;
    int r=0;
    int permutacion=0;
    cout<<"Ingrese  n: ";
    cin>>n;
    cout<<"Ingrese  r: ";
    cin>>r;
    
    permutacion = getPermutacion(n,r);
    cout<<"la permutacion es "<<permutacion;
    

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


int getPermutacion(int n, int r) {
    int factorialN=0;
    int resta=0;
    int factorialResta=0;
    int resultado=0;
    
    factorialN= getFactorial(n);
    resta= n-r;
    factorialResta = getFactorial(resta);
    
    resultado=factorialN/factorialResta;
    
    return resultado;
    
}