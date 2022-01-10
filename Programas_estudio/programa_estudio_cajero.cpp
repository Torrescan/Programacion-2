#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

struct usuario
{
  string cuenta;
  string NIP;
  string nombre;
  int saldo;
  int intentos;
};

vector<usuario> usuarios{{"234", "2484", "Manuel", 800, 3}, {"465", "2342", "Jose", 250, 3}, {"758", "6839", "Maria", 500, 3}, {"26852197", "5658", "Luis", 1200, 3}};

int usuarioActual;
int usuarioDest;

int login(string cuenta);
int destino(string cuenta);
int interfazMenu();
void interfazRetiro();
void interfazDepositar();
void interfazTransferir();
string depositar(int monto);
string retirar(int monto);
string transferir(int monto);
int interfazMenuUsuario();
int interfazRecarga();

int main()
{
  while (true)
  {
    //system("cls");
    cout << "************ CAJERO AUTOMATICO ************\n";
    interfazMenu();
        system("pause");
  }

  return 0;
}
void interfazDepositar()
{
  int monto;
  cout << "DEPOSITAR\n";
  cout << "Ingrese monto a depositar (solo multiplos de 50)\n";
  cin >> monto;
  string estado = depositar(monto);
  cout << estado;
 // system("pause");
}
string depositar(int monto)
{
   int residuo;
  residuo = monto%50;
  if (residuo != 0)
  return "Solo ingresar multiplos de 50\n";
  usuarios[usuarioActual].saldo += monto;
  return "El deposito fue exitoso\n ";
  
}

void interfazRetiro()
{
  int monto;
  cout << "RETIRO\n";
  cout << "Ingrese el monto a retirar\n";
  cin >> monto;
  string estado = retirar(monto);
  cout << estado;
  //system("PAUSE");
}

string retirar(int monto)
{
   int residuo;
  residuo = monto%50;
  if (residuo != 0)
  return "Solo ingresar multiplos de 50\n";
    if (usuarios[usuarioActual].saldo < monto)
    return "Usted no dispone del saldo \n";
  if (monto <= 0)
    return "El monto debe ser mayor a 0\n";
  if (monto > 9000)
    return "El monto es mayor a lo permitido (9000) \n";
  usuarios[usuarioActual].saldo -= monto;
  return "El retiro fue exitoso\n";
  
}
void interfazTransferir()
{
  string cuenta;
  int monto;
  cout << "TRANSFERENCIA\n ";
  cout << "Ingrese el numero de cuenta del usuario al que desea transferir\n";
  cin >> cuenta;
  int dest = destino(cuenta);
  if (dest != -1)
  {
    usuarioDest = dest;
     cout << "Monto a transferir\n ";
  cin >> monto;
  string estado = transferir(monto);
  cout << estado;
  }
  else
    cout << " usuario incorrecto\n";
  system("pause");
}
//goto
string transferir(int monto)
{
  if (monto <= 0)
    return "El monto debe ser mayor a 0\n";
  if (usuarios[usuarioActual].saldo < monto)
    return "Usted no dispone del saldo\n";
  usuarios[usuarioActual].saldo -= monto;
  usuarios[usuarioDest].saldo += monto;
  return "La transferencia fue exitosa\n";
}

void estadoCuenta()
{
 cout << "Nombre: " << usuarios[usuarioActual].nombre << '\n';
 cout << "Numero de tarjeta: " << usuarios[usuarioActual].cuenta << '\n';
 cout << "Dinero actual: " << usuarios[usuarioActual].saldo << '\n';
 cout << "NIP: " << usuarios[usuarioActual].NIP << '\n';
 //system ("pause");
}

int interfazRecarga()
{
  int opcion;
  int redTelefonica;
  cout << "RECARGA\n";
  cout << "Seleccione red telefonica\n";
  cout << "<0>  Telcel\n";
  cout << "<1>  Movistar\n";
  cout << "<2>  AT&T\n";
  cout << "<3>  Unefon\n";
  cout << "<4>  Weex\n";
  cout << "<5>  Freedompop\n";

  cin >> redTelefonica;
  
  cout << "Seleccione saldo a recargar\n";
  cout << "<0>  $30\n";
  cout << "<1>  $50\n";
  cout << "<2>  $100\n";
  cout << "<3>  $150\n";
  cout << "<4>  $200\n";
  cout << "<5>  $300\n";
  cout << "<6>  $500\n";
  cout << "<7>  Regresar";

  cin >> opcion;
 switch (opcion)
  {
  case 0:
    if (usuarios[usuarioActual].saldo < 30)
    {
    cout <<  "Usted no dispone del saldo\n";
    }
    else
    usuarios[usuarioActual].saldo - 30;
    cout << "La recarga fue un exito\n";
    break;
  case 1:
   if (usuarios[usuarioActual].saldo < 50)
    {
    cout <<  "Usted no dispone del saldo\n";
    }
    else
    usuarios[usuarioActual].saldo - 50;
    cout << "La recarga fue un exito\n";
  break;
  case 2:
  if (usuarios[usuarioActual].saldo < 100)
    {
    cout <<  "Usted no dispone del saldo\n";
    }
    else
   usuarios[usuarioActual].saldo - 100;
    cout << "La recarga fue un exito\n";
  break;
  case 3:
  if (usuarios[usuarioActual].saldo < 150)
    {
    cout <<  "Usted no dispone del saldo\n";
    }
    else
  usuarios[usuarioActual].saldo - 150;
    cout << "La recarga fue un exito\n";
  break;
  case 4:
  if (usuarios[usuarioActual].saldo < 200)
    {
    cout <<  "Usted no dispone del saldo\n";
    }
    else
   usuarios[usuarioActual].saldo - 200;
    cout << "La recarga fue un exito\n";
  break;
  case 5:
  if (usuarios[usuarioActual].saldo < 300)
    {
    cout <<  "Usted no dispone del saldo\n";
    }
    else
   usuarios[usuarioActual].saldo - 300;
    cout << "La recarga fue un exito\n";
  break;
  case 6:
  if (usuarios[usuarioActual].saldo < 500)
    {
    cout <<  "Usted no dispone del saldo\n";
    }
    else
   usuarios[usuarioActual].saldo - 500;
    cout << "La recarga fue un exito\n";
  break;
  case 7:
  interfazMenuUsuario();
  break;
  return opcion;
  }
  return 0;
}

int cambiarNIP()
{
int opcion = 0;
string nuevoNIP;
cout << "CAMBIO DE NIP\n";
cout << "<0> Cambiar NIP\n";
cout << "<1> Salir\n";

cin >> opcion;

switch (opcion)
{
case 0:
cout << "Ingresa nuevo NIP\n";
cin >> nuevoNIP;
if (nuevoNIP.length() > 4 && nuevoNIP.length() < 4)
{
cout << "El NIP debe contener 4 digitos\n";
}
else
  usuarios[usuarioActual].NIP = nuevoNIP;
  cout << "El cambio de NIP fue exitoso\n";
  break;

case 1:
interfazMenuUsuario();
  break;
}return 0;
} 

int interfazMenuUsuario()
{
    int opcion = 0;

  while(opcion != 6)
  { 
  cout << "************ CAJERO AUTOMATICO ************\n";
  cout << " <0> Depositar\n";
  cout << " <1> Retirar\n";
  cout << " <2> Transferir\n";
  cout << " <3> Ver estado de cuenta\n";
  cout << " <4> Recargar saldo\n";
  cout << " <5> Cambiar NIP\n";
  cout << " <6> Salir \n";

  cin >> opcion;

  switch (opcion)
  {
  case 0:
    interfazDepositar();
    break;
  case 1:
    interfazRetiro();
    break;
  case 2:
    interfazTransferir();
    break;
    case 3:
    estadoCuenta();
    break;
  case 4:
    interfazRecarga();
    break;
  case 5:
    cambiarNIP();
    break;
  return opcion;
  
  }
  return 0;
  }
//system ("Pause");
}

int interfazMenu()
{
  string cuenta, NIP;
  cout << " Ingresa numero de tarjeta \n ";
  cin >> cuenta;
  int usIndice = login(cuenta);
  if (usIndice != -1)
  {
    usuarioActual = usIndice;
  cout << " Ingresa NIP \n ";
  cin >> NIP;
    if (NIP == usuarios[usuarioActual].NIP)
  {
    interfazMenuUsuario();
  }
  else 
    usuarios[usuarioActual].intentos - 1;
    cout << " NIP incorrecto numero de intentos:" << usuarios[usuarioActual].intentos << "\n";
  }
  else
  cout << " Numero de tarjeta inexistente\n";
  return 0;
}

int login(string cuenta)
{
  for (int i = 0; i < usuarios.size(); i++)
  {
    usuario us = usuarios[i];

    if (us.cuenta == cuenta)
      return i;
  }
  return -1;
}

int destino(string cuenta)
{
  for (int i = 0; i < usuarios.size(); i++)
  {
    usuario dest = usuarios[i];
    if (dest.cuenta == cuenta && dest.cuenta != usuarios[usuarioActual].cuenta)
      return i;
  }
  return -1;
}
