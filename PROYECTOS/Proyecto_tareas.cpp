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
string dia;
 string mes;
 string anio;
string fecha[];

};
usuarios Usuarios;
int overflo,salida = false;
void categorias();
void inicio();
void nuevacate();
void nuevorecorda();
void recordatorios();
void cambiar();
int main(){
int opc;
    do
{
cout << " ===SELECCIONE LA OPERACION QUE DESEA REALIZAR==\n 1)NUEVA CUENTA\n 2)NUEVO RECORDATORIO\n 3)VER RECORDATORIOS\n 4)CAMBIAR UN RECORDATORIO\n 5)ELIMINAR UN RECORDATORIO\n ";
cin>>opc;
  switch (opc)
  {  
  case 1:inicio();
      break;
      case 2:nuevorecorda();
      break;
      case 3:recordatorios();
      break;
  case 4:cambiar();
  break;
  default:printf("OPCION NO VALIDA");
      break;
  }       

} while (salida==false);

}


void inicio()
{
   
cout<<"======================BIENVENIDOS AL SISTEMA DE GUARDADO DE EVENTOS=====================\nPOR FAVOR INGRESE SU NOMBRE :\n";;cin>>Usuarios.nombre;
cout<<"BIENVENIDO "<<Usuarios.nombre<<"\n";

}

void nuevorecorda(){
    int opc,op2;
int saliir = false;
    do{
cout<<"QUIERES AGREGAR UN NUEVO RECORDATORIO ?\n 1)SI\n 2)NO\n ";cin>>opc;switch (opc)
{
case 1:cout<<"NOMBRE AL RECORDATORIO :\n";cin>>Usuarios.recordatorio[overflo];cout<<"AGREGAR UNA FECHA ?\n 1)SI\n 2)NO\n";cin>>op2;switch (op2)
{
case 1:cout<<"INTRODUZCA EL DIA\n";cin>>Usuarios.dia;cout<<"INTRODUZCA EL MES\n";cin>>Usuarios.mes;cout<<"INTRODUZCA EL AÑO\n";cin>>Usuarios.anio;
Usuarios.fecha[overflo] = (Usuarios.dia + " / " + Usuarios.mes + " / " + Usuarios.anio);
    break;
case 2 :cout<<"SE AGREGO LA FECHA ACTUAL\n";
default:
    break;
}
    break;
    case 2:saliir = true;
    break;

default:
    break;
}
overflo++;
    }while(saliir==false);
}
void recordatorios()
{
     cout<<"===================================================================\n";
  for (int i = 0; i < overflo; i++)
  {
     
    cout<<i<<")"<<Usuarios.recordatorio[i]<<"  FECHA :  "<<Usuarios.fecha[i]<<'\n';

  
  }
  
}


int fechas(){


return 0;

}

void cambiar(){
  int opc,op2;
int saliir = false;
cout<<"===================================================================\n";
cout<<"QUIERES MODIFICAR UN RECORDATORIO ?\n 1)SI\n 2)NO\n ";cin>>opc;switch (opc)
{
case 1 :cout<<"QUE  DESEAS MODIFICAR  ?\n 1)NOMBRE\n 2)FECHA\n ";
    break;
case 2 :
break;
default:
    break;
}

}
