/*PROYECTO FINAL MATEMATICA DISCRETA.
  UNIVERDAD MARIANO GALVEZ DE GUATEMALA.
  SECCION A PLAN DIARIO VESPERTINO  2,022.
  CREACION Y DISEÑO  DE PROGRAMA:
                                 Hugo Rolando Chenal Alonzo -- 4090-12-3918.
                                 Androws Israel Bin Tun -- 0902-19-11196.
                                 
   
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <Windows.h>
#include <stdio.h>
#include "factorial.h"
#include "permutaciones.h"
#include "combinaciones.h"
#include "metodosPrincipales.h"


//declaracion de variables y metodos globales

// metodos principales
double permutacionSR();
double permutacionCR();
double permutacionSCD();
double permutacionCIR();
double combinacionCR();
double combinacionSR();
int salir();


//metodos secundarios
double getFactorial(double _Nelementos);
double calcularPermutacionSinRepeticion(double _Nelementos, double _Rtamanio);
double calcularPermutacionConRepeticion(double _Nelementos, double _Rtamano);
double permutacionSubConjuntoDiv(double _Nelementos, int _SubConjunto);
double permutacionesCirculares(double _Nelementos);
double combinacionesSinRepeticion(double _Nelementos,double _Rtamano);
double combinacionConRepeticion(double _Nelementos, double _Rtamano);

using namespace std;



int main(int argc, char const *argv[])
{
    // declaracion de variables  locales main
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
  do
  {     
    // inicia ciclo do-while  para control opciones principales  
    do
    {  
       
        // arreglo bidimensional para mostrar logo UMG
        int matriz[7][31]={
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,1,0,0,1,1,0,1,1,1,1,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,1,1,0,1,0,1,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,1,1,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,1,0,1,1,1,1,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        };
        
        // ciclo para recorrer las filas del arreglo
        for (int i = 0; i < 7; i++)
        {    
            cout<<"\t\t\t\t\t";
            //ciclo para recorrer columnas del arreglo
            for (int j = 0; j < 31; j++)
            {
            // condicional que evaluar cuando hay 1 en cada fila y columna   y lo mande a imprimir en consola
            if (matriz[i][j]==1) cout<<char(219), Sleep(10); 
            else  cout<<" ";      // caso contrario solo imprime un espacio 
            }
             cout<<endl; //saldo de linea al terminar de leer cada fila
             Sleep(30);
        } 

        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-      Bienvendio seleccione una opcion      -"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-          SECCION DE PERMUTACIONES          -"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t--1. Permutaciones sin repeticion-------------"<<endl;
        cout<<"\t\t\t\t\t--2. Permutaciones con repeticion-------------"<<endl;
        cout<<"\t\t\t\t\t--3. Permutaciones en subconjuntos dividios---"<<endl;
        cout<<"\t\t\t\t\t--4. Permutaciones circulares-----------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<"\t\t\t\t\t-          SECCION DE COMBINACIONES          -"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\t--5. Combinaciones con repeticion-------------"<<endl;
        cout<<"\t\t\t\t\t--6. Combinaciones sin repeticion-------------"<<endl;
        cout<<"\t\t\t\t\t--7. Salir del sistema------------------------"<<endl;
        cout<<"\t\t\t\t\t----------------------------------------------"<<endl;
        // leyendo y guardando opcion seleccionada
        
        cin>>opcion;
        // condicional que evalua la opcion seleccionada
        if (opcion>=1 && opcion<=7)
        {
           controlador2=1;
        }else
        {
           cout<<"\t\t\t\t\tOpcion no valida, Selecione alguna de las opciones existente";
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
                   permutacionSR();                 
                break;
            case 2:
                    permutacionCR();
                break;
            case 3:
                    permutacionSCD();
                break;
            case 4:
                    permutacionCIR();
                break;
            case 5:
                    combinacionCR();
                break;
            case 6:
                    combinacionSR();
                break;
            case 7:
                    salir();
                break;

            default:
                cout<<"\t\t\t\t\tError en switch case";
                break;
            }

  } while (controlador!=1);
  return 0;
}


