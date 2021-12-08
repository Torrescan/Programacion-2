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


void nuevacuenta (){
int usua;
cout << " Hola Bienvenido al programa de finanzas por favor ingresa tu nombre para continuar";
cin >> usua;


}



void Tipoingreso (){


}
void Nuevogastoegreso (){
    int opc;
cout<<"Quieres agregar una categoria ?\n 1)SI\n 2)NO\n ";
cin >> opc;
if(opc == 1)
{
    
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



