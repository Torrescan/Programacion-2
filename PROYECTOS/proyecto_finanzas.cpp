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
void nuevacuenta ();
void categorias();
void newcategoria ();
void sumatotal();
int categoriagrande ();
void Nuevoingreso ();
struct usuarios
{
    string nombre;
    string categoria[100];
 double consumo[100]{};
 int dia;
 string mes;
 int anio;


};
int overflo,salir =false,pib = 0,salida = false;
vector<usuarios> usuar {{}};

usuarios Usuarios;
int main (){
    int opc;

nuevacuenta ();

do
{
cout << " ===SELECCIONE LA OPERACION QUE DESEA REALIZAR==\n 1)NUEVA CUENTA\n 2)NUEVO CATEGORIA\n 3)NUEVO INGRESO\n 4)MOSTRAR CONTROL DE INGRESOS\n 5)VER CATEGORIA CON MAYOR INGRESE\n ";
cin>>opc;
  switch (opc)
  {  
  case 1:nuevacuenta (); 
      break;
      case 2:newcategoria ();
      break;
      case 3:Nuevoingreso ();
      break;
      case 4:sumatotal();
      break;
      case 5:categoriagrande ();
      break;  
  default:printf("OPCION NO VALIDA");
      break;
  }       

} while (salida==false);

}


void nuevacuenta (){
int usua;
cout << " ======================Hola Bienvenido al programa de finanzas por favor ingresa tu nombre para continuar=================\n";
cin >> Usuarios.nombre;


cout<<"BIENVENIDO  "<<Usuarios.nombre<<'\n';
}



void newcategoria (){
    int opc,cate;
    int saliir = false;
do
{
    cout<<"QUIERES AGREGAR UNA NUEVA CATEGORIA ?\n 1)SI\n 2)NO\n ";cin>>opc;
    switch (opc)
    {
    case 1: cout<<"INGRESE UN NOMBRE PARA SU NUEVA CATEGORIA:\n";cin >> Usuarios.categoria[overflo];if(Usuarios.categoria[overflo].length() !=0 ){cout <<"NUEVA CATEGORIA AGREGADA\n";
        cout<<Usuarios.categoria[overflo]<<'\n'<<"DESEAS AGREGARLE UN MONTO INICIAL?\n 1)SI\n 2)NO\n ";cin>>cate;do{
            switch (cate)
            {
            case 1: cin>>Usuarios.consumo[overflo];saliir = true;
                break;
                case 2: Usuarios.consumo[overflo] = 0;
                saliir = true;
            break;
            default: printf("OPCION NO VALIDA\n");
                break;
            }
        }while(saliir==false); }
        break;
    
    case 2: salir =true;
    default:cout<<"OPCION NO VALIDA\n";
        break;
    }
overflo++;


} while(salir==false);


}
void Nuevoingreso (){
    int opc,opc1,cate,montos;
    int saliir = false;

do{
cout<<"QUIERES ELEGIR UNA CATEGORIA?\n 1)SI\n 2)NO\n ";
cin >> opc;
switch (opc)
{
case 1:categorias();cout<<"SELECCIONE LA CATEGORIA\n";cin>>cate;cout<<"ELEGISTE LA CATEGORIA : "<<Usuarios.categoria[cate]<<"\n INGRESE EL MONTO A AGREGAR:\n";cin>>montos;
if(montos !=0){Usuarios.consumo[cate] = Usuarios.consumo[cate] + montos;}else{printf("MONTO NO VALIDO ");} 
    break;
    case 2 :cout<<"QUIERES CREAR UNA NUEVA CATEGORIA ?\n 1)SI\n 2)NO\n";cin>>opc1;switch (opc1){case 1:newcategoria (); break;case 2:saliir=true; break;default:printf("OPCION NO VALIDA");
        break;
    }

default: printf("OPCION NO VALIDA");
    break;
}
}while(saliir == false);

}


void categorias()
{
     cout<<"===================================================================\n";
  for (int i = 0; i < overflo; i++)
  {
     
    cout<<i<<")"<<Usuarios.categoria[i]<<"       "<<"$ "<<Usuarios.consumo[i]<<'\n';

  
  }
  
}






void escribir ()
{
ofstream finanzas;
finanzas.open("finanzas.txt",ios::out);
if(finanzas.fail())
{
   cout<<"no se pudo crear el archivo";
   exit(1); 
}
}
void sumatotal(){
int suma = 0;
for (int i = 0; i < overflo; i++)
{
    suma += Usuarios.consumo[i];
}
cout<<"EL GASTO TOTAL ACUMULADO ES DE :  $"<< suma <<'\n';




}
int categoriagrande (){
int valormax=0;
for (int i = 0; i < overflo; i++)
{
    if(Usuarios.consumo[i]>valormax){valormax =Usuarios.consumo[i];}
}
cout<<"LA CATEGORIA CON MAYOR INGRESO ES:  $"<<valormax;



    return 0;
}

