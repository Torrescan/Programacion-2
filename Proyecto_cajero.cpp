#include <cmath>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <string.h>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
#include<conio.h>
int main (){
    //DEFINIR VARIABLES
    int clave =2020,clave2=2021,clave3=2022 , opcion,opcioncuenta,cantidad1= 1000,cantidad2=1000,cantidad3=1000,cantidad11,cantidad22,cantidad33,tarjeta1=123456789,tarjeta2 = 987654321,tarjeta3=11111111;
    int salir=false, sigoperacion = false, dinerodg= false, usuario1 = false, usuario2 = false, usuario3 = false,contra1,contra2,contra3,ban1,ban2,ban3,buscarcuenta,otraopc;
    int nuevacontra;
    //strring clave1,clave2,clave3;
    
//DEFINIR VOIDS


  inicio1: 
std::cout<<"========================================================\n"; 
std:: cout << "BIENVENIDOS AL CAJERO AUTOMATICO DEL BANCO TORRESBANK\n";
std::cout<<"========================================================\n";
ban1=0;
ban2=0;
ban3=0;
 do{
     std:: cout << "FAVOR DE INTRODUCIR SU NM DE TARJETA\n";
std:: cin >> opcioncuenta;
switch(opcioncuenta){
case 123456789 :

std:: cout << "PORFAVOR INGRESE SU NIP\n";
contrasenia1:
std::cin>>contra1;
if (contra1 == clave){
std:: cout << "BIENVENID@ FULANITO \n";
sigoperacion=true;
usuario1=true;
}
else
{
std:: cout << "CONTRASEÑA INCORRECTA INTENTE DE NUEVO \n";
ban1 = ban1+1;
if (ban1<3){
goto contrasenia1;
}
else{
  std:: cout << "EXCEDISTE LOS INTENTOS INGRESE DE NUEVO \n";
  goto inicio1;
}
}

break;
case 987654321:
std:: cout << "PORFAVOR INGRESE SU NIP\n";
contrasenia2 :
std::cin>>contra2;
if (contra2 == clave2){
std:: cout << "BIENVENID@ FULANITA\n";
sigoperacion=true;
usuario2=true;
}
else{
  std:: cout << "CONTRASEÑA INCORRECTA INTENTE DE NUEVO \n";
  ban2 = ban2+1;
if (ban2<3){
goto contrasenia2;
}
else{
  std:: cout << "EXCEDISTE LOS INTENTOS INGRESE DE NUEVO \n";
  goto inicio1;
}
}
break;
case 11111111:
std:: cout << "PORFAVOR INGRESE SU NIP\n";
contrasenia3 :
std::cin>>contra3;
if (contra3 == clave3){
std:: cout << "BIENVENID@ PEPITO\n";
sigoperacion= true;
usuario3=true;
}
else{
  std:: cout << "CONTRASEÑA INCORRECTA INTENTE DE NUEVO \n";
  ban3 = ban3+1;
if (ban3<3){
goto contrasenia3;
}
else{
  std:: cout << "EXCEDISTE LOS INTENTOS INGRESE DE NUEVO \n";
  goto inicio1;
}
}
break;
default: std::cout<<"USUARIO NO ENCONTRADO O NIP INCORRECTO\n";
//system("PAUSE");

}

 }while (sigoperacion==false);


 do{
   nuevaopcion:
   std::cout<<"========================================================\n";
   std::cout<<"¿QUE FUNCION DESEAS REALIZAR ?\n";
 std::cout<<"1)DEPOSITAR\n2)RETIRAR\n3)REVISAR CARTERA\n4)TRANFERIR DINERO\n 5)CAMBIAR NIP\n 6)SALIR\n";
 std::cin >> opcion;
switch(opcion){
case 1 :
  switch (opcioncuenta)
    {
    case 123456789:
    std::cout<<"INGRESE LA CANTIDAD QUE DESEA AGREGAR A SUS FONDOS\n";
    std::cin >> cantidad11;
    if (cantidad11>0)
    {


   cantidad1 = cantidad1 + cantidad11;
   std::cout << "OPERACION REALIZADA CON EXITO\n";
   std::cout << "$ "<<cantidad1 << "  FONDOS ACTUALES\n";
  }
  else{
  std::cout<<("MONTO INGRESADO NO VALIDO\n");
   }
        break;
    case 987654321:
    std::cout<<"INGRESE LA CANTIDAD QUE DESEA AGREGAR A SUS FONDOS\n";
std::cin >> cantidad22;
if (cantidad22>0)
{

cantidad2 = cantidad2 + cantidad22;
std::cout << "OPERACION REALIZADA CON EXITO\n";
std::cout << "$ "<<cantidad2 << "  FONDOS ACTUALES\n";
}
else
std::cout<<("MONTO INGRESADO NO VALIDO\n");
    break;
    case 11111111:
    std::cout<<"INGRESE LA CANTIDAD QUE DESEA AGREGAR A SUS FONDOS\n";
std::cin >> cantidad33;
if (cantidad33>0)
{

   
  cantidad3 = cantidad3 + cantidad33;
   std::cout << "OPERACION REALIZADA CON EXITO\n";
   std::cout << "$ "<<cantidad3 << "  FONDOS ACTUALES\n";
  }
    else
  std::cout<<("MONTO INGRESADO NO VALIDO\n");
    break;
  
    default: std::cout<<("CARACTER NO VALIDO \n");
        break;
    }
break;
case 2:
switch (opcioncuenta)
    {
    case 123456789:
    std::cout<<"INGRESE LA CANTIDAD QUE DESEA RETIRAR A SUS FONDOS\n";
    std::cin >> cantidad11;
    if ((cantidad11<cantidad1) &&(cantidad11 <= 9000) )
    {
if((cantidad11%50=0))
{


}


   cantidad1 = cantidad1 - cantidad11;
   std::cout << "OPERACION REALIZADA CON EXITO\n";
   std::cout << "$ "<<cantidad1 << "  FONDOS ACTUALES\n";
  }
  else{
  std::cout<<("MONTO INGRESADO NO VALIDO\n");
   }
        break;
    case 987654321:
    std::cout<<"INGRESE LA CANTIDAD QUE DESEA RETIRAR A SUS FONDOS\n";
std::cin >> cantidad22;
if ((cantidad22<cantidad2)&&(cantidad22 <= 9000))
{

cantidad2 = cantidad2 - cantidad22;
std::cout << "OPERACION REALIZADA CON EXITO\n";
std::cout << "$ "<<cantidad2 << "  FONDOS ACTUALES\n";
}
else
std::cout<<("MONTO INGRESADO NO VALIDO\n");
    break;
    case 11111111:
    std::cout<<"INGRESE LA CANTIDAD QUE DESEA RETIRAR A SUS FONDOS\n";
std::cin >> cantidad33;
if ((cantidad33<cantidad3) &&(cantidad33 <= 9000))
{

   
  cantidad3 = cantidad3 - cantidad33;
   std::cout << "OPERACION REALIZADA CON EXITO\n";
   std::cout << "$ "<<cantidad3 << "  FONDOS ACTUALES\n";
  }
    else
  std::cout<<("MONTO INGRESADO NO VALIDO\n");
    break;
  
    default: std::cout<<("CARACTER NO VALIDO \n");
        break;
    }
break;
case 3:
switch (opcioncuenta)
{
case 123456789:
  std::cout << "$ "<<cantidad1 << "  FONDOS ACTUALES\n";
  break;
case 987654321:
std::cout << "$ "<<cantidad2 << "  FONDOS ACTUALES\n";
break;
case 11111111:
std::cout << "$ "<<cantidad3 << "  FONDOS ACTUALES\n";
break;
default:
  break;
}
break;
case 4:
//TRANSFERENCIAS =============================================================================
switch (opcioncuenta)
{
case 123456789:
  std::cout<<"INGRESE EL NUMERO DE TARJETA AL QUE DESEAS TRASNFERIR\n";
  std::cin>>buscarcuenta;
  switch (buscarcuenta)
  {
  case 987654321:
nuevacantidad:
   std::cout<<"CANTIDAD QUE DESEAS DEPOSITAR A FUNALITA\n";
   std::cin>>cantidad11;
   if(cantidad11<=cantidad1){
     if(cantidad11==0){
       goto cantidadno1;
     }
cantidad1 = cantidad1 - cantidad11;
cantidad2 = cantidad2+cantidad11;
std::cout<<"OPERACION REALIZADA CON EXITO\n";
     std::cout << "$ "<<cantidad1 << "  FONDOS ACTUALES\n";
   }
else{
  cantidadno1:
  std::cout<<"MONTO NO VALIDO INGRESE OTRA CANTIDAD\n";
  std::cout<<"DESEAS CORREGIR EL NUMERO?\n SELECCIONA:\n 1)SI\n 2)SALIR Y SELECCIONAR OTRA OPCION\n";
  std::cin>>otraopc;
  switch (otraopc)
  {
  case 1:
goto nuevacantidad;
  break;
  case 2:
  goto nuevaopcion;
    break;
  
  default:std::cout<<"OPCION NO VALIDA\n";
  goto cantidadno1;
    break;
  }

}
    break;

    case 11111111:
    nuevacantidad2:
std::cout<<"CANTIDAD QUE DESEAS DEPOSITAR A PEPE\n";
   std::cin>>cantidad22;
   if(cantidad22<=cantidad1){
     if(cantidad22==0){
       goto cantidadno2;
     }
     cantidad1 = cantidad1 - cantidad22;
cantidad3 = cantidad3+cantidad22;
std::cout<<"OPERACION REALIZADA CON EXITO\n";
     std::cout << "$ "<<cantidad1 << "  FONDOS ACTUALES\n";
   }
   else{
  cantidadno2:
  std::cout<<"MONTO NO VALIDO INGRESE OTRA CANTIDAD\n";
  std::cout<<"DESEAS CORREGIR EL NUMERO?\n SELECCIONA:\n 1)SI\n 2)SALIR Y SELECCIONAR OTRA OPCION\n";
  std::cin>>otraopc;
  switch (otraopc)
  {
  case 1:
  goto nuevacantidad2;
    break;
  case 2:
  goto nuevaopcion;
  break;
  default:std::cout<<"OPCION NO VALIDA\n";
  goto cantidadno2;
    break;
  }
   }
    break;
  case 123456789:
  std::cout<<"NO PUEDES DEPOSITARTE TU MISMO";
  goto nuevaopcion;
  break;
  default:
    break;
  }
  break;
  //CUENTA NUMERO 2 PARA DEPOSITAR =================
  case 987654321:
  std::cout<<"INGRESE EL NUMERO DE TARJETA AL QUE DESEAS TRASNFERIR\n";
  std::cin>>buscarcuenta;
  switch (buscarcuenta)
  {
  case 123456789:
nuevacantidad11:
    std::cout<<"CANTIDAD QUE DESEAS DEPOSITAR A FULANITO\n";
   std::cin>>cantidad22;
   if(cantidad22<=cantidad1){
     if(cantidad22==0){
       goto cantidadno22;
     }
     cantidad2 = cantidad2 - cantidad22;
cantidad1 = cantidad1+cantidad22;
std::cout<<"OPERACION REALIZADA CON EXITO\n";
     std::cout << "$ "<<cantidad2 << "  FONDOS ACTUALES\n";
   }
else{
  cantidadno22:
  std::cout<<"MONTO NO VALIDO INGRESE OTRA CANTIDAD\n";
  std::cout<<"DESEAS CORREGIR EL NUMERO?\n SELECCIONA:\n 1)SI\n 2)SALIR Y SELECCIONAR OTRA OPCION\n";
  std::cin>>otraopc;
  switch (otraopc)
  {
  case 1:
    goto nuevacantidad11;
    break;
  case 2:
  goto nuevaopcion;
  break;

  default:std::cout<<"OPCION NO VALIDA";
  goto nuevaopcion;
    break;
  }
}
    break;
  case 11111111:
  nuevacantidad22:
std::cout<<"CANTIDAD QUE DESEAS DEPOSITAR A PEPE\n";
   std::cin>>cantidad22;
   if(cantidad22<=cantidad2){
     if(cantidad22==0){
       goto cantidadno33;
     }
     cantidad2 = cantidad2 - cantidad22;
cantidad3 = cantidad3+cantidad22;
std::cout<<"OPERACION REALIZADA CON EXITO\n";
     std::cout << "$ "<<cantidad2 << "  FONDOS ACTUALES\n";
   }
else{
  cantidadno33:
  std::cout<<"MONTO NO VALIDO INGRESE OTRA CANTIDAD\n";
  std::cout<<"DESEAS CORREGIR EL NUMERO?\n SELECCIONA:\n 1)SI\n 2)SALIR Y SELECCIONAR OTRA OPCION\n";
  std::cin>>otraopc;
  switch (otraopc)
  {
  case 1:
    goto nuevacantidad22;
    break;
  case 2:
  goto nuevaopcion;
  break;

  default:std::cout<<"OPCION NO VALIDA";
  goto nuevaopcion;
    break;
  }
}
  break;
  case 987654321:
  std::cout<<"NO PUEDES DEPOSITARTE TU MISMO";
  goto nuevaopcion;
  break;
  default:
    break;
  }
  //987654321
  break;
  //CUENTA NUMERO 3 PARA DEPOSITAR =====================
  case 11111111:
  std::cout<<"INGRESE EL NUMERO DE TARJETA AL QUE DESEAS TRASNFERIR\n";
  std::cin>>buscarcuenta;
  switch (buscarcuenta)
  {
  case 123456789:
nuevacantidad12:
    std::cout<<"CANTIDAD QUE DESEAS DEPOSITAR A FULANITO\n";
   std::cin>>cantidad22;
   if(cantidad22<=cantidad3){
     if(cantidad22==0){
       goto cantidadno55;
     }
     cantidad3 = cantidad3 - cantidad22;
cantidad1 = cantidad1+cantidad22;
std::cout<<"OPERACION REALIZADA CON EXITO\n";
     std::cout << "$ "<<cantidad3 << "  FONDOS ACTUALES\n";
   }
else{
  cantidadno55:
  std::cout<<"MONTO NO VALIDO INGRESE OTRA CANTIDAD\n";
  std::cout<<"DESEAS CORREGIR EL NUMERO?\n SELECCIONA:\n 1)SI\n 2)SALIR Y SELECCIONAR OTRA OPCION\n";
  std::cin>>otraopc;
  switch (otraopc)
  {
  case 1:
    goto nuevacantidad12;
    break;
  case 2:
  goto nuevaopcion;
  break;

  default:std::cout<<"OPCION NO VALIDA";
  goto nuevaopcion;
    break;
  }
}
    break;
  case 987654321:
  nuevacantidad33:
std::cout<<"CANTIDAD QUE DESEAS DEPOSITAR A FUNALITA\n";
   std::cin>>cantidad22;
   if(cantidad22<=cantidad3){
     if(cantidad22==0){
       goto cantidadno44;
     }
     cantidad3 = cantidad3 - cantidad22;
cantidad2 = cantidad2+cantidad22;
std::cout<<"OPERACION REALIZADA CON EXITO\n";
     std::cout << "$ "<<cantidad3 << "  FONDOS ACTUALES\n";
   }
else{
  cantidadno44:
  std::cout<<"MONTO NO VALIDO INGRESE OTRA CANTIDAD\n";
  std::cout<<"DESEAS CORREGIR EL NUMERO?\n SELECCIONA:\n 1)SI\n 2)SALIR Y SELECCIONAR OTRA OPCION\n";
  std::cin>>otraopc;
  switch (otraopc)
  {
  case 1:
    goto nuevacantidad33;
    break;
  case 2:
  goto nuevaopcion;
  break;

  default:std::cout<<"OPCION NO VALIDA";
  goto nuevaopcion;
    break;
  }
}
  break;
  case 11111111:
  std::cout<<"NO PUEDES DEPOSITARTE TU MISMO";
  goto nuevaopcion;
  break;
  default:
    break;
  }
  break;

default:
  break;
}
break;
case 5:
//NUEVA CONTRASEÑA =============================
switch (opcioncuenta)
{
case 123456789:
  std::cout<<"INGRESE LA NUEVA CONTRASEÑA\n";
std::cin>>nuevacontra;
//if(strlen(nuevacontra)==4){
  clave = nuevacontra;
goto nuevaopcion;
  break;
case 11111111:
 std::cout<<"INGRESE LA NUEVA CONTRASEÑA\n";
 std::cin>>nuevacontra;
 clave2 = nuevacontra;
 goto nuevaopcion;
break;
case 987654321:
 std::cout<<"INGRESE LA NUEVA CONTRASEÑA\n";
 std::cin>>nuevacontra;
 clave3 = nuevacontra;
 goto nuevaopcion;
break;
default:
  break;
}
break;
case 6:
salir=true;
break;
default: printf("OPCION NO VALIDA\n");
}

 }while (salir==false);
//std::cout<<"================================================================================================================\n";

//void vIngresarDinero();
//system("PAUSE");
goto inicio1;
std::cout<<("ESTE MENSAJE NO LO VA MOSTRAR\n");
return 0;

}