
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