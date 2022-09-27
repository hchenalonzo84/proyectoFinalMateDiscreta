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

using namespace std;

int main(int argc, char const *argv[])
{
    // declaracion de variables de menu principal
    int controlador=0;
    int opcion=0;
    // declaracion de variables de submenu por  cada caso
    // int controlador2=0;
    // int subOpcion=0;
    int _Nelementos=0;
    int _Rtamano=0;
    // inicia ciclo do-while para  opciones principales    

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
                // do
                // {
                    // if (subOpcion)
                    // {
                      cout<<"------------------------------------------------"<<endl;
                      cout<<"----Seleciono Permunationces sin repeticion-----"<<endl;
                      cout<<"------------------------------------------------"<<endl;
                      cout<<endl;
                      cout<<"Ingrese la cantidad de elementos N:\t"<<endl;
                      cin>>_Nelementos;
                      cout<<"Ingrese el tamaño del arreglo R:\t"<<endl;
                      cin>>_Rtamano;

                    // }
                    
                // } while (/* condition */);
                
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
