double getFactorial(double numero) {
    double i=numero;
    double factorial=1;
    double acumulado=1;
    
    while(i>=1) {
        factorial = acumulado*i;           
        acumulado=factorial;
       i--;  
    }
    
    return factorial;
    
}
