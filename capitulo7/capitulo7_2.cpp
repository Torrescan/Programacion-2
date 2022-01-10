#include <string>
#include <iostream>
#include <limits>
using namespace std;
// MINITEST
int main ()
{
int edad,edad2;
 string myname{};
 cout <<"ingrese su nombre \n";
cin >> myname;
cout <<"Ingrese su edad";
cin >> edad2;
std :: cout << myname << "tiene " << myname.length() << " caracteres\n";
 edad = myname.length() * 3.16;

cout << myname << "tiene " << edad << "  por cada letra de su nombre\n";
}