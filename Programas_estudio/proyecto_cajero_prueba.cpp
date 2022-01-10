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
};

vector<usuario> usuarios{{"55687320", "2484", "Manuel", 800}, {"23576542", "2342", "Jose", 250}, {"62314687", "6839", "Maria", 500}, {"26852197", "5658", "Luis", 1200}};

usuario usuarioActual;
usuario usuarioDest;

usuario login(string cuenta, string NIP);
usuario destino(string cuenta);
int interfazMenu();
void interfazRetiro();
void interfazDepositar();
void interfazTransferir();
string depositar(int monto);
string retirar(int monto);
string transferir(int monto);

void interfazDepositar()
{
  int monto;
  cout << "DEPOSITAR\n";
  cout << "Ingrese monto a depositar\n";
  cin >> monto;
  string estado = depositar(monto);
  cout << estado;
  system("pause");
}
string depositar(int monto)
{
  usuarioActual.saldo += monto;
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
  system("PAUSE");
}

string retirar(int monto)
{
  if (monto <= 0)
    return "El monto debe ser mayor a 0\n";
  if (monto > 9000)
    return "El monto es mayor a lo permitido (9000) \n";
  if (usuarioActual.saldo < monto)
    return "Usted no dispone del saldo \n";
  usuarioActual.saldo -= monto;
  return "El retiro fue exitoso\n";
}
void interfazTransferir()
{
  string cuenta;
  int monto;
  cout << "TRANSFERENCIA\n ";
  cout << "Ingrese el numero de cuenta del usuario al que desea transferir\n";
  cin >> cuenta;
  usuario dest = destino(cuenta);
  if (!dest.cuenta.empty())
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

string transferir(int monto)
{
  if (monto <= 0)
    return "El monto debe ser mayor a 0\n";
  if (usuarioActual.saldo < monto)
    return "Usted no dispone del saldo\n";
  usuarioActual.saldo -= monto;
  usuarioDest.saldo += monto;
  return "La transferencia fue exitosa\n";
}

int interfazMenuUsuario()
{
    int opcion = 0;

  do
  {
  cout << "************ CAJERO AUTOMATICO ************\n";
  cout << " <0> Depositar\n";
  cout << " <1> Retirar\n";
  cout << " <2> Transferir\n";
  cout << " <3> Salir \n";

  cin >> opcion;

  switch (opcion)
  {
  case 0:
    interfazDepositar();
    break;
  case 1:
    interfazRetiro();
  case 2:
    interfazTransferir();
    break;
  return opcion;
  
  }
  }
  while(opcion == 3);
system ("Pause")
}

int main()
{
  while (true)
  {
    system("cls");
    cout << "************ CAJERO AUTOMATICO ************\n";
    interfazMenu();
        system("pause");
  }

  return 0;
}

int interfazMenu()
{
  string cuenta, NIP;
  cout << " Ingresa numero de cuenta \n ";
  cin >> cuenta;
  cout << " Ingresa NIP \n ";
  cin >> NIP;
  usuario us = login(cuenta, NIP);
  if (!us.cuenta.empty())
  {
    usuarioActual = us;
    interfazMenuUsuario();
  }
  else
    cout << " usuario o NIP incorrectos\n";
  return 0;
}

usuario login(string cuenta, string NIP)
{
  for (int i = 0; i < usuarios.size(); i++)
  {
    usuario us = usuarios[i];

    if (us.cuenta == cuenta && us.NIP == NIP)
      return us;
  }
  return {};
}

usuario destino(string cuenta)
{
  for (int i = 0; i < usuarios.size(); i++)
  {
    usuario dest = usuarios[i];

    if (dest.cuenta == cuenta && dest.cuenta != usuarioActual.cuenta)
      return dest;
  }
  return {};
}
