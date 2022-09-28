/*PROYECTO FINAL MATEMATICA DISCRETA.
  UNIVERDAD MARIANO GALVEZ DE GUATEMALA.
  SECCION A PLAN DIARIO VESPERTINO  2,022.
  CREACION Y DISEÑO  DE PROGRAMA:
                                 Hugo Rolando Chenal Alonzo -- 4090-12-3918.
                                 Androws Israel Bin Tun -- 0902-19-11196.
                                 pedro
   
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>


//declaracion de variables y metodos globales
int getFactorial(int _Nelementos);
int calcularPermutacionSinRepeticion(int _Nelementos, int _Rtamanio);
int calcularPermutacionConRepeticion(int _Nelementos, int _Rtamano);

using namespace std;

int main(int argc, char const *argv[])
{
    // declaracion de variables de menu principal
    int controlador=0; // variable de control apra menu principal de opciones
    int opcion=0; // varibale para guardar la opcion seleccionada por el usuario
    string subOpcion="";

    // declaracion de variables de submenu por  cada caso
    int controlador2=0; // variable de control para no permitir  numeros negativos
    int controlador3=0; // variable de control para no permitir  numeros negativos
    int controlador4=0; // variable de control para no permitir  numeros negativos
    int controlador5=0; // variable de control para no permitir  que N sea menor a R.
    int _Nelementos=0;  // variable para guardar la cantidad de elementos del conjutnto (n)
    int _Rtamano=0;     // variable para guardar  el tamaño del arreglo del conjunto (r)
    int resultado=0;

    //inicio de ciclo para repterir todo el programa desde el inio o salir
  do
  {     
    // inicia ciclo do-while  para control opciones principales  
    do
    {
        
        cout<<"----------------------------------------------"<<endl;
        cout<<"--Bienvendio selecciones la opcion que desea--"<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"---------SECCION DE PERMUTACIONES-------------"<<endl;
        cout<<endl;
        cout<<"--1. Permutaciones sin repeticion-------------"<<endl;
        cout<<"--2. Permutaciones con repeticion-------------"<<endl;
        cout<<"--3. Permutaciones en subconjuntos dividios---"<<endl;
        cout<<"--4. Permutaciones circulares-----------------"<<endl;
        cout<<endl;
        cout<<"---------SECCION DE COMBINACIONES-------------"<<endl;
        cout<<"--5. Combinaciones con repeticion-------------"<<endl;
        cout<<"--6. Combinaciones sin repeticion-------------"<<endl;
        cout<<"----------------------------------------------"<<endl;
        // leyendo y guardando opcion seleccionada
        cin>>opcion;
        // condicional que evalua la opcion seleccionada
        if (opcion>=1 && opcion<=6)
        {
           controlador2=1;
        }else
        {
           cout<<" Opcion no valida, Selecione alguna de las opciones existente";
           controlador2=0;
           opcion=0;
           system("PAUSE");
        //    _sleep(2000);
        }

    } while (controlador2!=1);
    // finaliza ciclo do-while para  opciones principales    

    // inicia switch case para control de cada caso en particular
     switch (opcion)
            {
            case 1:
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
                              cout<<"si desea realizar otra operacion ingrese (si/no)";
                              cin>>subOpcion;
                              if (subOpcion=="si")
                              {
                                  controlador=0;
                              }else
                              {
                                  cout<<endl;
                                  cout<<"saliendo del sistema de calculo.....";
                                  controlador=1;
                              }
                        }else
                        {
                            cout<<"Advertencia: N  deber ser mayor o igual a R:";
                            cout<<"\n\n";
                            controlador5=0;
                        }
                      } while (controlador5!=1);  
                        
                 
                break;
            case 2:
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
                  cout<<"si desea realizar otra operacion ingrese (si/no)";
                  cin>>subOpcion;
                    if (subOpcion=="si")
                    {
                        controlador=0;
                    }else
                    {
                        cout<<endl;
                        cout<<"saliendo del sistema de calculo.....";
                        controlador=1;
                    }
                break;
            case 3:
                cout<<"------------------------------------------------------------"<<endl;
                cout<<"-----Seleciono Permunationces en subconjuntos divididos-----"<<endl;
                cout<<"------------------------------------------------------------"<<endl;
                cout<<endl;
                break;
            case 4:
                cout<<"----------------------------------------------"<<endl;
                cout<<"----Seleciono Permunationces circulares-------"<<endl;
                cout<<"----------------------------------------------"<<endl;
                cout<<endl;
                break;
            case 5:
                cout<<"-----------------------------------------------"<<endl;
                cout<<"----Seleciono Combinaciones sin repeticion-----"<<endl;
                cout<<"-----------------------------------------------"<<endl;
                cout<<endl;
                break;
            case 6:
                cout<<"-----------------------------------------------"<<endl;
                cout<<"----Seleciono Combinaciones sin repeticion-----"<<endl;
                cout<<"-----------------------------------------------"<<endl;
                cout<<endl;
                break;
            
            default:
                cout<<"Error en switch case";
                break;
            }

  } while (controlador!=1);
  return 0;
}

//Seccion de metodos

//metodo pra calcular   el factorial de un numero
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