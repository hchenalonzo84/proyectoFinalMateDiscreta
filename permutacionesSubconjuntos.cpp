
#include <iostream>

using namespace std;

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




int getPermutacionSubConjuntos(int n,int sub) {
    
    int resultadoArriba=0;
    int resultadoAbajo=1;
    int arreglo[sub];
    int resultado=0;
    int acumulador=0;
    int centinela=0;
    resultadoArriba = getFactorial(n);
   
    do
    {    
    for(int i=0;i<sub;i++) {
           cout<<" ingresa el subconjunto #"<<i+1<<endl;
           cin>>arreglo[i];
           acumulador=acumulador+arreglo[i];      
    }
        if (n==acumulador)
        {
            centinela=1;
        }else
        {
            cout<<" la sumatoria de los subconjutnos debe ser igual al total de elementos (n)";
            centinela=0;
        }
    } while (centinela!=1);    
        
     
      for(int i=0;i<sub;i++) {
            resultadoAbajo= resultadoAbajo*getFactorial(arreglo[i]); 
            
       }
    

    
    resultado = resultadoArriba/resultadoAbajo;
    
    return resultado;
    
}


int main()
{
    int n=0;
    int r=0;
    int permutacion=0;
    int sub;
    int resultado;
    
    cout<<" ingrese n: "<<endl;
    cin>>n;
    
    cout<<"ingrese el numero de subconjuntos "<<endl;
    cin>>sub;
    
    resultado = getPermutacionSubConjuntos(n,sub);
    
    cout<<" el resultado es "<<resultado;
    

    return 0;
}