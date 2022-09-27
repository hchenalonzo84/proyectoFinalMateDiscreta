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

//declaracion de variables globales

int calcularPermutacionSinRepeticion(int _Nelemntos, int _Rtamanio);

using namespace std;

int main(int argc, char const *argv[])
{
    // declaracion de variables de menu principal
    int controlador=0; // variable de control apra menu principal de opciones
    int opcion=0; // varibale para guardar la opcion seleccionada por el usuario

    // declaracion de variables de submenu por  cada caso
    int controlador2=0; // vairable de control para no permitir  numeros negativos
    int controlador3=0; // vairable de control para no permitir  numeros negativos
    int _Nelementos=0;  // variable para guardar la cantidad de elementos del conjutnto (n)
    int _Rtamano=0;     // variable para guardar  el tamaño del arreglo del conjunto (r)
    int resultado=0;

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
           controlador=1;
        }else
        {
           cout<<" Opcion no valida, Selecione alguna de las opciones existente";
           controlador=0;
           opcion=0;
           system("PAUSE");
        //    _sleep(2000);
        }

    } while (controlador!=1);
    // finaliza ciclo do-while para  opciones principales    

    // inicia switch case para control de cada caso en particular
     switch (opcion)
            {
            case 1:
                      cout<<"------------------------------------------------"<<endl;
                      cout<<"----Seleciono Permunationces sin repeticion-----"<<endl;
                      cout<<"------------------------------------------------"<<endl;
                      cout<<endl;
                      //ciclo de control  para evitar ingresar numeros negativos en (n)
                      do
                       {
                             cout<<"Ingrese numero elementos del conjunto (n):\t"<<endl;
                             cin>>_Nelementos;
                             if (_Nelementos>=0)
                             {
                                controlador2=1;
                             }else
                             {
                               cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                               controlador2=0;
                               system("PAUSE");
                             }
                        } while (controlador2!=1);
                       //ciclo de control  para evitar ingresar numeros negativos(r)
                      do
                       {
                             cout<<"Ingrese numero de elementos que escoges (r):\t"<<endl;
                             cin>>_Rtamano;
                             if (_Rtamano>=0)
                             {
                                controlador3=1;
                             }else
                             {
                               cout<<"Alerta el numero ingresado deber ser igual o mayor a cero"<<endl;
                               controlador3=0;
                               system("PAUSE");
                             }
                        } while (controlador3!=1);
                      
                       // llamando a metodo calcular permutacion sin repeticion
                
                      resultado =  calcularPermutacionSinRepeticion(_Nelementos,_Rtamano);
                      cout<<"El numero de permutaciones posibles es: "<<resultado<<endl;                
            
                break;
            case 2:
                cout<<"-----------------------------------------------"<<endl;
                cout<<"----Seleciono Permunationces con repeticion-----"<<endl;
                cout<<"------------------------------------------------"<<endl;
                cout<<endl;
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
    return 0;
}

//Seccion de metodos

//metodo para calcular permutaciones sin repeticion
int calcularPermutacionSinRepeticion(int _Nelementos, int _Rtamano){
     return _Nelementos+_Rtamano;
}
