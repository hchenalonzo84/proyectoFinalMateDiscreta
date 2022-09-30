#include <iostream>
#include <string>

using namespace std;

   int controlador=0; // variable de control apra menu principal de opciones
    int opcion=0; // varibale para guardar la opcion seleccionada por el usuario
    
    // declaracion de variables de submenu por  cada caso
    int controlador2=0; // variable de control para no permitir  numeros negativos
    int controlador3=0; // variable de control para no permitir  numeros negativos
    int controlador4=0; // variable de control para no permitir  numeros negativos
    int controlador5=0; // variable de control para no permitir  que N sea menor a R.
    int controlador6=0; // variable de control para salir del sistema desde menu principal.
    double _Nelementos=0;  // variable para guardar la cantidad de elementos del conjutnto (n)
    double _Rtamano=0;     // variable para guardar  el tamaño del arreglo del conjunto (r)
    double resultado=0;    // variable que guarda resultado  que devuelven los metodos
    int _SubConjunto=0;  // variable que guarda el tamaño del arreglo de los subconjutnos divididos
    string subOpcion=""; // variable que guarda opcion si salir o no del sistema
    //inicio de ciclo para repterir todo el programa desde el inio o salir

// metodo para caso 1- permutaciones sin repeticion
double permutacionSR(){
                      cout<<"------------------------------------------------"<<endl;
                      cout<<"----Seleciono Permunationces sin repeticion-----"<<endl;
                      cout<<"------------------------------------------------"<<endl;
                      cout<<endl;
                      //ciclo de control  para evitar que N sea mayor a R
                      do
                      {
                      //ciclo de control  para evitar ingresar numeros negativos en (n)
                       do
                        {
                             cout<<"Ingrese numero elementos del conjunto (n):\t"<<endl;
                             cin>>_Nelementos;
                             if (_Nelementos>=0)
                             {
                                controlador3=1;
                             }else
                             {
                               cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                               controlador3=0;
                               system("PAUSE");
                               cout<<endl;
                             }
                        } while (controlador3!=1);
                       //ciclo de control  para evitar ingresar numeros negativos(r)
                       do
                        {
                             cout<<"Ingrese numero de elementos que escoges (r):\t"<<endl;
                             cin>>_Rtamano;
                             if (_Rtamano>=0)
                             {
                                controlador4=1;
                             }else
                             {
                               cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                               controlador4=0;
                               system("PAUSE");
                               cout<<endl;
                             }
                             
                        } while (controlador4!=1);
                      
                        if (_Nelementos>=_Rtamano)
                        {
                              // llamando a metodo calcular permutacion sin repeticion
                              resultado =  calcularPermutacionSinRepeticion(_Nelementos,_Rtamano);
                              cout<<"El numero de permutaciones posibles es: "<<resultado<<endl;
                              cout<<endl;
                            do
                    {                      
                      cout<<"si desea realizar otra operacion ingrese (si/no)";
                      cin>>subOpcion;
                      if (subOpcion=="si")
                       {
                          controlador6=1;
                          controlador5=1;
                          controlador=0;
                       }else if (subOpcion=="no")
                       {
                          cout<<endl;
                          cout<<"saliendo del sistema de calculo.....";
                          exit(0);
                       }else                       
                       {
                        cout<<endl;
                        cout<<"Opcion no valida";
                        subOpcion=="";
                        controlador6=0;
                       }
                    } while (controlador6!=1);
                        }else
                        {
                            cout<<"Advertencia: N  deber ser mayor o igual a R:";
                            cout<<"\n\n";
                            controlador5=0;
                        }
                      } while (controlador5!=1);  
  return 0;
}

// metodo para caso 2- permutaciones con repeticion
double permutacionCR(){
               cout<<"-----------------------------------------------"<<endl;
                cout<<"----Seleciono Permunationces con repeticion-----"<<endl;
                cout<<"------------------------------------------------"<<endl;
                cout<<endl;
                // ciclo de ontrol  para evitar ingresar numeros negativos en (n)
                do
                { 
                  cout<<"Ingrese numero elementos del conjunto (n):\t"<<endl;
                  cin>>_Nelementos;            
                  if (_Nelementos>=0)
                  {
                    controlador3=1;
                  }
                  else
                  {
                    cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                    controlador3=0;
                    system("PAUSE");
                    cout<<endl;
                  }                  
                } while (controlador3!=1);
                //ciclo de control  para evitar ingresar numeros negativos(r)
                do
                { 
                  cout<<"Ingrese numero de elementos que escoges (r):\t"<<endl;
                  cin>>_Rtamano;
                  if (_Rtamano>=0)
                  {
                    controlador4=1;
                  }
                  else
                  {
                    cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                    controlador4=0;
                    system("PAUSE");
                    cout<<endl;
                  }
                  
                } while (controlador4!=1);
                
                  // llamando a metodo calcular permutacion sin repeticion
                  resultado =  calcularPermutacionConRepeticion(_Nelementos,_Rtamano);
                  cout<<"El numero de permutaciones posibles es: "<<resultado<<endl;
                  cout<<endl;
                 do
                    {                      
                      cout<<"si desea realizar otra operacion ingrese (si/no)";
                      cin>>subOpcion;
                      if (subOpcion=="si")
                       {
                          controlador6=1;
                          controlador=0;
                       }else if (subOpcion=="no")
                       {
                          cout<<endl;
                          cout<<"saliendo del sistema de calculo.....";
                          exit(0);
                       }else                       
                       {
                        cout<<endl;
                        cout<<"Opcion no valida";
                        subOpcion=="";
                        controlador6=0;
                       }
                    } while (controlador6!=1);
   return 0;
}

//metodo para caso 3- permutaciones con subconjuntos divididos
double permutacionSCD(){
                cout<<"------------------------------------------------------------"<<endl;
                cout<<"-----Seleciono Permunationces en subconjuntos divididos-----"<<endl;
                cout<<"------------------------------------------------------------"<<endl;
                cout<<endl;
                do
                {
                  cout<<"Ingrese numero elementos del conjunto (n):\t"<<endl;
                  cin>>_Nelementos;            
                  if (_Nelementos>=0)
                  {
                    controlador3=1;
                  }
                  else
                  {
                    cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                    controlador3=0;
                    system("PAUSE");
                    cout<<endl;
                  }            
                } while (controlador3!=1);
                do
                {
                  cout<<"Ingrese numero de subconjuntos:\t"<<endl;
                  cin>>_SubConjunto;            
                  if (_SubConjunto>=0)
                  {
                    controlador4=1;
                  }
                  else
                  {
                    cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                    controlador4=0;
                    system("PAUSE");
                    cout<<endl;
                  }            
                } while (controlador4!=1);
                // llamando a metodo para calcular permutacion con subconjuntos divididos
                resultado = permutacionSubConjuntoDiv(_Nelementos, _SubConjunto);
                 cout<<"El numero de permutaciones posibles es: "<<resultado<<endl;
                  cout<<endl;
                    do
                    {                      
                      cout<<"si desea realizar otra operacion ingrese (si/no)";
                      cin>>subOpcion;
                      if (subOpcion=="si")
                       {
                          controlador6=1;
                          controlador=0;
                       }else if (subOpcion=="no")
                       {
                          cout<<endl;
                          cout<<"saliendo del sistema de calculo.....";
                          exit(0);
                       }else                       
                       {
                        cout<<endl;
                        cout<<"Opcion no valida";
                        subOpcion=="";
                        controlador6=0;
                       }
                    } while (controlador6!=1);
   return 0;
}
// metotdo para caso 4- permutaciones circulares
double permutacionCIR(){
                cout<<"----------------------------------------------"<<endl;
                cout<<"----Seleciono Permunationces circulares-------"<<endl;
                cout<<"----------------------------------------------"<<endl;
                cout<<endl;
                do
                {
                  cout<<"Ingrese numero elementos del conjunto (n):\t"<<endl;
                  cin>>_Nelementos;
                  if (_Nelementos>=0)
                  {
                    controlador3=1;
                  }
                  else
                  {
                     cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                     controlador3=0;
                     system("PAUSE");
                     cout<<endl;
                  }
                  
                } while (controlador3!=1);
                
                resultado = permutacionesCirculares(_Nelementos);
                cout<<"El numero de permutaciones posibles es: "<<resultado<<endl;
                 do
                    {                      
                      cout<<"si desea realizar otra operacion ingrese (si/no)";
                      cin>>subOpcion;
                      if (subOpcion=="si")
                       {
                          controlador6=1;
                          controlador=0;
                       }else if (subOpcion=="no")
                       {
                          cout<<endl;
                          cout<<"saliendo del sistema de calculo.....";
                          exit(0);
                       }else                       
                       {
                        cout<<endl;
                        cout<<"Opcion no valida";
                        subOpcion=="";
                        controlador6=0;
                       }
                    } while (controlador6!=1);
   return 0;
}
//metodo para caso 5- cobinaciones con repeticion
double combinacionCR(){
                cout<<"-----------------------------------------------"<<endl;
                cout<<"----Seleciono Combinaciones con repeticion-----"<<endl;
                cout<<"-----------------------------------------------"<<endl;
                cout<<endl;
                do
                {
                  do
                  {
                    cout<<"Ingrese numero elementos del conjunto (n):\t"<<endl;
                    cin>>_Nelementos;
                    if (_Nelementos>=0)
                    {
                      controlador3=1;
                    }
                    else
                    {
                      cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                      controlador3=0;
                      system("PAUSE");
                      cout<<endl;
                    }
                    
                  } while (controlador3!=1);
                  do
                  {
                    cout<<"Ingrese numero de elementos que escoges (r):\t"<<endl;
                    cin>>_Rtamano;
                    if (_Rtamano>=0)
                    {
                      controlador4=1;
                    }
                    else
                    {
                      cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                      controlador4=0;
                      system("PAUSE");
                      cout<<endl;
                    }
                    
                  } while (controlador4!=1);
                  // condicional que evalua si  n y r son iguales a cero 
                  if (_Nelementos==0 && _Rtamano==1)
                  {
                     cout<<"Advertencia (n) no puede ser cero y (r) no pueden ser uno\n"<<endl;
                     controlador5=0;
                  }
                  else if (_Nelementos==1 && _Rtamano==0)
                  {
                    controlador5=1;
                  }else if (_Nelementos==0 && _Rtamano==0)
                  {
                    cout<<"Advertencia (n) y (r) no pueden ser cero al mismo tiempo\n"<<endl;
                    controlador5=0;
                  }else                  
                  {
                    controlador5=1;
                  }
                } while (controlador5!=1);
                
                resultado= combinacionConRepeticion(_Nelementos,_Rtamano);
                cout<<"El numero de combinaciones posibles es: "<<resultado<<endl;
                cout<<endl;
                    do
                    {                      
                      cout<<"si desea realizar otra operacion ingrese (si/no)";
                      cin>>subOpcion;
                      if (subOpcion=="si")
                       {
                          controlador6=1;
                          controlador=0;
                       }else if (subOpcion=="no")
                       {
                          cout<<endl;
                          cout<<"saliendo del sistema de calculo.....";
                          exit(0);
                       }else                       
                       {
                        cout<<endl;
                        cout<<"Opcion no valida";
                        subOpcion=="";
                        controlador6=0;
                       }
                    } while (controlador6!=1);
                
   return 0;
}
//metodo para caso 6- combinaciones sin repeticion
double combinacionSR(){
    cout<<"-----------------------------------------------"<<endl;
                cout<<"----Seleciono Combinaciones sin repeticion-----"<<endl;
                cout<<"-----------------------------------------------"<<endl;
                cout<<endl;
                do
                {
                  cout<<"Ingrese numero elementos del conjunto (n):\t"<<endl;
                  cin>>_Nelementos;
                  if (_Nelementos>0)
                  {
                    controlador3=1;
                  }
                  else
                  {
                     cout<<"Alerta el numero ingresado deber ser mayor a cero"<<endl;
                     controlador3=0;
                     system("PAUSE");
                     cout<<endl;
                  }
                } while (controlador3!=1);
                do
                {
                  cout<<"Ingrese numero de elementos que escoges (r):\t"<<endl;
                   cin>>_Rtamano;
                   if (_Rtamano>=0)
                    {
                         controlador4=1;
                    }else
                    {
                        cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                        controlador4=0;
                        system("PAUSE");
                        cout<<endl;
                    }
                } while (controlador4!=1);

                 resultado = combinacionesSinRepeticion(_Nelementos,_Rtamano);
                 cout<<"El numero de combinaciones posibles es: "<<resultado<<endl;
                 cout<<endl;
                    do
                    {                      
                      cout<<"si desea realizar otra operacion ingrese (si/no)";
                      cin>>subOpcion;
                      if (subOpcion=="si")
                       {
                          controlador6=1;
                          controlador=0;
                       }else if (subOpcion=="no")
                       {
                          cout<<endl;
                          cout<<"saliendo del sistema de calculo.....";
                          exit(0);
                       }else                       
                       {
                        cout<<endl;
                        cout<<"Opcion no valida";
                        subOpcion=="";
                        controlador6=0;
                       }
                    } while (controlador6!=1);
   return 0;
}
//meotodo para caso 7- salir del sistema
int salir(){
    cout<<"-----------------------------------------------"<<endl;
                do
                {
                cout<<"---- ¿Seguro que desenoa salir del sistema (si/no)?-----\t"<<endl;
                cin>>subOpcion;
                  if (subOpcion=="si")
                  {
                    cout<<endl;
                    cout<<"saliendo del sistema de calculo.....";
                    exit(0);
                  }
                  else if (subOpcion=="no")
                  {
                    controlador6=1;
                    controlador=0;
                  }
                  else
                  {
                    cout<<"Opcion no valida"<<endl;
                    cout<<endl;
                    subOpcion="";
                    controlador6=0;
                  }  
                } while (controlador6!=1);                
                cout<<"-----------------------------------------------"<<endl;
                cout<<endl;
   return 0;
}
