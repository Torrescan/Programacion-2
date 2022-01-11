#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
#include<conio.h>
#include<fstream>
using namespace std;
struct usuarios
{
string nombre;
string recordatorio[100];
int dia;
 string mes;
 int anio;
double fecha[];

};
usuarios Usuarios;
int overflo;
void categorias();
void inicio();
void nuevacate();
int main(){

    
}

void inicio()
{
   
cout<<"======================BIENVENIDOS AL SISTEMA DE GUARDADO DE EVENTOS=====================\nPOR FAVOR INGRESE SU NOMBRE :\n";;cin>>Usuarios.nombre;
cout<<"BIENVENIDO "<<Usuarios.nombre<<"\n";

}

void nuevorecorda(){
    int opc;
int saliir = false;
    do{
cout<<"QUIERES AGREGAR UN NUEVO RECORDATORIO ?\n 1)SI\n 2)NO\n ";cin>>opc;switch (opc)
{
case 1:cout<<"NOMBRE AL RECORDATORIO :\n";
    break;
    case 2:saliir = true;
    break;

default:
    break;
}
    }while(saliir==false);
}
void categorias()
{
     cout<<"===================================================================\n";
  for (int i = 0; i < overflo; i++)
  {
     
    cout<<i<<")"<<Usuarios.recordatorio[i]<<"       "<<"$ ";

  
  }
  
}